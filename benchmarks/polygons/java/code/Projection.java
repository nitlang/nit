
/**
 * An utility class to store a projection of an edge on an axis, used by the
 * intersects operation
 *
 * @author Johan
 */
public class Projection {

    private double min;
    private double max;

    public Projection(double min, double max) {
        this.min = min;
        this.max = max;
    }

    public Boolean overlap(Projection p2) {
        return !(this.min > p2.max || p2.min > this.max);
    }
}
