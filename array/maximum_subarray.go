package main

import (
	"fmt"
	//"math"
)

func maxSubArray(nums []int) int {
	a := nums[0]
	b := nums[0]
	for i:=1 ;i <len(nums);i++{
		b = Max(nums[i],b+nums[i])
		a = Max(a,b)
	}
	return a
}

func Max(a,b int)int{
	if a<b{
		return b
	}else{
		return a
	}
}

func main(){
	var array = []int{-2,1,-3,4,-1,2,1,-5,4}
	res := maxSubArray(array)
	fmt.Println(res)
}