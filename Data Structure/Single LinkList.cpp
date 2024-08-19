#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node* Root = NULL;
void Insertion(int value){
    struct Node *Helper;
    struct Node *NewNode;

    NewNode = new Node; // or We can use (struct queue*)malloc(sizeof(struct queue)) to create new Node
    
    NewNode->data = value;
    NewNode->next = NULL;

    if(Root==NULL){
        Root = NewNode;
    }
    else {
        Helper = Root;
        while(Helper->next!=NULL){
            Helper = Helper->next;
        }
        Helper->next = NewNode;
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
            delete Helper2;
            cout<<"Deleted Successfully"<<endl;
        }
        else {
            cout<<"Element not found"<<endl;
        }
    }
}
void Print(){
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
    cout<<"Enter the number to search"<<endl;
    cin>>inp;
    Search(inp);
    cout<<"Enter the number to delete"<<endl;
    cin>>inp;
    Deletion(inp);
    Print();
    return 0;
}