/*
 * https://leetcode.com/problems/merge-sorted-array/
 * Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
 * Note:
 * You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. 
 * The number of elements initialized in nums1 and nums2 are m and n respectively.
 */

func merge(nums1 []int, m int, nums2 []int, n int) {
	res := make([]int, 0)
	i := 0
	j := 0
	for i < m && j < n {
		if nums1[i] < nums2[j] {
			res = append(res, nums1[i])
			i++
		} else {
			res = append(res, nums2[j])
			j++
		}
	}

	if i == m && j < n {
		for j < n {
			res = append(res, nums2[j])
			j++
		}
	}
	if j == n && i < m {
		for i < m {
			res = append(res, nums1[i])
			i++
		}
	}
	copy(nums1, res)
}
