#include <iostream>
#include "listNode.h"
#include "findEntrance.h"
using namespace std;

void test1() {
	cout<<"test1"<<endl;
	ListNode *p1 = new ListNode(1);
	ListNode *p2 = new ListNode(2);
	ListNode *p3 = new ListNode(3);
	ListNode *p4 = new ListNode(4);

	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p2;
	
	if (findEntrance(p1) == nullptr) cout<<"nullptr"<<endl;
	else cout<<findEntrance(p1)->value<<endl;

	delete p1;
	p1 = nullptr;
	delete p2;
	p2 = nullptr;
	delete p3;
	p3 = nullptr;
	delete p4;
	p4 = nullptr;

}

void test2() {
	cout<<"test2"<<endl;
	ListNode *p1 = new ListNode(1);
	
	if (findEntrance(p1) == nullptr) cout<<"nullptr"<<endl;
	else cout<<findEntrance(p1)->value<<endl;

	delete p1;
	p1 = nullptr;
}

void test3() {
	cout<<"test3"<<endl;
	ListNode *p1 = new ListNode(1);
	ListNode *p2 = new ListNode(2);
	ListNode *p3 = new ListNode(3);

	p1->next = p2;
	p2->next = p3;
	
	if (findEntrance(p1) == nullptr) cout<<"nullptr"<<endl;
	else cout<<findEntrance(p1)->value<<endl;

	delete p1;
	p1 = nullptr;
	delete p2;
	p2 = nullptr;
	delete p3;
	p3 = nullptr;
}

void test4() {
	cout<<"test4"<<endl;
	ListNode *p1 = new ListNode(1);
	p1->next = p1;
	
	if (findEntrance(p1) == nullptr) cout<<"nullptr"<<endl;
	else cout<<findEntrance(p1)->value<<endl;

	delete p1;
	p1 = nullptr;
}


void test5() {
	cout<<"test5"<<endl;
	ListNode *p1 = new ListNode(1);
	ListNode *p2 = new ListNode(2);
	ListNode *p3 = new ListNode(3);
	ListNode *p4 = new ListNode(4);
	ListNode *p5 = new ListNode(5);
	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p5;
	p5->next = p1;
	
	if (findEntrance(p1) == nullptr) cout<<"nullptr"<<endl;
	else cout<<findEntrance(p1)->value<<endl;

	delete p1;
	p1 = nullptr;
	delete p2;
	p2 = nullptr;
	delete p3;
	p3 = nullptr;
	delete p4;
	p4 = nullptr;
	delete p5;
	p5 = nullptr;
}

void test6() {
	cout<<"test6"<<endl;
	ListNode *p1 = new ListNode(1);
	ListNode *p2 = new ListNode(2);
	ListNode *p3 = new ListNode(3);
	ListNode *p4 = new ListNode(4);
	ListNode *p5 = new ListNode(5);
	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p5;
	p5->next = p5;
	
	if (findEntrance(p1) == nullptr) cout<<"nullptr"<<endl;
	else cout<<findEntrance(p1)->value<<endl;

	delete p1;
	p1 = nullptr;
	delete p2;
	p2 = nullptr;
	delete p3;
	p3 = nullptr;
	delete p4;
	p4 = nullptr;
	delete p5;
	p5 = nullptr;
}

void test7() {
	ListNode *p1 = nullptr;
	if (findEntrance(p1) == nullptr) cout<<"nullptr"<<endl;
	else cout<<findEntrance(p1)->value<<endl;
}

int main() {
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	return 0;
}

