#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node* Root = NULL;
struct Node* Tail = NULL;

void Insertion(int value){
    struct Node *NewNode;

    NewNode = new Node; // or We can use (struct queue*)malloc(sizeof(struct queue)) to create new Node
    
    NewNode->data = value;
    NewNode->next = NULL;
    NewNode->prev = NULL;

    if(Root==NULL){
        Root = NewNode;
        Tail = NewNode;
    }
    else {
        Tail->next = NewNode;
        NewNode->prev = Tail;
        Tail = NewNode;
    }
}
void Search(int value){
    struct Node *Helper;
    if(Root == NULL){
        cout<<"List is empty"<<endl;
    }
    else {
        Helper = Root;
        while(Helper->data!=value && Helper->next!=NULL){
            Helper = Helper->next;
        }
        if(Helper->data == value){
            cout<<"Element found"<<endl;
        }   
        else {
            cout<<"Element not found"<<endl;
        }
    }
    
}
void Deletion(int value){
    struct Node *Helper1;
    struct Node *Helper2;

    if(Root==NULL){
        cout<<"List is empty"<<endl;
    }

    else if(Root->data == value){
        Helper1 = Root;
        Root = Root->next;
        Root->prev = NULL;
        delete Helper1;
        cout<<"Deleted Successfully"<<endl;
    }

    else if(Tail->data == value){
        Helper1 = Tail;
        Tail = Tail->prev;
        Tail->next = NULL;
        delete Helper1;
        cout<<"Deleted Successfully"<<endl;
    }

    else{
        Helper1 = Root;
        Helper2 = Helper1->next;
    
        while(Helper2!=NULL && Helper2->data!=value){
           Helper1 = Helper2;
           Helper2 = Helper2->next;
        }
        
        if( Helper2 != NULL && Helper2->data == value){
            Helper1->next = Helper2->next;
            Helper2->next->prev = Helper1;
            delete Helper2;
            cout<<"Deleted Successfully"<<endl;
        }
        else {
            cout<<"Element not found"<<endl;
        }
    }
}
void ForWardPrint(){
    struct Node *Helper;
    if(Root == NULL){
        cout<<"List is empty"<<endl;
    }
    else {
        Helper = Root;
        while(Helper!=NULL){
            cout<<Helper->data<<" ";
            Helper = Helper->next;
        }
        cout<<endl;
    }
}
void BackWardPrint(){
    struct Node *Helper;
    if(Root == NULL){
        cout<<"List is empty"<<endl;
    }
    else {
        Helper = Tail;
        while(Helper!=NULL){
            cout<<Helper->data<<" ";
            Helper = Helper->prev;
        }
        cout<<endl;
    }
}
int main()
{   
    int N,inp;
    cout<<"Enter a size"<<endl;
    cin>>N; 
    
    cout<<"Enter the numbers"<<endl;
    for(int i=0;i<N;i++){
        cin>>inp;
        Insertion(inp);
    }
    ForWardPrint();
    BackWardPrint();
    cout<<"Enter the number to search"<<endl;
    cin>>inp;
    Search(inp);
    cout<<"Enter the number to delete"<<endl;
    cin>>inp;
    Deletion(inp);
    ForWardPrint();
    BackWardPrint();
    return 0;
}