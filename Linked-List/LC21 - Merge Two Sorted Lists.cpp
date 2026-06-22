/*
-------------------------------------------------------
Problem : 21. Merge Two Sorted Lists
Platform : LeetCode
Difficulty : Easy

Approach :
1. Create a dummy node to serve as the starting point of the merged list.
2. Use a tail pointer to keep track of the last node in the merged list.
3. Compare the current nodes of both linked lists.
4. Attach the smaller node to the merged list and move that list's pointer forward.
5. Move the tail pointer to the newly added node.
6. Repeat until one of the lists becomes empty.
7. Attach the remaining nodes of the non-empty list.

Time Complexity : O(n + m)
Space Complexity : O(1)

Key Concepts :
- Linked List
- Dummy Node
- Tail Pointer
- Two Pointer Technique
- Iterative Approach
-------------------------------------------------------
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*  dummy=new ListNode(-1);
        ListNode* tail=dummy;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val < list2->val)
            {
                tail->next=list1;
                list1=list1->next;
            }
            else
            {
                tail->next=list2;
                list2=list2->next;
            }
            tail=tail->next;

            
        }
        if(list1==NULL)
            {
                tail->next=list2;
            }
            else if(list2==NULL)
            {
                tail->next=list1;
            }
            
        return dummy->next;
        
    }
    
};
