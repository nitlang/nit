
/**
 *
 * @author Johan
 * @source
 * http://stackoverflow.com/questions/6989100/sort-points-in-clockwise-order
 */
public class AntiClockSort extends PolygonSorter {

    public AntiClockSort(double[][] points) {
        super(points);
    }

    /**
     * Compare polygon vertices in counter-clock wise order starting at six
     * hour. If two points share the same rad, then the farest to the center is
     * chosen.
     *
     * @param a: a point to compare
     * @param b: a second point to compare
     * @return
     */
    @Override
    public int compare(PointDouble a, PointDouble b) {
        if (a.x - center.x >= 0 && b.x - center.x < 0) {
            return -1;
        }
        if (a.x - center.x < 0 && b.x - center.x >= 0) {
            return +1;
        }
        if (a.x - center.x == 0 && b.x - center.x == 0) {
            if (a.y - center.y >= 0 || b.y - center.y >= 0) {
                return (a.y > b.y) ? -1 : +1;
            }
            return (b.y > a.y) ? -1 : +1;
        }

        // compute the cross product of vectors (center -> a) x (center -> b)
        double det = (a.x - center.x) * (b.y - center.y) - (b.x - center.x) * (a.y - center.y);
        if (det < 0) {
            return -1;
        }
        if (det > 0) {
            return +1;
        }

        // points a and b are on the same line from the center
        // check which point is closer to the center
        double d1 = (a.x - center.x) * (a.x - center.x) + (a.y - center.y) * (a.y - center.y);
        double d2 = (b.x - center.x) * (b.x - center.x) + (b.y - center.y) * (b.y - center.y);
        return (d1 > d2) ? -1 : +1;
    }
}
