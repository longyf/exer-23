#ifndef LIST_NODE_H
#define LIST_NODE_H
struct ListNode {
	int value;
	ListNode *next;
	ListNode (int x = 0) : value(x), next(nullptr) {}
};
#endif
