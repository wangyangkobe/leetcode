/*
 * https://leetcode.com/problems/intersection-of-two-arrays/
 * Given two arrays, write a function to compute their intersection.
 * Example:
 * Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].
 * Note:
 *  Each element in the result must be unique.
 *  The result can be in any order.
 *
 */
func intersection(nums1 []int, nums2 []int) []int {
    var res []int;
    var hash = make(map[int] bool);
    for _, v := range nums1 {
        hash[v] = false
    }
    
    for _, v := range nums2 {
        if _, ok := hash[v]; ok {
            hash[v] = true
        }
    }
    
    for key, value := range hash {
        if value {
            res = append(res, key)
        }
    }
    return res
}
