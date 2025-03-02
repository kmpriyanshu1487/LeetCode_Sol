class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* n=new ListNode(-1);
        ListNode *temp=n;
        set<int>set;
        for(auto i:nums){
            set.insert(i);
        }
        while(head!=NULL){
            if(set.find(head->val)==set.end()){
                temp->next=head;
                temp=temp->next;
            }
            head=head->next;
        }
        temp->next=NULL;
        return n->next;
    }
};