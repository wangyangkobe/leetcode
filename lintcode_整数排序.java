/**
 * http://www.lintcode.com/zh-cn/problem/sort-integers/
 * 给一组整数，按照升序排序，使用选择排序，冒泡排序，插入排序或者任何 O(n2) 的排序算法。
 */
public class Solution {
    /**
     * @param A an integer array
     * @return void
     */
    public void sortIntegers(int[] A) {
        // Write your code here
        int length = A.length;
        for(int i = 0; i < length-1; i++) {
            for(int j = 0; j < length - i - 1; j++) {
                if(A[j] > A[j+1]) {
                    int tmp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = tmp;
                }
            }
        }
    }
}
