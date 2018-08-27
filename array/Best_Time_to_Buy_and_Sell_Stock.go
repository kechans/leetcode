package main

import (
	"fmt"
)

func maxProfit1(prices []int) int {
    maxproit := 0
    for i:=0;i<len(prices)-1;i++{
        for j:=i+1;j<len(prices);j++{
            if prices[j]-prices[i] > maxproit {
                maxproit = prices[j]-prices[i]
            }
        }
    }
    return maxproit
}

func maxProfit(prices []int) int {
    maxproit := 0
	local := 0
    for i:=0;i<len(prices)-1;i++{
		local = getmax(local + prices[i+1] - prices[i] ,0) 
		maxproit = getmax(local , maxproit )
    }
    return maxproit
}

func getmax(a,b int)int{
    if a>b {
        return a
    }else{
        return b
    }
}

func main(){
	var array =[]int{7,1,5,3,6,4}
	res := maxProfit(array)
	fmt.Println(res)
}