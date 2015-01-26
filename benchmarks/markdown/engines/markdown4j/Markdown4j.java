import com.github.rjeschke.txtmark.Processor;
import java.io.File;
import java.io.IOException;

public class Markdown4j {
	public static void main(String[] args) throws IOException {
		int n = Integer.parseInt(args[1]);
		for(int i = 0; i < n; i++) {
			System.out.println(Processor.process(new File(args[0])));
		}
	}
}
