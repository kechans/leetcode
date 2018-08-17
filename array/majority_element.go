package main

import (
	"fmt"
	"sort"
)
//寻找数组中出现次数最多的数字，
//将数组排序，这时候数组最中间的数肯定是众数。

func majorityElement1(nums []int) int {
	sort.Ints(nums)
	lenght := len(nums)
	value := nums[lenght/2]
	return value
}

//投票法，记录一个index变量，还有一个count变量，开始遍历数组。如果新数和index一样，那么count加上1，否则的话，
//如果count不是0，则count减去1，如果count已经是0，则将index更新为这个新的数。因为每一对不一样的数都会互相消去，
//最后留下来的index就是众数。
func majorityElement2(nums []int) int {
	index := nums[0]
	count := 0
	for i:=0;i<len(nums);i++{
		if index == nums[i] {
			count++
		}else if count == 0{
			index = nums[i]
		}else{
			count--
		}
	}
	return index
}


func main(){
	var array1 =[]int{2,2,1,1,1,2,2}
	var array2 =[]int{3,2,3}
	res1 := majorityElement1(array2)
	fmt.Println(res1)
	res2 := majorityElement1(array1)
	fmt.Println(res2)
}