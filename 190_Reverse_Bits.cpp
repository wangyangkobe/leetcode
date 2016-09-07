/**
 * link: https://leetcode.com/problems/reverse-bits/
 */
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> res(n);
        string str = res.to_string();
        reverse(str.begin(), str.end());
        return bitset<32>(str).to_ulong();
    }
};
