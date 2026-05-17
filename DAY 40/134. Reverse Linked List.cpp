// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
ListNode* reverseList(ListNode* head) {
    
	ListNode* prev = NULL, *curr = head, *future = NULL;

	while(curr){
		future = curr->next;
		curr->next = prev;
		prev = curr;
		curr = future;
	}


	head = prev;
	return head;
}