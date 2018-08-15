package main

import (
	"fmt"
)

func removeDuplicates(nums []int) int {
	length := len(nums)
	if length < 2 {
		return length
	}
	i := 0
	for j := 1; j < length; j++ {
		fmt.Println(" i is %d ", i, "  j is %d ", j)
		if nums[j] != nums[i] {
			i++
			nums[i] = nums[j]
		}
		show(nums)
	}
	return i + 1
}

func show(array []int) {
	for _, v := range array {
		fmt.Print("  ", v)
	}
	fmt.Println(" ------------------ >  ")
}
func main() {
	var array = []int{1, 1, 2, 2, 3}
	//show(array)
	res := removeDuplicates(array)
	fmt.Println(res)
}
