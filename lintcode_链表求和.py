# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

/**
 * http://www.lintcode.com/zh-cn/problem/add-two-numbers/
 * 你有两个用链表代表的整数，其中每个节点包含一个数字。数字存储按照在原来整数中相反的顺序，使得第一个数字位于链表的开头。
 * 写出一个函数将两个整数相加，用链表形式返回和。
 *
 *  样例
 *  给出两个链表 3->1->5->null 和 5->9->2->null，返回 8->0->8->null
 *
 */
class Solution:
    # @param l1: the first list
    # @param l2: the second list
    # @return: the sum list of l1 and l2 
    def addLists(self, l1, l2):
        # write your code here
        if not l1 or not l2:
            return None
        if l1 and not l2:
            return l1
        if not l1 and l2:
            return l2
        head = cur = ListNode(0)
        flag = 0
        while l1 and l2:
            res = l1.val + l2.val + flag
            node = ListNode(res % 10)
            flag = res / 10
            l1 = l1.next
            l2 = l2.next
            cur.next = node
            cur = node
        while l1:
            res = l1.val + flag
            node = ListNode(res % 10)
            flag = res / 10
            l1 = l1.next
            cur.next = node
            cur = node
        while l2:
            res = l2.val + flag
            node = ListNode(res % 10)
            flag = res / 10
            l2 = l2.next
            cur.next = node
            cur = node
        if flag:
            node = ListNode(flag)
            cur.next = node
        return head.next
