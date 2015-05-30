
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

/**
 *
 * @author romis_000, Johan
 */
public class ConvexPolygon {

    private ArrayList<PointDouble> points = new ArrayList<PointDouble>();

    public ConvexPolygon(ArrayList<PointDouble> points) {
        this.points = points;
    }

    public ArrayList<PointDouble> getPointDoubles() {
        return points;
    }

    public double[] GetXPointDoubles() {
        double xpoints[] = new double[this.points.size()];
        int c = 0;
        for (PointDouble p : this.points) {
            xpoints[c] = p.x;
            ++c;
        }
        return xpoints;
    }

    public double[] GetYPointDoubles() {
        double ypoints[] = new double[this.points.size()];
        int c = 0;
        for (PointDouble p : this.points) {
            ypoints[c] = p.y;
            ++c;
        }
        return ypoints;
    }

    public double[][] getVertices() {
        double[][] vertices = new double[points.size()][2];
        for (int i = 0; i < points.size(); ++i) {
            vertices[i][0] = points.get(i).x;
            vertices[i][1] = points.get(i).y;
        }
        return vertices;
    }

    /**
     * Returns the axis corresponding to the edges of the polygon, used to check
     * for detection collision
     */
    public PointDouble[] Getaxes() {
        PointDouble[] axes = new PointDouble[this.points.size()];
        for (int i = 0; i < this.points.size(); i++) {
            // get the current vertex
            PointDouble v1 = new PointDouble(this.points.get(i).getX(), this.points.get(i).getY());
            // get the next vertex
            PointDouble v2 = new PointDouble(this.points.get(i + 1 == this.points.size() ? 0 : i + 1).getX(), this.points.get(i + 1 == this.points.size() ? 0 : i + 1).getY());
            // subtract the two to get the edge vector
            PointDouble edge = new PointDouble((v1.x + (-v2.x)), (v1.y + (-v2.y)));
            // get either perpendicular vector
            PointDouble normal = new PointDouble((-edge.y), edge.x);
            // the perp method is just (x, y) => (-y, x) or (y, -x)
            axes[i] = normal;
        }
        return axes;
    }

    /**
     * Checks if the polygon is convex
     */
    public boolean isConvex() {
        PointDouble prev = points.get(points.size() - 2);
        PointDouble curr = points.get(points.size() - 1);
        PointDouble next = points.get(0);
        // Are the first two selected edges making a turnleft ?
        boolean isCCW = turnLeft(prev, curr, next);
        // Verify if all the edges are making the same type of angle as the first two
        for (int i = 1; i < points.size(); i++) {
            prev = curr;
            curr = next;
            next = points.get(i);
            if (turnLeft(prev, curr, next) != isCCW) {
                return false;
            }
        }
        return true;
    }

    /**
     * Checks if a given point is within the polygon
     */
    public boolean contain(PointDouble p) {
        PointDouble prev = points.get(points.size() - 1);
        PointDouble curr = p;
        PointDouble next = points.get(0);
        // Is the point left or right of the selected edge ?
        boolean isCCW = turnLeft(prev, curr, next);
        // Is the point the same side of every other edges of the polygon ?
        for (int i = 1; i < points.size(); i++) {
            prev = next;
            next = points.get(i);
            if (turnLeft(prev, curr, next) != isCCW) {
                return false;
            }
        }
        return true;
    }

    /**
     * Check the sign of the angle between vectors [p1, p2] and [p2, p3]
     * with the cross product
     */
    public boolean turnLeft(PointDouble p1, PointDouble p2, PointDouble p3) {
        return ((p2.getX() - p1.getX()) * (p3.getY()
                - p2.getY()) - (p3.getX() - p2.getX()) * (p2.getY() - p1.getY())) > 0;
    }

    /**
     * Checks if the vertices of the polygon are in counter-clock wise order
     * The vertices of the polygon need to be sorted for this test
     */
    public boolean isCCW() {
        double min = points.get(0).getY();
        int minIndex = 0;
        for (int i = 1; i < points.size() - 1; i++) {
            if (points.get(i).getY() < min) {
                min = points.get(i).getY();
                minIndex = i;
            }
        }
        PointDouble prev = points.get((minIndex - 1 + points.size()) % points.size());
        PointDouble next = points.get((minIndex + 1) % points.size());
        return turnLeft(prev, points.get(minIndex), next);
    }

    /**
     * Calculates the convex hull of list of points
     * Using the monotone chain algorithm
     */
    public ConvexPolygon convexHull(ArrayList<PointDouble> points) {
        Collections.sort(points, new PointXCompare());
        int n = points.size();

        ArrayList<PointDouble> pl1 = new ArrayList<PointDouble>();
        ArrayList<PointDouble> pl2 = new ArrayList<PointDouble>();
        for (int i = 0; i < n; i++) {
            while (pl2.size() >= 2 && !(turnLeft(pl2.get(pl2.size() - 2), pl2.get(pl2.size() - 1), points.get(i)))) {
                pl2.remove(pl2.get(pl2.size() - 1));
            }
            pl2.add(points.get(i));
        }
        for (int i = n - 1; i >= 0; i--) {
            while (pl1.size() >= 2 && !(turnLeft(pl1.get(pl1.size() - 2), pl1.get(pl1.size() - 1), points.get(i)))) {
                pl1.remove(pl1.get(pl1.size() - 1));
            }
            pl1.add(points.get(i));
        }
        pl1.remove(pl1.size() - 1);
        pl2.remove(pl2.size() - 1);
        pl2.addAll(pl1);
        return new ConvexPolygon(pl2);
    }

    /**
     * Translates the polygon from the given numbers
     */
    public void translate(double x, double y) {
        for (PointDouble p : this.points) {
            p.x += x;
            p.y += y;
        }
    }

    /**
     * Checks for an intersection between the polygon and the second given
     * polygon
     */
    public Boolean intersects(ConvexPolygon pol2) {
        PointDouble[] axes1 = this.Getaxes();
        PointDouble[] axes2 = pol2.Getaxes();
        for (int i = 0; i < axes1.length; i++) {
            PointDouble axis = axes1[i];
            // project both shapes onto the axis
            Projection p1 = this.project(axis);
            Projection p2 = pol2.project(axis);
            // do the projections overlap?
            if (!p1.overlap(p2)) {
                // then we can guarantee that the shapes do not overlap
                return false;
            }
        }
        for (int i = 0; i < axes2.length; i++) {
            PointDouble axis = axes2[i];
            Projection p1 = this.project(axis);
            Projection p2 = pol2.project(axis);
            if (!p1.overlap(p2)) {
                return false;
            }
        }
        return true;
    }

    /**
     * Generates a projection of an edge of the polygon on a given axis
     */
    public Projection project(PointDouble axis) {
        double min = ((axis.x * this.points.get(0).x) + (axis.y * this.points.get(0).y));
        double max = min;
        for (int i = 1; i < this.points.size(); i++) {
            double p = ((axis.x * this.points.get(i).x) + (axis.y * this.points.get(i).y));
            if (p < min) {
                min = p;
            } else if (p > max) {
                max = p;
            }
        }
        Projection proj = new Projection(min, max);
        return proj;
    }

    public Boolean hasVertex(PointDouble pt) {
        for (int i = 0; i < this.points.size(); i++) {
            //for (int i = 0; i < this.points.size() - 1; i++) {
            if (this.points.get(i).equals(pt)) {
                return true;
            }
        }
        return false;
    }

    public Boolean deleteVertex(PointDouble pt) {
        if (this.points.size() > 3) {
            for (int i = 0; i < this.points.size(); i++) {
                if (this.points.get(i).equals(pt)) {
                    this.points.remove(i);
                    return true;
                }
            }
        }
        return false;
    }

    /**
     * Sorts the vertices of the polygon in an order specified by the sorter
     * used
     */
    public void sortVertices(PolygonSorter sorter) {
        PointDouble[] arrPointDoubles = points.toArray(new PointDouble[points.size()]);
        Arrays.sort(arrPointDoubles, sorter);
        this.points.clear();
        points.addAll(Arrays.asList(arrPointDoubles));
    }

    /*
    * Add a vertex to the polygon
    * Return true if the vertex is added to the polygon
    * Return false otherwise, which means that the addition
    * of the vertex would have made it concave.
    */
    public Boolean addVertex(PointDouble pt) {
        // Make a temporary list to check some properties of the new polygon
        ArrayList<PointDouble> tempList = new ArrayList<>(Arrays.asList(this.points.toArray(new PointDouble[this.points.size()])));
        tempList.add(pt);
        // Create a temporary polygon
        ConvexPolygon tempPolygon = new ConvexPolygon(tempList);
        // Sort it
        tempPolygon.sortVertices(new AntiClockSort(tempPolygon.getVertices()));
        // We need the new polygon to be convex, or we can't accept to add the new vertex.
        if (tempPolygon.isConvex()) {
            this.points = tempPolygon.points;
            return true;
        } else {
            return false;
        }
    }
}
