package main

import (
	"fmt"
)

func testFunction(src []int) (int, error) {
	if len(src) == 0 {
		return 0, nil
	}
	index := 0
	for i := 1; i < len(src); i++ {
		if src[index] != src[i] {
			index += 1
			src[index] = src[i]
		}
	}
	return index + 1, nil
}
func main() {
	//src := []int{1, 1, 2, 3, 3, 4}
	src1 := []int{}
	var err error
	res, err := testFunction(src1)
	if err != nil {
		fmt.Println("errror")
	}
	fmt.Printf("%s\n", res)
}
