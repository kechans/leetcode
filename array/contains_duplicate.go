package main

import (
	"fmt"
	"sort"
)


func containsDuplicate1(nums []int) bool {
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

func containsDuplicate2(nums []int) bool {
	sort.Ints(nums)
	length := len(nums)-1
	for i:= 0; i< length;i++{
		if nums[i] == nums[i+1]{
			return true
		}
	}
	return false
}

func containsDuplicateII(nums []int) bool {
	length := len(nums)
    for i:=0;i<length;i++{
        for j:=i+1;j<i+k&&j<length;j++{
            if nums[i]==nums[j]{
                return true
            }
        }
    }
    return false
}

func  main(){
	var array =[]int{1,2,3,1}
	res := containsDuplicate2(array)
	fmt.Println(res)
}