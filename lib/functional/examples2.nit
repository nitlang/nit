
import func_collections


var xs = [1,2,3,4,5]

var xs2 = xs.iter.map(|x| x + 1).to_array

var addOne: Func1[Int,Int] = |x| return x + 1  # inférence pour x

var addOne = |x| do return x + 1       # return?
var addOne = |x| do x + 1       # auto return
var addOne = |x| x + 1

var addOne = |x:Int|: Int do    # inférence pour addOne
        return x + 1    # attention return
end
