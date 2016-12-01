/*
 * https://leetcode.com/problems/merge-sorted-array/
 * Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
 * Note:
 * You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. 
 * The number of elements initialized in nums1 and nums2 are m and n respectively.
 */

// The idea is to go from the last indexes of both arrays, compare and put elements from either A or B to the final position, 
// which can easily get since we know that A have enough space to store them all and we know size of A and B. 
class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        
        int a=m-1;
        int b=n-1;
        int i=m+n-1;    // calculate the index of the last element of the merged array
        
        // go from the back by A and B and compare and put to the A element which is larger
        while(a>=0 && b>=0){
            if(A[a]>B[b])   A[i--]=A[a--];
            else            A[i--]=B[b--];
        }
        
        // if B is longer than A just copy the rest of B to A location, otherwise no need to do anything
        while(b>=0)         A[i--]=B[b--];
    }
};
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
