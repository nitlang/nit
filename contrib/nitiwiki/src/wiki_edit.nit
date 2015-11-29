import nitcorn
import markdown

fun html_document(body: String): String do
    return """
        <!DOCTYPE html>
        <head>
            <meta charset="utf-8">
            <title>Nitiwiki Edit</title>
        </head>
        <body>
          """ + body + """
        </body>
        </html>"""
end

class EditMarkdownAction
    super Action

    redef fun answer(http_request, turi)
    do
        var response = new HttpResponse(200)
        var file_path = turi.substring(1, turi.length)
        var md_file = new FileReader.open(file_path)
        response.body = html_document("""
            <form method="POST" action="/preview">
              You may edit the file. When you are done, click on "Submit".<br/>
              <textarea name="content" rows="30" cols="80" style="font-family: Courier">""" + md_file.read_all + """</textarea><br/>
              <input type="submit" name="action" value="Preview">
              <input type="submit" name="action" value="Submit">
              <input type="hidden" name="filepath" value="""" + file_path + """">
            </form>""")
        md_file.close
        return response
    end
end

class PreviewMarkdown2HTMLAction
    super Action

    redef fun answer(http_request, turi)
    do
        var response = new HttpResponse(200)
        var content = http_request.post_args["content"]
        var action = http_request.post_args["action"]
        var file_path = http_request.post_args["filepath"]
        if action == "Preview" then
            response.body = html_document("""
                <p>
                """ + content.md_to_html.to_s + """
                </p>
            """)
        else if action == "Submit" then
            var md_file = new FileWriter.open(file_path)
            md_file.write(content)
            response.body = html_document("""
                <p>Updated file!</p>
            """)
            md_file.close
        end
        return response
    end
end

var vh = new VirtualHost("localhost:8080")

# Serve Markdown editing
vh.routes.add new Route("/edit", new EditMarkdownAction)
vh.routes.add new Route("/preview", new PreviewMarkdown2HTMLAction)

# Serve everything else with a standard `FileServer`
vh.routes.add new Route(null, new FileServer("/var/www/"))

var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh
factory.run
