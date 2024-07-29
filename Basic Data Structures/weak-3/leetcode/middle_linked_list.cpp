
class Solution {
public:
    int size(ListNode* head) {
        ListNode* tmp = head;
        int cnt = 0;
        while (tmp != NULL) {
            cnt++;
            tmp = tmp->next;
        };
        return cnt;
    };

    ListNode* middleNode(ListNode* head) {
        int cz=size(head);
        ListNode *tmp=head;
        for(int i=1;i<=cz/2;i++){
            tmp=tmp->next;
        }
        return tmp;
    }
};