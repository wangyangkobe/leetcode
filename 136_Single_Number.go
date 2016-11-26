/*
 * https://leetcode.com/problems/single-number/
 * Given an array of integers, every element appears twice except for one. Find that single one.
 * Note:
 * Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory? 
 */
 
func singleNumber(nums []int) int {
    var res = 0
    for _, v := range nums {
        res ^= v
    }
    return res
}
