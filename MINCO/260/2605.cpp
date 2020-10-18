#include <iostream>
using namespace std;
//
struct NODE{
    char data;
    NODE * next;
};
typedef NODE Node;


void push(char value);
int front();
char pop();


Node* head;
Node* tail;

int main() {
    //cout << "hi"<<endl;
    int a, b;
    char buf[200];
    cin >> a >> b;
    for(int i=0 ; i<a ; i++ )  {
        cin >> buf[i];
        push(buf[i]);
    }
    for(int i=b ; i<a ; i++) {
        //pop();

        cout << buf[i] << ' ';
    }




    return 0;
}

char pop() {
    Node * back = head;
    char temp = head->data;
    head = head->next;
    delete back;
    return temp;
}

int front() {
    return head->data;
}

bool is_empty() {
    //if(head =! NULL)
    return false;
}

void push(char value) {
    if(head == NULL ) {
        head = new Node();
        head->data = value;
        tail = head;
    }
    else {
        tail->next = new Node();
        tail = tail->next;
        tail->data = value;
    }
}
