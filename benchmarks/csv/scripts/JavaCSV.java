package scripts;

import java.io.File;
import java.util.List;
import java.nio.charset.Charset;
import org.apache.commons.csv.*;

class JavaCSV {
	public static void main(String[] args) {
		try {
			File csvData = new File(args[0]);
			CSVParser parser = CSVParser.parse(csvData, Charset.forName("UTF-8"), CSVFormat.RFC4180);
			List<CSVRecord> r = parser.getRecords();
		} catch(Exception e) {
			System.err.println("Major fail");
		}
	}
}
