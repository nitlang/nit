package main

import "io/ioutil"
import "encoding/json"
import "os"
import "fmt"

func main() {
	if len(os.Args) == 1 {
		fmt.Println("Usage ./json_parse file")
		os.Exit(-1)
	}
	dat, err := ioutil.ReadFile(os.Args[1])
	if err != nil { panic(err) }

	var obj interface{}

	jsonerr := json.Unmarshal(dat, &obj)
	if jsonerr != nil { panic(jsonerr) }
}
