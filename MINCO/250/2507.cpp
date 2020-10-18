#include <iostream>
using namespace std;

struct mak{
    char name[200];
    mak * L1;
    mak * L2;
};

typedef mak moring;

moring arr[5];

int main() {

    cout << "hi" << endl;

    return 0;
}

/*


#include<iostream>
#include<cstring>
using namespace std;
struct Node {
	char name[20];
	Node *Love1 = NULL;
	Node *Love2 = NULL;
};
int main() {
	Node *head;
	head = new Node;
	strcpy(head->name, "boss");
	head->Love1 = new Node;
	head->Love2 = new Node;
	strcpy(head->Love1->name, "wife");
	head->Love1->Love1 = head->Love1;
	head->Love1->Love2 = head->Love2;
	strcpy(head->Love2->name, "son");
	head->Love2->Love1 = new Node;
	head->Love2->Love2 = new Node;
	strcpy(head->Love2->Love1->name, "girlfriend");
	head->Love2->Love1->Love1= head->Love2;
	head->Love2->Love1->Love2 = head->Love2->Love2;
	strcpy(head->Love2->Love2->name, "boyfriend");
	head->Love2->Love2->Love1 = head->Love2->Love1;
	cout << head->Love2->Love1->name << ' '
		<< head->Love2->Love2->name;
	return 0;
}

*/