
import java.util.Comparator;

/**
 *
 * @author romis_000
 */
class PointXCompare
        implements Comparator<PointDouble> {

    @Override
    public int compare(final PointDouble a, final PointDouble b) {
        if (a.x == b.x) {
            //return (int) (a.y - b.y);
            return (a.y > b.y) ? -1 : +1;
        } else {
            //return (int)(a.x - b.x);
            return (a.x > b.x) ? -1 : +1;
        }
    }
}
