#include <iostream>
using namespace std; 

struct Node { 
	char ch; 
	Node *next; 
}; 

Node *head; 
Node *last; 

void push(char ch) { 
	if (head == NULL) { 
		head = new Node(); 
		head->ch = ch; 
		last = head; 
	} 
	else { 
		last->next = new Node(); 
		last = last->next; 
		last->ch = ch; 
	} 
} 

void pop() { 
	head = head->next; 
} 

int main() 
{ 
	int n, t; 
	char ch; 
	cin >> n >> t; 
	
	for (int i = 0; i < n; i++) { 
		cin >> ch; 
		push(ch); 
	} 
	
	for (int i = 0; i < t; i++) { 
		pop(); 
	} 
	
	for (Node *p = head; p != NULL; p = p->next) { 
		cout << p->ch << " "; 
	} 
	
	return 0; 
}