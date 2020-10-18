#include <iostream>
using namespace std;

struct LinkedList
{   
    char data;
    LinkedList* next;
    /* data */
}typedef LLT;

LLT arr[5];

int main() {
    LLT * head = &arr[0];
    LLT * temp = &arr[0];
    /*
    arr[0].data = 'Q';
    arr[1].data = 'T';
    arr[2].data = 'P';
    arr[3].data = 'K';
    arr[4].data = 'Q';
    */
    arr[0].next = &arr[1];
    arr[1].next = &arr[2];
    arr[2].next = &arr[3];
    arr[3].next = &arr[4];
    arr[4].next = NULL;
    
   for(int i=0 ; i<5 ; i++) {
       cin >> temp->data;
       temp = temp->next;
       
   }

    
    do {
        head = head->next;
    }while(head->next != NULL);
    cout << head->data << ' ';
    return 0;
}