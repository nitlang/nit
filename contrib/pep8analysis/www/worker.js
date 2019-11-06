// load
var Module = {
	'print': function(text) {
		postMessage({'type': 'stdout', 'data': text})
	},
	'TOTAL_MEMORY': 512000000
}
importScripts("pep8analysis.js")
run_analysis = Module.cwrap('pep8analysis_web___CString_run_analysis', null, ['string'])

function show_graph(data) {
	postMessage({'type':"show_graph", 'data': data})
}

// notify UI it's ready
postMessage({'type':"ready"})

// wait for code to analyze
self.onmessage = function(event){
	try {
		run_analysis(event.data)
		postMessage({'type':"complete"})
	} catch(e) {
		console.log(e)
		postMessage({'type':"exception", 'data': e.toString()})
	}
}
