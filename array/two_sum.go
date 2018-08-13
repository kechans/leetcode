//夹逼排序的方法

twoSum(nums []int, target int) []int {
    start := 0
    end := len(nums)-1
    var res []int

    while start < end {
        if (nums[start]+nums[end]) == target {
            res[0] = start
            res[1] = end
            return res
        }else if (nums[start]+nums[end]) > target {
            end --
        }else {
            start++
        }
    }
    return nil
}
