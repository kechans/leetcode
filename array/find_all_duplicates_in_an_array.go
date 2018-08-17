package main

import (
	"fmt"
	
)

func findDuplicates(nums []int) []int {
    length := len(nums) 
	var tmp  []int
	for i := 0;i < length; i++{
		src := WithBranch(nums[i])
		index := src-1 
		if nums[index] < 0 {
			tmp= append(tmp,index+1)
		}
		nums[index] = -nums[index]
	}
	return tmp
}

func WithBranch(n int) int {
    if n < 0 {
        return -n
    }
    return n
}

func main(){
	var array =[]int{4,3,2,7,8,2,3,1}
	res := find_all_duplicates_in_an_array(array)
	fmt.Println(res)
}
