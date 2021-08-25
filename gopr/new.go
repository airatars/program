package main

import "fmt"

func main() {
	fmt.Println("Hello")

	//var i = 10
	for i := 0; i <= 5; i++ {
		fmt.Println(i)
	}

	nums := [3]int{5, 1, 9}
	for i, value := range nums {
		fmt.Println(value, i)
	}
}

// Lorem ipsum dolor sit amet, consectet
// lorem ipsum dolor sit amet, consectet
