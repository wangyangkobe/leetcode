/*
 * https://leetcode.com/problems/implement-strstr/
 * Implement strStr().
 * Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack. 
 */
func strStr(haystack string, needle string) int {
    return strings.Index(haystack, needle)
}
