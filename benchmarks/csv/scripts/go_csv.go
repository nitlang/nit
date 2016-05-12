package main

import "encoding/csv"
import "os"
import "fmt"

func main() {
	if len(os.Args) == 1 {
		fmt.Println("Usage ./go_csv file")
		os.Exit(-1)
	}
	file, err := os.Open(os.Args[1])
	if err != nil { panic(err) }

	var read = csv.NewReader(file)
	_, r := read.ReadAll()
	if r != nil { panic(err) }
}
