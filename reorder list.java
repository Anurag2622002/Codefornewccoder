/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public void reorderList(ListNode head) {
    ListNode slow = head;
        ListNode fast = head;
        
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        
        ListNode lastHead = null;
        
        if (slow != null) {
            ListNode next = null;
            ListNode prev = null;
            ListNode current = slow.next;
            
            while (current != null) {
                next = current.next;
                current.next = prev;
                prev = current;
                current = next;
            }
            
            slow.next = null;
            lastHead = prev;
        }
        
        if (lastHead != null) {
            ListNode firstHead = head;
            
            ListNode firstHeadNext = null;
            ListNode lastHeadNext = null;
            
            while (firstHead != null && lastHead != null) {
                firstHeadNext = firstHead.next;
                lastHeadNext = lastHead.next;
                
                firstHead.next = lastHead;
                lastHead.next = firstHeadNext;
                
                firstHead = firstHeadNext;
                lastHead = lastHeadNext;
            }
        }
    }
}
