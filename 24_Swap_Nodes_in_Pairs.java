/*
 * https://leetcode.com/problems/swap-nodes-in-pairs/
 * Given a linked list, swap every two adjacent nodes and return its head.
 * For example,
 * Given 1->2->3->4, you should return the list as 2->1->4->3.
 * Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed
. */
class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}


class Solution {
    public ListNode swapPairs(ListNode head) {
        if(head == null)
            return head;
        ListNode slow = head;
        ListNode fast = head.next;
        
        while(slow != null && fast != null) {
            int tmp = slow.val;
            slow.val = fast.val;
            fast.val = tmp;
            if(fast.next != null)
                fast = fast.next;
            else
                break;
            slow = fast;
            
            if(fast.next != null)
                fast = fast.next;
            else
                break;
        }
  
        return head;
    }
    public void print(ListNode head) {
      while(head != null) {
        System.out.println(head.val);
        head = head.next;
      }
    }
    public ListNode createList(int num) {
        ListNode head = null;
        ListNode tail = head;
        for(int i = 0; i < num; i++) {
            ListNode tmp = new ListNode(i);
            if(head == null) {
                head = tail = tmp;
            } else {
              tail.next = tmp;
              tail = tmp;
            }
        }
        return head;
    }
}

class Main {
  public static void main(String[] args) {
    Solution solution = new Solution();
    ListNode head = solution.createList(11);
    solution.print(head);
    System.out.println();
    solution.swapPairs(head);
    solution.print(head);
  }
}
