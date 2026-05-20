/*
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

*/

bool hasCycle(ListNode* head) {
    if(!head||!head->next){
		return 0;
	}


	ListNode *slow = head, *fast = head->next;

	while(fast&&fast->next&&slow!=fast){
		fast = fast->next->next;
		slow = slow->next;
	}


	if(slow == fast){
		return 1;
	}

	return 0;
}