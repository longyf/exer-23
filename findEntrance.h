#ifndef FIND_ENTRANCE_H
#define FIND_ENTRANCE_H
#include <iostream>
#include "listNode.h"
using namespace std;
ListNode *findEntrance(ListNode *pListHead) {
	if (pListHead == nullptr || pListHead->next == nullptr)
		return nullptr;

	ListNode *pListFast = pListHead;
	ListNode *pListSlow = pListHead;
	ListNode *pListPursued = nullptr;
	int numNodesRing = 0;
	while (pListFast != nullptr && pListFast->next != nullptr) {
		pListSlow = pListSlow->next;
		pListFast = pListFast->next->next;
		if (pListSlow == pListFast) {
			pListPursued = pListSlow;
			break;
		}
	}
	
	if (pListPursued == nullptr) {
		//没有环。
		return nullptr;
	}
	else {
		//有环。
		ListNode *pNode = pListPursued;
		while (true) {
			numNodesRing++;
			if (pNode->next == pListPursued) break;
			else pNode = pNode->next;
		}
	}

	pListFast = pListHead;
	pListSlow = pListHead;

	while (numNodesRing != 0) {
		pListFast = pListFast->next;
		numNodesRing--;
	}

	while (pListFast != pListSlow) {
		pListFast = pListFast->next;
		pListSlow = pListSlow->next;
	}

	return pListFast;
}


#endif
