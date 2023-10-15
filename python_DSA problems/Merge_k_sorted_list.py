'''You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

 

Example 1:

Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6
Example 2:

Input: lists = []
Output: []
Example 3:

Input: lists = [[]]
Output: []
'''
#Solution

class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        store = {}
        for lst in lists:
            start = lst
            while start:
                curr = start
                while curr.next and curr.next.val == start.val:
                        curr = curr.next
                try:
                    sect_head, sect_tail = store[start.val]
                except KeyError:
                    store[start.val] = [start, curr]
                else:
                    sect_tail.next = start
                    store[start.val][1] = curr
                start = curr.next
        tail = None
        head = None
        for key in sorted(store.keys()):
            front = store[key][0]
            if not tail:
                head = front
            else:
                tail.next = front
            tail = store[key][1]
        return head