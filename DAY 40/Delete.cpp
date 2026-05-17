#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    // constructor
    Node(int value){
      data = value;
      next = NULL;
    }
};


int main(){

    int arr[5] = {10,12,15,20,11};

    Node *Head = NULL;

    for(int i=0;i<5;i++){
        // Create first Node
        if(!Head){
            Head = new Node(arr[i]);
        }
        else{
            Node *temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

   
    // How to delete a node in linked list

    // First node ko delete karo

    Node *temp = Head;

    Head = Head->next;
    delete temp;

    // Last Node ko delete karna hai

    temp = Head;
    // how to reach last Node, More than 1 node exist?
    Node *prev = NULL;

    while(temp->next){
        prev = temp;
        temp = temp->next;
    }

    prev->next= NULL;
    delete temp;


    // 4th node delete karna hai

    // 2->4->10->50->7->9

    temp = Head;
    int n = 3;
    while(--n){
        temp=temp->next;
    }

    prev = temp->next;
    temp->next = prev->next;
    delete prev;


    return 0;
}