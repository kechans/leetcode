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

func maxProfit2(prices []int) int {
	global := 0
	local := 0
    for i:=0;i<len(prices)-1;i++{
        local = (prices[i+1] - prices[i]) > 
    }
    return maxproit
}