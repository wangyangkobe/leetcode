/**
 * http://www.lintcode.com/zh-cn/problem/add-binary/
 * 给定两个二进制字符串，返回他们的和（用二进制表示。
 * 样例 a = 11 b = 1 返回 100
 */

class Solution:
    # @param {string} a a number
    # @param {string} b a number
    # @return {string} the result
    def addBinary(self, a, b):
        # Write your code here
        a = a[::-1]
        b = b[::-1]
        index = 0
        result = []
        flag = 0
        while (index < len(a)) and (index < len(b)):
            res = int(a[index]) + int(b[index]) + flag
            result.append(str(res%2))
            flag = res / 2
            index = index + 1
        while index < len(a):
            res = int(a[index]) + flag
            result.append(str(res%2))
            flag = res / 2
            index = index + 1
        while index < len(b):
            res = int(b[index]) + flag
            result.append(str(res%2))
            flag = res / 2
            index = index + 1
        if flag != 0:
            result.append(str(flag))
        return ''.join(result[::-1])
