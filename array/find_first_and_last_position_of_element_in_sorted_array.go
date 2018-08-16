package main

import (
	"fmt"
)

func searchRange(nums []int, target int) []int {
	var tmp = []int{-1,-1}
	left := search(nums,target,true)

	if len(nums) == left || nums[left] != target {
		return tmp
	}

	tmp[0] = left
	tmp[1] = search(nums,target,false)-1

	return tmp
}

func search(nums []int,target int,flags bool) int{

	low := 0
	hight := len(nums)
	for low < hight {
		middle := (low+hight)/2
		if nums[middle] > target || flags && target == nums[middle]{
			hight = middle
		} else {
			low = middle+1
		}
	}
	return low
}

func main(){
	var array = []int{5,7,7,8,8,10}
	res := searchRange(array,83)
	fmt.Println(res)
}
