package main

import (
	"fmt"
)

func binsearch(slice []int, target int) int {
	start := 0
	end := len(slice)
	for start <= end {
		middle := start + (end-start)/2
		if slice[middle] > target {
			end = middle - 1
		} else if slice[middle] < target {
			start = middle + 1
		} else {
			return middle
		}
	}
	return 0
}
func main() {
	slice := []int{11, 11, 22, 33, 44, 55, 66, 77, 88}
	res := binsearch(slice, 22)
	fmt.Printf("%d\n", res)
}
