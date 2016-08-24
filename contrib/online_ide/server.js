// This file is part of NIT ( http://www.nitlanguage.org )
//
// Copyright 2014 Johan Kayser <kayser.johan@gmail.com>
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Server file for the Nit online IDE.

var express = require('express'); // We use the express framework
var sys = require('sys');

var app = require('express')()
	, server = require('http').createServer(app);
	
server.listen(8080); // Starts the server

// Config section
app.use(express.static(__dirname + '/public')) // Indicates that the /public folder contains static files
.use(express.favicon(__dirname + '/public/favicon.ico')); // Sets the website favicon
//.use(express.logger()) // Activates logging system
// End Config section

// URL section
app.get('/', function(req, res) {
    res.render('index.ejs');
});
app.use(function(req, res, next){
    res.setHeader('Content-Type', 'text/plain');
    res.send(404, 'Page not found !');
});
// End URL section
