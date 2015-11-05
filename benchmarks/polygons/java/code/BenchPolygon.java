import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.Random;

/**
 *
 * @author Johan Kayser, Romain Chanoir
 */
/**
 * Runs the benchmarks for the most important operations and generates a file
 * with time execution results
 */
public class BenchPolygon {

    public static void main(String[] args) throws IOException {
	    int  n = 0;
	    if(args[1] != null){
		n = Integer.parseInt(args[1]);
	    }else {
		n = 100000;
	    }
	switch (args[0]){
		case "add_vertex":
			testAddVertex(n);
			break;
		case "sort_vertices":
			testSortVertices(n);
			break;
		case "intersection":
			testIntersects(n);
			break;
		case "convex_hull":
			testConvexHull(n);
			break;
		case "convexity":
			testIsConvex(n);
			break;
		case "contain":
			testContain(n);
			break;
		default:
			break;
	}
    }

    /**
     * addVertex bench: adds a vertex to a polygon with the given number of
     * vertices
     */
    public static void testAddVertex(int nb) throws IOException {
        ArrayList<PointDouble> points = new ArrayList<>();
        ArrayList<PointDouble> randomPoints = new ArrayList<>();
        randomPoints = generatePoints(nb + 1);

        for (int i = 0; i < nb; ++i) {
            points.add(randomPoints.remove(0));
        }
        ConvexPolygon test = new ConvexPolygon(points);
        test.sortVertices(new AntiClockSort(test.getVertices()));

        test.addVertex(randomPoints.remove(0));
    }

    /**
     * sortVertices bench: sorts the given number of vertices in the ArrayList
     * of a polygon
     */
    public static void testSortVertices(int nb) throws IOException {
        ArrayList<PointDouble> randomPoints = new ArrayList<>();
        randomPoints = generatePoints(nb);
        Collections.shuffle(randomPoints);

        ConvexPolygon test = new ConvexPolygon(randomPoints);
        test.sortVertices(new AntiClockSort(test.getVertices()));

    }

    /**
     * intersects bench: tests the intersection between two polygons with the
     * given number of vertices
     */
    public static void testIntersects(int nb) throws IOException {
        ArrayList<PointDouble> points1 = new ArrayList<>();
        ArrayList<PointDouble> points2 = new ArrayList<>();
        points1 = generatePoints(nb);
        points2 = generatePoints(nb);
        ConvexPolygon test1 = new ConvexPolygon(points1);
        ConvexPolygon test2 = new ConvexPolygon(points2);
        test1.sortVertices(new AntiClockSort(test1.getVertices()));
        test2.sortVertices(new AntiClockSort(test2.getVertices()));

        Boolean rez = test1.intersects(test2);
    }

    /**
     * convexHull bench: gets the convex hull of the given number of points
     */
    public static void testConvexHull(int nb) throws IOException {
        ArrayList<PointDouble> randomPoints = new ArrayList<>();
        randomPoints = generatePoints(nb);
        Collections.shuffle(randomPoints);
        ConvexPolygon test = new ConvexPolygon(randomPoints);

        ConvexPolygon rez = test.convexHull(randomPoints);
    }

    /**
     * isConvex bench: checks if the polygon with the given number of vertices
     * is convex (we test the worst case -> polygon vertices are ordered)
     */
    public static void testIsConvex(int nb) throws IOException {
        ArrayList<PointDouble> randomPoints = new ArrayList<>();
        randomPoints = generatePoints(nb);
        ConvexPolygon test = new ConvexPolygon(randomPoints);
        test.sortVertices(new AntiClockSort(test.getVertices()));

        Boolean rez = test.isConvex();
    }

    /**
     * contain bench: checks if the polygon with the given number of vertices
     * contains a randomly generated point
     */
    public static void testContain(int nb) throws IOException {
        ArrayList<PointDouble> randomPoints = new ArrayList<>();
        randomPoints = generatePoints(nb);
        ConvexPolygon test = new ConvexPolygon(randomPoints);
        test.sortVertices(new AntiClockSort(test.getVertices()));

        Boolean rez = test.contain(new PointDouble(0.0, 0.0));
    }

    /**
     * generates some points making it easier to use convex polygons
     */
    public static ArrayList<PointDouble> generatePoints(int nb) {
        ArrayList<PointDouble> pts = new ArrayList<>();
        pts = PointDouble.getNPointsOnCircle(100.0, nb);
        return pts;
    }
}
