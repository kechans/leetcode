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
		if nums[j] != nums[i] {
			i++
			nums[i] = nums[j]
		}
	}
	return i + 1
}
结题思路：i 是慢指针，j是快指针，当nums[i]==nums[j] 时，我们递增j跳过重复，当nums[i]!=nums[j]时,我们给i加一，把nums[j]的值付给nums[i+1],保证前i+1个数是不重复的
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
