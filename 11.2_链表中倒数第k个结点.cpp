/**
期待更好的解法
*/
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        ListNode* p=pListHead;
        //注意unsigned
        vector<ListNode*> stack;
        while(p!=NULL){
            stack.push_back(p);
            p=p->next;
        }
        if(k==0||k>stack.size()) return NULL;//throw new exception("Invalid Parameter k.");
        return stack[stack.size()-k];//eg size=5,倒数第4就为第2，下标1 5-4
    }
};
