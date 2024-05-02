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
//addFirst --->>
void addfirst(Node* &head , Node * &tail , int data){
    //create newnode
    Node* newnode = new Node(data);
    if (head == NULL)   //empty LL
    {
        head = tail= newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}


//addLast --->>
void addlast(Node* &head, Node* &tail,int data){
    //create newNode
   
    // Node* temp = head;
    // while (temp->next != NULL)
    // {   
    //     temp = temp->next;
    // } 
    // tail = temp;

    Node* newnode = new Node(data);
    if (head == NULL)
    {
        head = tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}

//printing LL --->>
void printLL(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data << " -->> ";
        temp = temp->next;
    }
    cout <<"null"<<endl;
    
}

// getting length of LL --->>
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

//addFirst
    addfirst(head,tail ,50);
    addfirst(head,tail ,40);
    addfirst(head,tail ,30);
    addfirst(head,tail ,20);
    addfirst(head,tail ,10);

//addLast --->>
    addlast(head,tail,60);
    addlast(head,tail,70);

//PrintLL --->>  
    printLL(head);

//Print_Length_Of_LL --->>
    cout <<"Length of LL is : "<< getLength(head) <<endl;

    return 0;
}