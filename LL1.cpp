#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        // cout<<"Default ctor"<<endl;
        this->next = NULL ;
    }
    Node(int data){
        // cout<<"Param ctor"<<endl;
        this->data = data;
        this->next = NULL;
    }
};

void addfirst(Node* &head , int data){
    //create newnode
    Node* newnode = new Node(data);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

// void addlast(Node* &head,int data){
//     //create newNode
//     Node* newnode = new Node(data);
//     while (head != NULL)
//     {
//        head = head->next;
//     }
//     head->next = newnode;
//     newnode->next = NULL;
    
// }


void printLL(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data << " -->> ";
        temp = temp->next;
    }
    cout <<"null"<<endl;
    
}

int getLength(Node* head){
    Node* temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
    
}

int main(){


    Node* head = NULL;
    Node* tail = NULL;
    addfirst(head , 50);
    addfirst(head , 40);
    addfirst(head , 30);
    addfirst(head , 20);
    addfirst(head , 10);

    // addlast(head,50);
    printLL(head);
    cout << getLength(head) <<endl;
    return 0;
}