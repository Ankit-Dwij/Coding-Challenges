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
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        if(list1->val > list2->val) std::swap(list1,list2);
        ListNode* ans = list1;
        
       while(list1 != NULL && list2 != NULL){
           ListNode* temp = NULL;
           while(list1 != NULL && list1->val <= list2->val){
                temp = list1;
               list1=list1->next;
        }
                temp->next=list2;
                std::swap(list1,list2);
       }
        return ans;
    }
};


//RECURSION O(m+n)
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = NULL ;
        //base case
        if(list1==NULL)
                return list2;
        else if(list2==NULL)
                return list1;
        
        //pick the samller value
        if(list1->val <= list2->val){
            ans = list1;
            ans->next = mergeTwoLists(list1->next, list2);
        }else{
            ans = list2;
            ans->next = mergeTwoLists(list2->next, list1);
        }
        return ans;
        
    }
};