package main

import (
	"fmt"
)


func containsDuplicate(nums []int) bool {
    length := len(nums)
    for i:=0;i<length;i++{
        for j:=0;j<i;j++{
            if nums[i]==nums[j]{
                return true
            }
        }
    }
    return false
}

func  main(){
	var array =[]int{1,2,3,1}
	res := containsDuplicate(array)
	fmt.Println(res)
}