package main

import (
	"fmt"
	//"math"
)

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func isSymmetric(root *TreeNode) bool {
    if root == nil{
		return true
	}
	return issymmetric(root.Left,root.Right)
}

func issymmetric(left , right * TreeNode){
	if left == nil && right == nil {
		return true
	}
	if left && !right || right && !left || left.Val != right.Val {
		return false
	}
	return issymmetric(left.Left,right.Right) && issymmetric(left.Right,right.Left)
}
func main(){

}