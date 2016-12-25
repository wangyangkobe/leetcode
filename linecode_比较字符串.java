/*
 * http://www.lintcode.com/zh-cn/problem/compare-strings/
 * 比较两个字符串A和B，确定A中是否包含B中所有的字符。字符串A和B中的字符都是大写字母
 * 样例
 * 给出 A = "ABCD" B = "ACD"，返回 true
 * 给出 A = "ABCD" B = "AABC"， 返回 false
 */


public class Solution {
    /**
     * @param A : A string includes Upper Case letters
     * @param B : A string includes Upper Case letter
     * @return :  if string A contains all of the characters in B return true else return false
     */
    public int count(String str, char c) {
        int res = 0;
        for(char element : str.toCharArray()) {
            if(c == element)
                res += 1;
        }
        return res;
    }
    public boolean compareStrings(String A, String B) {
        // write your code here
        for(int i = 0; i < B.length(); i++) {
            char c = B.charAt(i);
            if(count(A, c) >= count(B, c)) {
                
            } else {
                return false;
            }
        }
        return true;
    }
}
