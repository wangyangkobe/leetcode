/*
 * https://leetcode.com/problems/fizz-buzz/
 * Write a program that outputs the string representation of numbers from 1 to n.
 * But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. 
 * For numbers which are multiples of both three and five output “FizzBuzz”.
 */
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        for(int i = 1; i <= n; i++) {
            if((i % 3 == 0) && (i % 5 == 0))
                res.push_back("FizzBuzz");
            else if (i % 3 == 0)
                res.push_back("Fizz");
            else if (i % 5 == 0)
                res.push_back("Buzz");
            else {
                stringstream ss;  
                ss<<i;
                res.push_back(ss.str());
                ss.clear();
            }
        }
        return res;
    }
};
