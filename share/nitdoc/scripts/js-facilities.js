var state = false;

// SHA
var shaLastCommit;
var shaBaseTree;
var shaNewTree;
var shaNewCommit;
var shaBlob;

// User
var userB64 = null;
var currentTree;
var pathFile;
var recurTree = "";
var text = "";
var toto = "";
var githubRepo = "";
var userName = "";
var password = "";
var idBlob;
var commitMessage = "";
var preElement;
var newComment;


/*
* JQuery Case Insensitive :icontains selector
*/
$.expr[':'].icontains = function(obj, index, meta, stack){
	return (obj.textContent.replace(/\[[0-9]+\]/g, "") || obj.innerText.replace(/\[[0-9]+\]/g, "") || jQuery(obj).text().replace(/\[[0-9]+\]/g, "") || '').toLowerCase().indexOf(meta[3].toLowerCase()) >= 0;
};

/*
 *	Quick Search global vars
 */
 
// Current search results preview table
var currentTable = null;

//Hightlighted index in search result preview table
var currentIndex = -1;


/*
* Add folding and filtering facilities to class description page.
*/
$(document).ready(function() {
	
	/*
	* Highlight the spoted element
	*/
	highlightBlock(currentAnchor());

	/*
	* Nav block folding
	*/
	
	// Menu nav folding
	$(".menu nav h3")
	.prepend(
		$(document.createElement("a"))
		.html("-")
		.addClass("fold")
	)
	.css("cursor", "pointer")
	.click( function() {
			if($(this).find("a.fold").html() == "+") {
				$(this).find("a.fold").html("-");
			} else {
				$(this).find("a.fold").html("+");
			}
			$(this).nextAll().toggle();
	})
	
	// Insert search field
	$("nav.main ul")
	.append(
		$(document.createElement("li"))
		.append(
			$(document.createElement("form"))
			.append(
				$(document.createElement("input"))
				.attr({
					id: "search",
					type:	"text",
					autocomplete: "off",
					value: "quick search..."
				})
				.addClass("notUsed")

				// Key management
				.keyup(function(e) {
					switch(e.keyCode) {

						// Select previous result on "Up"
						case 38:
							// If already on first result, focus search input
							if(currentIndex == 0) {
								$("#search").val($(currentTable.find("tr")[currentIndex]).data("searchDetails").name);
								$("#search").focus();
							// Else select previous result
							} else if(currentIndex > 0) {
								$(currentTable.find("tr")[currentIndex]).removeClass("activeSearchResult");
								currentIndex--;
								$(currentTable.find("tr")[currentIndex]).addClass("activeSearchResult");
								$("#search").val($(currentTable.find("tr")[currentIndex]).data("searchDetails").name);
								$("#search").focus();
							}
						break;

						// Select next result on "Down"
						case 40:
							if(currentIndex < currentTable.find("tr").length - 1) {
								$(currentTable.find("tr")[currentIndex]).removeClass("activeSearchResult");
								currentIndex++;
								$(currentTable.find("tr")[currentIndex]).addClass("activeSearchResult");
								$("#search").val($(currentTable.find("tr")[currentIndex]).data("searchDetails").name);
								$("#search").focus();
							}
						break;
						// Go to url on "Enter"
						case 13:
							if(currentIndex > -1) {
								window.location = $(currentTable.find("tr")[currentIndex]).data("searchDetails").url;
								return false;
							}
							if($("#search").val().length == 0)
								return false
				
							window.location = "full-index.html#q=" + $("#search").val();
							if(window.location.href.indexOf("full-index.html") > -1) {
								location.reload();
							}				
							return false;
						break;

						// Hide results preview on "Escape"
						case 27:
							$(this).blur();
							if(currentTable != null) {
								currentTable.remove();
								currentTable = null;
							}
						break;

						default:
							if($("#search").val().length == 0) {
								return false;
							}
						
							// Remove previous table
							if(currentTable != null) {
								currentTable.remove();
							}

							// Build results table
							currentIndex = -1;
							currentTable = $(document.createElement("table"));

							// Escape regexp related characters in query
							var query = $("#search").val();
							query = query.replace(/\[/gi, "\\[");
							query = query.replace(/\|/gi, "\\|");
							query = query.replace(/\*/gi, "\\*");
							query = query.replace(/\+/gi, "\\+");
							query = query.replace(/\\/gi, "\\\\");
							query = query.replace(/\?/gi, "\\?");
							query = query.replace(/\(/gi, "\\(");
							query = query.replace(/\)/gi, "\\)");

							var index = 0;
							var regexp = new RegExp("^" + query, "i");
							for(var entry in entries) {
								if(index > 10) {
									break;
								}
								var result = entry.match(regexp);
								if(result != null && result.toString().toUpperCase() == $("#search").val().toUpperCase()) {
									for(var i = 0; i < entries[entry].length; i++) {
										if(index > 10) {
											break;
										}
										currentTable.append(
											$(document.createElement("tr"))
											.data("searchDetails", {name: entry, url: entries[entry][i]["url"]})
											.data("index", index)
											.append($(document.createElement("td")).html(entry))
											.append(
												$(document.createElement("td"))
													.addClass("entryInfo")
													.html(entries[entry][i]["txt"] + "&nbsp;&raquo;"))
											.mouseover( function() {
												$(currentTable.find("tr")[currentIndex]).removeClass("activeSearchResult");
												$(this).addClass("activeSearchResult");
												currentIndex = $(this).data("index");
											})
											.mouseout( function() {
												$(this).removeClass("activeSearchResult");
											 })
											.click( function() {
												window.location = $(this).data("searchDetails")["url"];
											})
										);
										index++;
									}
								}
							}
							
							// Initialize table properties
							currentTable.attr("id", "searchTable");
							currentTable.css("position", "absolute");
							currentTable.width($("#search").outerWidth());
							$("header").append(currentTable);
							currentTable.offset({left: $("#search").offset().left + ($("#search").outerWidth() - currentTable.outerWidth()), top: $("#search").offset().top + $("#search").outerHeight()});

							// Preselect first entry
							if(currentTable.find("tr").length > 0) {
								currentIndex = 0;
								$(currentTable.find("tr")[currentIndex]).addClass("activeSearchResult");
								$("#search").focus();
							}
						break;
					}
				})
				.focusout(function() {
					if($(this).val() == "") {
						$(this).addClass("notUsed");
						$(this).val("quick search...");
					}
				})
				.focusin(function() {
					if($(this).val() == "quick search...") {
						$(this).removeClass("notUsed");
						$(this).val("");
					}
				})
			)
			.submit( function() {
				return false;
			})
		)
	 );

	 // Close quicksearch list on click
	 $(document).click(function(e) {
		if(e.target != $("#search")[0] && e.target != $("#searchTable")[0]) {
			if(currentTable != null) {
				currentTable.remove();
				currentTable = null;
			}
		}
	 });
	
	// Insert filter field
	$("article.filterable h2, nav.filterable h3")
	.after(
		$(document.createElement("div"))
		.addClass("filter")
		.append(
			$(document.createElement("input"))
			.attr({
				type:	"text",
				value:	"filter..."
			})
			.addClass("notUsed")
			.keyup(function() {
				$(this).parent().parent().find("ul li:not(:icontains('" + $(this).val() + "'))").addClass("hide");
				$(this).parent().parent().find("ul li:icontains('" + $(this).val() + "')").removeClass("hide");
			})
			.focusout(function() {
				if($(this).val() == "") {
					$(this).addClass("notUsed");
					$(this).val("filter...");
				}
			})
			.focusin(function() {
				if($(this).val() == "filter...") {
					$(this).removeClass("notUsed");
					$(this).val("");
				}
			})
		)
	);
	
	// Filter toggle between H I R in nav porperties list
	$("nav.properties.filterable .filter")
	.append(
		$(document.createElement("a"))
		.html("H")
		.attr({
			title:	"hide inherited properties"
		})
		.click( function() {
			if($(this).hasClass("hidden")) {
				$(this).parent().parent().find("li.inherit").show();
			} else {
				$(this).parent().parent().find("li.inherit").hide();
			}
			
			$(this).toggleClass("hidden");
		})
	)
	.append(
		$(document.createElement("a"))
		.html("R")
		.attr({
			title:	"hide redefined properties"
		})
		.click( function() {
			if($(this).hasClass("hidden")) {
				$(this).parent().parent().find("li.redef").show();
			} else {
				$(this).parent().parent().find("li.redef").hide();
			}
			
			$(this).toggleClass("hidden");
		})
	)
	.append(
		$(document.createElement("a"))
		.html("I")
		.attr({
			title:	"hide introduced properties"
		})
		.click( function() {
			if($(this).hasClass("hidden")) {
				$(this).parent().parent().find("li.intro").show();
			} else {
				$(this).parent().parent().find("li.intro").hide();
			}
			
			$(this).toggleClass("hidden");
		})
	);
	
	// Filter toggle between I R in 
	$("article.properties.filterable .filter, article.classes.filterable .filter")
	.append(
		$(document.createElement("a"))
		.html("I")
		.attr({
			title:	"hide introduced properties"
		})
		.click( function() {
			if($(this).hasClass("hidden")) {
				$(this).parent().parent().find("li.intro").show();
			} else {
				$(this).parent().parent().find("li.intro").hide();
			}
			
			$(this).toggleClass("hidden");
		})
	)
	.append(
		$(document.createElement("a"))
		.html("R")
		.attr({
			title:	"hide redefined properties"
		})
		.click( function() {
			if($(this).hasClass("hidden")) {
				$(this).parent().parent().find("li.redef").show();
			} else {
				$(this).parent().parent().find("li.redef").hide();
			}
			
			$(this).toggleClass("hidden");
		})
	);

	/*
	* Anchors jumps
	*/
	$("a[href*='#']").click( function() {
		highlightBlock($(this).attr("href").split(/#/)[1]);
	});
	
	//Preload filter fields with query string
	preloadFilters();

	



	/*  Proto TestWikiDoc */

	var Arrays = new Array();
	$('textarea').hide();

	// Open edit file
   	 $('.text_label').click(function(){
        	$(this).hide();
        	$(this).next().hide();
        	$(this).next().text($(this).text());
        	$(this).next().show();        
    		$(this).next().height($(this).next().prop("scrollHeight"));
        	$(this).next().select();
        	preElement = $(this);
    	});

	// Close editing
	$('textarea').blur(function() {
		/*var id;
		var text;
		var url;
		var line;

    	if ($.trim(this.value) == ''){
         		this.value = (this.defaultValue ? this.defaultValue : '');
     	}
     	else{
     			id = $(this).prev().attr('id');
     			text = this.value.replace("'", "`");
     			pathFile = "/lib/standard/collection/array.nit";
     			//pathFile = 'https://api.github.com/repos/StefanLage/TestWikiDoc/git/blobs/' + id;
     			line = $(this).prev().attr('title');

     			var lines = $(this).prev().text().split(/\r|\r\n|\n/);
				var count = lines.length - 1;
				console.log(count); 

     			/*if (jQuery.inArray(id, Arrays)){
     				//Arrays.push("'id': '"+id+"', 'info': [{'text': '"+text+"', 'link': '"+url+"', 'line': '"+line+"'}]}");
     				alert('toto');
     			}
     			else{
     				alert('test');	
     			}*/
     			/*var t = "{'id': '"+id+"', 'text': '"+text+"', 'link': "+url+", 'line': "+line+"}";

     			//Arrays.push(JSON.stringify(eval("(" + t + ")")));
     			Arrays.push("'id': '"+id+"', 'text': '"+text+"', 'link': '"+url+"', 'line': '"+line+"'}");
     			alert(Arrays);
         		

         		// Get file content
         		//alert(getFileContent(pathFile));
         		window.toto = window.getFileContent(pathFile);
         		//alert(getFileContent(pathFile));
         		text = toto.replace($(this).prev().text(), this.value);
         		getLastCommit();

         		$(this).prev().html(this.value);*/
         		//pathFile = 'https://api.github.com/repos/StefanLage/TestWikiDoc/git/blobs/' + id;
         		/*var pathBlob = 'https://api.github.com/repos/StefanLage/TestWikiDoc/git/blobs/' + id;
				$.when(getFileContent(pathBlob, $(this).prev().text(), this.value)).done(function(){

						//alert(text);
						//text = this.value;
						getLastCommit();

						
				});
				
				$(this).prev().html(this.value);
         		//om($(this).prev().attr('id'), this.value, $(this).prev().attr('title'), $(this).prev());
     	}	*/

     	$('#modal' ).show().prepend('<a href="" class="close"><img src="resources/icons/close.png" class="btn_close" title="Fermer" alt="Fermer" /></a>');
			 //Effet fade-in du fond opaque
		$('body').append('<div id="fade"></div>'); //Ajout du fond opaque noir
		//Apparition du fond - .css({'filter' : 'alpha(opacity=80)'}) pour corriger les bogues de IE
		$('#fade').css({'filter' : 'alpha(opacity=80)'}).fadeIn();

		idBlob = $(this).prev().attr('id');
		newComment = this.value;
		

     	$(this).hide();
     	$(this).prev().show();
     	$(this).prev().prev().show();        
	});


	//Close Popups and Fade Layer
	$('body').on('click', 'a.close, #fade', function() { //Au clic sur le body...
		$('#fade , #modal').fadeOut(function() {
			$('#fade, a.close').remove();  
		});
	});

	$('#loginAction').click(function(){

		var text;
		var url;
		var line;

		userName = $('#login').val();
		password = $('#password').val();
		userB64 = "Basic " +  base64.encode(userName+':'+password);
		githubRepo = $('#repoName').attr('name');
		commitMessage = $('#commitMessage').val();
		
		if(commitMessage == ""){
			commitMessage = "New commit";
		}

		$('#fade , #modal').fadeOut(function() {
			$('#login').val("");
			$('#password').val("");
			$('#fade, a.close').remove();  
		});
		if(userName != "" && password != ""){	
			if ($.trim(newComment) == ''){
	         		this.value = (this.defaultValue ? this.defaultValue : '');
	         		alert('toto');
	     	}
	     	else{
	     			
	     			text = newComment.replace("'", "`");
	     			pathFile = "/lib/standard/collection/array.nit";
	     			//pathFile = 'https://api.github.com/repos/StefanLage/TestWikiDoc/git/blobs/' + id;
	     			line = $(this).prev().attr('title');

	     			var lines = $(this).prev().text().split(/\r|\r\n|\n/);
					var count = lines.length - 1;
					console.log(count); 

	     			/*if (jQuery.inArray(id, Arrays)){
	     				//Arrays.push("'id': '"+id+"', 'info': [{'text': '"+text+"', 'link': '"+url+"', 'line': '"+line+"'}]}");
	     				alert('toto');
	     			}
	     			else{
	     				alert('test');	
	     			}*/
	     			/*var t = "{'id': '"+id+"', 'text': '"+text+"', 'link': "+url+", 'line': "+line+"}";

	     			//Arrays.push(JSON.stringify(eval("(" + t + ")")));
	     			Arrays.push("'id': '"+id+"', 'text': '"+text+"', 'link': '"+url+"', 'line': '"+line+"'}");
	     			alert(Arrays);
	         		

	         		// Get file content
	         		//alert(getFileContent(pathFile));
	         		window.toto = window.getFileContent(pathFile);
	         		//alert(getFileContent(pathFile));
	         		text = toto.replace($(this).prev().text(), this.value);
	         		getLastCommit();

	         		$(this).prev().html(this.value);*/
	         		//pathFile = 'https://api.github.com/repos/StefanLage/TestWikiDoc/git/blobs/' + id;
	         		var pathBlob = 'https://api.github.com/repos/'+userName+'/'+githubRepo+'/git/blobs/' + idBlob;
					$.when(getFileContent(pathBlob, preElement.text(), newComment)).done(function(){

							//alert(text);
							//text = this.value;
							getLastCommit();

							
					});
					
					//$(this).prev().html(this.value);
	         		//om($(this).prev().attr('id'), this.value, $(this).prev().attr('title'), $(this).prev());
	     	}
	     }
	})


});

/* Parse current URL and return anchor name */
function currentAnchor() {  
    var index = document.location.hash.indexOf("#");
    if (index >= 0) {
		return document.location.hash.substring(index + 1);
	}
	return null;
}

/* Prealod filters field using search query */
function preloadFilters() {
	// Parse URL and get query string
	var search = currentAnchor();
	
	if(search == null || search.indexOf("q=") == -1)
		return;
		
	search = search.substring(2, search.length);	
	
	if(search == "" || search == "undefined")
		return;
	
	$(":text").val(search);
	$(".filter :text")
		.removeClass("notUsed")
		.trigger("keyup");

}

/* Hightlight the spoted block */
function highlightBlock(a) {
	if(a == undefined) {
		return;
	}

	$(".highlighted").removeClass("highlighted");
	
	var target = $("#" + a);
	
	if(target.is("article")) {
		target.parent().addClass("highlighted");
	}
	
	target.addClass("highlighted");
	target.show();
}







function com(id, text, line, element)
{
	//text = this.value.replace("'", "`");
	//pathFile = $(this).prev().attr('name');
	
	//line = $(this).prev().attr('title');

	/*var lines = $(this).prev().text().split(/\r|\r\n|\n/);
	var count = lines.length - 1;
	console.log(count); */

	//Arrays.push(JSON.stringify(eval("(" + t + ")")));
	//Arrays.push("'id': '"+id+"', 'text': '"+text+"', 'link': '"+url+"', 'line': '"+line+"'}");
	//alert(Arrays);


	// Get file content
	//alert(getFileContent(pathFile));
	//window.toto = window.getFileContent(pathFile, t, t2);

	//pathFile = 'https://api.github.com/repos/StefanLage/TestWikiDoc/git/blobs/' + $.sha1("blob"+ $(this).attr +"\0" + id + "\n");
	$.when(getFileContent(pathFile)).done(function(){

			//alert(text);
			text.
			getLastCommit();

			element.html(this.value);
	});
	
}





function loadContent()
{
    state = false;
    //getLastCommit();
    //getCurrentTree();

    //$("ul").empty();

    loadFile();
}

function loadFile()
{
    getLastCommit();
    getBlobsTree(shaBaseTree);
}


function getLastCommit() 
{
    

    $.ajax({
        beforeSend: function (xhr) { 
            //if ($("#login").val() != ""){ 
                xhr.setRequestHeader ("Authorization", userB64);
            //}
        },
        type: "GET",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/refs/heads/master",
        dataType:"json",
        async: false,

        success: function(success)
        {
            shaLastCommit = success.object.sha;
            getBaseTree();
        }
    });
}

function getBaseTree()
{
    $.ajax({ 
        beforeSend: function (xhr) { 
            //if ($("#login").val() != ""){ 
                xhr.setRequestHeader ("Authorization", userB64);
            //}
        },
        type: "GET",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/commits/" + shaLastCommit,
        dataType:"json",
        async: false,
        success: function(success)
        {   
            shaBaseTree = success.tree.sha;
            if (state){
                setBlob();
            }
            else
            {
                //getCurrentTree();
                return;
            }
        }
    });
}

function setNewTree()
{
	//pathFile = "lib/array.nit";

    $.ajax({ 
        beforeSend: function (xhr) { 
            xhr.setRequestHeader ("Authorization", userB64);
        },
        type: "POST",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/trees", 
        data:'{ "base_tree" : "'+shaBaseTree+'", '+
                '"tree":[{ '+
                    '"path":"'+ pathFile.substring(1,pathFile.length) +'",'+
                    '"mode":"100644",'+
                    '"type":"blob",'+
                    '"sha": "'+ shaBlob +'"'+
                '}] '+
            '}',
        
        success: function(success)
        { // si l'appel a bien fonctionné
            shaNewTree = JSON.parse(success).sha;
            setNewCommit();
        }
    });
}

function setNewCommit()
{
    $.ajax({ 
        beforeSend: function (xhr) { 
            xhr.setRequestHeader ("Authorization", userB64);
        },
        type: "POST",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/commits", 
        data:'{ "message" : "'+ commitMessage +'", '+
                '"parents" :"'+shaLastCommit+'",'+ 
                '"tree": "'+shaNewTree+'"'+
             '}',

        success: function(success)
        {
            shaNewCommit = JSON.parse(success).sha;
            commit();
        }
    });
}

function commit()
{
    $.ajax({ 
        beforeSend: function (xhr) { 
            xhr.setRequestHeader ("Authorization", userB64);
        },
        type: "POST",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/refs/heads/master", 
        data:'{ "sha" : "'+shaNewCommit+'", '+
                '"force" :"true"'+
             '}',

        success: function(success)
        {
            //loadContent();
            window.open(JSON.parse(success).object.url, '_blank');
            window.focus();
        }
    });
}


function setBlob()
{
    //alert($(".text_label").text());
    //alert(text);
    $.ajax({
        beforeSend: function (xhr) { 
            xhr.setRequestHeader ("Authorization",  userB64);
        },
        type: "POST", 
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/blobs", 
        data:'{ "content" : "'+text.replace(/\r?\n/g, '\\n').replace(/\t/g, '\\t')+'", '+
                '"encoding" :"utf-8"'+
            '}',
        
        success: function(success)
        {
            //alert(success); 
            shaBlob = JSON.parse(success).sha;
            setNewTree();
        }
    });
}


// Display file content
function getFileContent(urlFile, t, t2)
{
    $.ajax({
        beforeSend: function (xhr) { 
            xhr.setRequestHeader ("Accept",  "application/vnd.github-blob.raw");
            //if ($("#login").val() != ""){ 
                xhr.setRequestHeader ("Authorization", userB64);
            //}
        },
        type: "GET", 
        url: urlFile, 
        async:false,

        success: function(success)
        {
            //$("#fileContent").text(success);
            //$('.text_label').text(success);

            state = true;
            text = success.replace(t, t2);
            //alert(text);
            //return text;
        }
    });

    //alert('toto');
}


// Get BLOBS of the Tree
function getBlobsTree(tree)
{
    $.ajax({
        beforeSend: function (xhr) { 
            //if ($("#login").val() != ""){ 
                xhr.setRequestHeader ("Authorization", userB64);
            //}
        },
        type: "GET", 
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/trees/" + tree, 
        async:false,
        dataType:'json',

        success: function(success)
        {   
            $(success.tree).each(function(index, object){
                
                if(object.mode == "040000"){
                    if(recurTree == ""){
                        recurTree = object.path + "/";
                    }
                    else{
                        recurTree += object.path;
                    }
                    getBlobsTree(object.sha);
                }
                else{
                    addLi(object, recurTree + object.path);
                } 
            })
            recurTree = "";
        }
    });
}

// Add file in UL
function addLi(blob, path)
{
    $(".menu ul").append('<li id="'+blob.sha+'" name="'+path+'"><a><span class="'+path+'" name="'+path+'" id="'+blob.sha+'">'+blob.path+'</span></a></li>');
}



base64 = {};
base64.PADCHAR = '=';
base64.ALPHA = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/';
base64.getbyte64 = function(s,i) {
    // This is oddly fast, except on Chrome/V8.
    //  Minimal or no improvement in performance by using a
    //   object with properties mapping chars to value (eg. 'A': 0)
    var idx = base64.ALPHA.indexOf(s.charAt(i));
    if (idx == -1) {
    throw "Cannot decode base64";
    }
    return idx;
}

base64.decode = function(s) {
    // convert to string
    s = "" + s;
    var getbyte64 = base64.getbyte64;
    var pads, i, b10;
    var imax = s.length
    if (imax == 0) {
        return s;
    }

    if (imax % 4 != 0) {
    throw "Cannot decode base64";
    }

    pads = 0
    if (s.charAt(imax -1) == base64.PADCHAR) {
        pads = 1;
        if (s.charAt(imax -2) == base64.PADCHAR) {
            pads = 2;
        }
        // either way, we want to ignore this last block
        imax -= 4;
    }

    var x = [];
    for (i = 0; i < imax; i += 4) {
        b10 = (getbyte64(s,i) << 18) | (getbyte64(s,i+1) << 12) |
            (getbyte64(s,i+2) << 6) | getbyte64(s,i+3);
        x.push(String.fromCharCode(b10 >> 16, (b10 >> 8) & 0xff, b10 & 0xff));
    }

    switch (pads) {
    case 1:
        b10 = (getbyte64(s,i) << 18) | (getbyte64(s,i+1) << 12) | (getbyte64(s,i+2) << 6)
        x.push(String.fromCharCode(b10 >> 16, (b10 >> 8) & 0xff));
        break;
    case 2:
        b10 = (getbyte64(s,i) << 18) | (getbyte64(s,i+1) << 12);
        x.push(String.fromCharCode(b10 >> 16));
        break;
    }
    return x.join('');
}

base64.getbyte = function(s,i) {
    var x = s.charCodeAt(i);
    if (x > 255) {
        throw "INVALID_CHARACTER_ERR: DOM Exception 5";
    }
    return x;
}


base64.encode = function(s) {
    if (arguments.length != 1) {
    throw "SyntaxError: Not enough arguments";
    }
    var padchar = base64.PADCHAR;
    var alpha   = base64.ALPHA;
    var getbyte = base64.getbyte;

    var i, b10;
    var x = [];

    // convert to string
    s = "" + s;

    var imax = s.length - s.length % 3;

    if (s.length == 0) {
        return s;
    }
    for (i = 0; i < imax; i += 3) {
        b10 = (getbyte(s,i) << 16) | (getbyte(s,i+1) << 8) | getbyte(s,i+2);
        x.push(alpha.charAt(b10 >> 18));
        x.push(alpha.charAt((b10 >> 12) & 0x3F));
        x.push(alpha.charAt((b10 >> 6) & 0x3f));
        x.push(alpha.charAt(b10 & 0x3f));
    }
    switch (s.length - imax) {
    case 1:
        b10 = getbyte(s,i) << 16;
        x.push(alpha.charAt(b10 >> 18) + alpha.charAt((b10 >> 12) & 0x3F) +
               padchar + padchar);
        break;
    case 2:
        b10 = (getbyte(s,i) << 16) | (getbyte(s,i+1) << 8);
        x.push(alpha.charAt(b10 >> 18) + alpha.charAt((b10 >> 12) & 0x3F) +
               alpha.charAt((b10 >> 6) & 0x3f) + padchar);
        break;
    }
    return x.join('');
}
