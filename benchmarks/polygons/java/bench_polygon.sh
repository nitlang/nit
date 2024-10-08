#!/bin/bash
# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

source ../../bench_common.sh
source ../../bench_plot.sh

# Default number of times a command must be run with bench_command
# Can be overrided with 'the option -n'
count=5
points=100000

function usage()
{
	echo "run_bench: [options]* bench_name args"
	echo "  -n count: number of execution for each bar (default: $count)"
	echo "  -p points: number of points used for the polygons (default: $points)"
	echo "  -h: this help"
	echo ""
	echo "Benches : "
	echo "  add_vertex: bench adding vertex in a polygon"
	echo "    - usage : add_vertex nbpts"
	echo "  sort_vertices: sort the vertices of the polygon"
	echo "    - usage : sort_vertices nbpts"
	echo "  intersection: bench the intersection between two polygons"
	echo "    - usage : intersection nbpts"
	echo "  convex_hull: bench creating the convex hull of a set of points"
	echo "    - usage : convex_hull nbpts"
	echo " convexity : bench the verification of the convexity of a polygon"
	echo "    - usage : convexity nbpts"
	echo " contain : bench the point in polygon check"
	echo "    - usage : contain nbpts"
}


function bench_add_vertex()
{
	if [ -d add_vertex ]; then
		rm add_vertex/*
	else
		mkdir add_vertex
	fi

	cd add_vertex

	javac ../code/*.java -d .

	prepare_res add_vertex.out add_vertex add_vertex

	bench_command add_vertex add_vertex java BenchPolygon add_vertex $((points / 2))
}

function bench_sorting()
{
	if [ -d sort_vertices ]; then
		rm sort_vertices/*
	else
		mkdir sort_vertices
	fi
	cd sort_vertices

	javac ../code/*.java -d .

	prepare_res sort_vertices.out sort_vertex sort_vertices

	bench_command sort_vertices sort_vertices java BenchPolygon sort_vertices $((points * 20))

}

function bench_intersection()
{
	if [ -d intersection ]; then
		rm intersection/*
	else
		mkdir intersection
	fi
	cd intersection

	javac ../code/*.java -d .

	prepare_res intersection.out intersection intersection

	bench_command intersection intersection java BenchPolygon intersection $((points / 10))
}

function bench_convex_hull()
{
	echo Bench way too long, skipping it

	return

	if [ -d convex_hull ]; then
		rm convex_hull/*
	else
		mkdir convex_hull
	fi
	cd convex_hull

	javac ../code/*.java -d .

	prepare_res convex_hull.out convex_hull convex_hull

	bench_command convex_hull convex_hull java BenchPolygon convex_hull $((points * 30))
}

function bench_convexity()
{
	if [ -d convexity ]; then
		rm convexity/*
	else
		mkdir convexity
	fi
	cd convexity

	javac ../code/*.java -d .

	prepare_res convexity.out convexity convexity

	bench_command convexity convexity java BenchPolygon convexity $((points * 40))
}


function bench_contain()
{
	if [ -d contain ]; then
		rm contain/*
	else
		mkdir contain
	fi
	cd contain

	javac ../code/*.java -d .

	prepare_res contain.out contain contain

	bench_command contain contain java BenchPolygon contain $((points * 50))
}

stop=false
while [ "$stop" = false ]; do
	case "$1" in
		-h) usage; exit;;
		-n) count="$2"; shift; shift;;
		-p) points="$2"; shift;shift;;
		*) stop=true
	esac
done

if test $# -lt 1; then
	usage
	exit
fi

case "$1" in
	add_vertex) shift; bench_add_vertex $@ ;;
	sort_vertices) shift; bench_sorting $@ ;;
	intersection) shift; bench_intersection $@ ;;
	convex_hull) shift; bench_convex_hull $@ ;;
	convexity) shift; bench_convexity $@;;
	contain) shift; bench_contain $@;;
	*) usage; exit;;
esac
