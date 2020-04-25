

func twoSum(nums []int, target int) []int {
	m := map[int]int{}
	for key, var := range nums {
		if k,ok := m[target - var];ok{
			return []int {key,k}
		}
		m[var] = key
	}
	return nil
}
