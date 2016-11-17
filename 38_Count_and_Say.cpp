/**
 * link: https://leetcode.com/problems/count-and-say/
 * The count-and-say sequence is the sequence of integers beginning as follows:
 * 1, 11, 21, 1211, 111221, ...
 * 1 is read off as "one 1" or 11.
 * 11 is read off as "two 1s" or 21.
 * 21 is read off as "one 2, then one 1" or 1211.
 * Given an integer n, generate the nth sequence.
 * Note: The sequence of integers will be represented as a string.
 */
 
class Solution
{
  public:
    string help(string input)
    {
        int count = 0;
        int position = 0;
        ostringstream strcout;
        for (int i = 0; i < input.size(); i++)
        {
            if (input.at(i) == input.at(position))
                count++;
            else
            {
                strcout << count << input.at(position);
                count = 1;
                position = i;
            }
        }
        strcout << count << input.at(position);
        return strcout.str();
    }
    string countAndSay(int n)
    {
        if (n == 0)
            return "";
        if (n == 1)
            return "1";

        vector<string> tmp;
        tmp.push_back("1");

        for (int i = 2; i <= n; i++)
        {
            string last = tmp.back();
            tmp.push_back(help(last));
        }
        return tmp.back();
    }
};


int main() 
{
	cout<<countAndSay(1)<<endl; // 1
	cout<<countAndSay(2)<<endl; // 11
	cout<<countAndSay(3)<<endl; // 21
	cout<<countAndSay(4)<<endl; // 1211
	cout<<countAndSay(5)<<endl; // 111221
}
