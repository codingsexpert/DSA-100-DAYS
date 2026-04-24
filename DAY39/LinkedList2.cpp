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



    // Traverse the list
    Node *temp = Head;

    while(temp){
      cout<<temp->data<<" ";
      temp = temp->next;
    }



    // Insert a node after the particular node

    // insert 100 after 12

    temp = Head;

    while(temp->data!=12){
        temp = temp->next;
    }

    // Insert it after 12

    Node *newNode = new Node(100);
    newNode->next = temp->next;
    temp->next = newNode;
    
    
    cout<<endl;
    // print it
    temp = Head;

    while(temp){
      cout<<temp->data<<" ";
      temp = temp->next;
    }




    // Insert Element before a element 12 se pehle insert kar do 300


    // 

    if(Head->data==12){
        Node *temp = new Node(300);
        temp->next = Head;
        Head = temp;
    }

    Node *prev = NULL, *curr = Head;

    while(curr->data!=12){
        prev = curr;
        curr = curr->next;
    }

    temp = new Node(300);
    temp->next = curr;
    prev->next = temp;


    cout<<endl;
    // print it
    temp = Head;

    while(temp){
      cout<<temp->data<<" ";
      temp = temp->next;
    }


    return 0;
}