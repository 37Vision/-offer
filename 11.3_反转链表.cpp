/**
����ͦ���ģ���֪����û�и���Ȥ�Ľⷨ
�㷨��̫���ˣ���������һ�½��ȣ�׼����vj����Ŀ
�������������飬�ܽ�һ��ǰ���������
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
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead==NULL) return NULL;
        ListNode *p=pHead,*q=NULL,*newhead,*plast;
        while(p!=NULL){
            newhead=new ListNode(p->val);
            newhead->next=q;
            q=newhead;
            plast=p;
            p=p->next;
            delete plast;
        }
        return newhead;
    }
};
