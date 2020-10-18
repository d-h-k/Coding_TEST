#include <iostream>
using namespace std;

struct LinkedList
{   
    int data;
    LinkedList* next;
    /* data */
}typedef LLT;

LLT arr[4];

int main() {
    LLT * head = &arr[0];
    arr[0].data = 3;
    arr[1].data = 5;
    arr[2].data = 4;
    arr[3].data = 2;
    
    arr[0].next = &arr[1];
    arr[1].next = &arr[2];
    arr[2].next = &arr[3];
    arr[3].next = NULL;

    cout << head->data << ' ';
    do {
        head = head->next;
        cout << head->data << ' ';
        
        if(head->next == NULL) {
            break;
        }
    }while(1);

    return 0;
}