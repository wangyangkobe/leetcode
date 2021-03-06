/*
 * https://leetcode.com/problems/find-the-difference/
 * Given two strings s and t which consist of only lowercase letters.
 * String t is generated by random shuffling string s and then add one more letter at a random position.
 * Find the letter that was added in t.
 Example:
 Input:
  s = "abcd"
  t = "abcde"
 Output:
  e
 Explanation:
  'e' is the letter that was added.
 */
 
class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> hash;
        for(int i = 0; i < t.size(); i++) {
            hash[t[i]] = (hash.count(t[i]) == 0) ? 1 : hash[t[i]] + 1;
        }
        
        for(int i = 0; i < s.size(); i++) {
            hash[s[i]] -= 1;
        }
        char res;
        for_each(begin(hash), end(hash), [&res](std::map<char, int>::reference element) {
            if(element.second == 1)
                res = element.first;
        });
        return res;
    }
};
