func findMin(nums []int) int {
	length := len(nums)
	start := nums[0]
	for i := 0; i < length; i++ {
		if nums[i] < start {
			start = nums[i]
		}
	}
	return start
}
