all: add_vertex_b sort_vertices_b intersection_b convex_hull_b convexity_b contain_b

add_vertex_b:
	./bench_polygon.sh add_vertex

sort_vertices_b:
	./bench_polygon.sh sort_vertices

intersection_b:
	./bench_polygon.sh intersection

convex_hull_b:
	./bench_polygon.sh convex_hull

convexity_b:
	./bench_polygon.sh convexity

contain_b:
	./bench_polygon.sh contain

check:
	./bench_polygon.sh -p 100 add_vertex
	./bench_polygon.sh -p 100 sort_vertices
	./bench_polygon.sh -p 100 intersection
	./bench_polygon.sh -p 100 convex_hull
	./bench_polygon.sh -p 100 convexity
	./bench_polygon.sh -p 100 contain
