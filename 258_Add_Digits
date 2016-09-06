/**
 * [Link:] https://leetcode.com/problems/add-digits/
 */
class Solution {
public:
    vector<int> digits(int sum)
    {
        vector<int> vec;
        while(sum)
        {
            vec.push_back(sum%10);
            sum /= 10;
        }
        return vec;
    }
    int addDigits(int num) {
        vector<int> vec = digits(num);
        int res = std::accumulate(vec.begin(), vec.end(), 0);
        if(res < 10)
            return res;
        else
        {
            return addDigits(res);
        }
    }
};
