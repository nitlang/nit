
module func_collections
import functional
import iter_extras


redef class Array[E]
        fun for_each(f: Func1[E, Unit])
        do
                for x in self do
                        f.call(x)
                end
        end
end

# In place data manipulation inside an hashmap
# Provides a Monad-like structure to do computation, i.e you can chain the entry
# manipulation to a certain extend.
abstract class Entry[K,V]
        var map: Map[K,V]
        var key: K

        fun and_modify(f: Func1[V, Unit]): Entry[K,V] do
                return self
        end

        fun or_insert(x: V): V is abstract

        fun or_insert_with(x: ConstFn[V]): V is abstract
end

class Vacant[K,V]
        super Entry[K,V]

        redef fun or_insert(x: V): V
        do
                map[key] = x
                return map[key]
        end

        redef fun or_insert_with(f: ConstFn[V]): V
        do
                map[key] = f.call
                return map[key]
        end
end

class Occupied[K,V]
        super Entry[K,V]

        redef fun or_insert(x: V): V
        do
                return map[key]
        end


        redef fun or_insert_with(f: ConstFn[V]): V
        do
                # duplicate from or_insert
                return map[key]
        end

        redef fun and_modify(f: Func1[V, Unit]): Entry[K,V] do
                f.call(map[key])
                return self
        end
end

redef interface Map[K,V]
        fun entry(k: K): Entry[K,V] do
                if has_key(k) then
                        return new Occupied[K,V](self, k)
                end
                return new Vacant[K,V](self, k)
        end
end
