#include <iostream>
#include<stack>
#include<vector>

using namespace std;


struct BinarySearchTree{
        int data;
        struct BinarySearchTree *Left;
        struct BinarySearchTree *Right;
};
struct BinarySearchTree *Head = NULL;
struct BinarySearchTree *InorderSuccessor(struct BinarySearchTree *Root){
        while(Root->Left != NULL){
            Root = Root->Left;
        }
        return Root;
}
struct BinarySearchTree *DeleteNode(struct BinarySearchTree *Root,int value){
    if(Root == NULL){
        return Root;
    }
    else if(Root->data > value){
        Root->Left = DeleteNode(Root->Left,value);
    }
    else if(Root->data < value){
        Root->Right = DeleteNode(Root->Right,value);
    }
    else {
        // root->data  == value
        //case 1
        if(Root->Left == NULL && Root->Right== NULL){
            return NULL;
        }

        //case 2
        if(Root->Left == NULL){
            return Root->Right;
        }
        else if(Root->Right == NULL){
            return Root->Left;
        }

        //case 3
        struct BinarySearchTree *IS = InorderSuccessor(Root->Right);
        Root->data = IS->data;
        Root->Right = DeleteNode(Root->Right, IS->data);
        
    }
    return Root;

}

void Insertstion(int value){
        struct BinarySearchTree *temp =  new BinarySearchTree;
        
        temp->data = value;
        temp->Left = NULL;
        temp->Right = NULL;
        
        if(Head == NULL){
            Head = temp;
        }
        else {
            struct BinarySearchTree *current = Head;
            struct BinarySearchTree *parent = NULL;

            while(current != NULL){
                parent = current;
                if(current->data > value){
                    current = current->Left;
                }
                else {
                    current= current->Right;
                }
            }

            if(parent->data > value){
                 parent->Left = temp;
            }
            else {
                parent->Right = temp;
            }
        }

}
void PreOrder(struct BinarySearchTree *Root){
      if(Root == NULL){
        return;
      }
      else{
          cout<<Root->data<<" ";
          PreOrder(Root->Left);
          PreOrder(Root->Right);
      }
}
void InOrder(struct BinarySearchTree *Root){
    if(Root == NULL){
        return;
    }
    InOrder(Root->Left);
    cout<<Root->data<<" ";
    InOrder(Root->Right);
}
void PostOrder(struct BinarySearchTree *Root){
        if(Root == NULL){
            return;
        }
        else{
          PreOrder(Root->Left);
          PreOrder(Root->Right);
          cout<<Root->data<<" ";
        }
}

bool Search(struct BinarySearchTree *Root,int Key){
    if(Root == NULL || Root->data == Key){
        return (Root!=NULL && Root->data == Key);
    }
    else {
        if(Root->data > Key){
           return Search(Root->Left,Key);
        }
        else{
            return Search(Root->Right,Key);
        }
    }
    
}
void PrintInRange(struct BinarySearchTree *Root,int X,int Y){
    if(X <= Root->data && Root->data <= Y){
            if(Root->Left!=NULL)PrintInRange(Root->Left,X,Y);
            cout<<Root->data<<" ";
            if(Root->Right!=NULL)PrintInRange(Root->Right,X,Y);
    }
    else if(X >= Root->data && Root->Right!=NULL){
        PrintInRange(Root->Right,X,Y);
    }
    else if(Y >= Root->data && Root->Left!=NULL){
        PrintInRange(Root->Left,X,Y);
    }
}
void PrintPath(vector<int> ArrayList){
    for(int i=0;i<ArrayList.size();i++){
        cout<<ArrayList[i]<<" ";
    }
    cout<<endl;
}
void RootToLeafPath(struct BinarySearchTree *Root,vector<int> ArrayList){
    if(Root == NULL){
        return;
    }
    ArrayList.push_back(Root->data);
    if(Root->Left == NULL && Root->Right==NULL){
        PrintPath(ArrayList);
    }
    else{
        RootToLeafPath(Root->Left,ArrayList);
        RootToLeafPath(Root->Right,ArrayList);
    }
    ArrayList.pop_back();
}
int main() {

    int values,Node,Key;
    cout<<"Enter the Nodes"<<endl;
    cin>>Node;

    for(int i=0;i<Node;i++){
        cin>>values;
        Insertstion(values);
    }
    
    cout<<"Inorder"<<endl;
    InOrder(Head);
    cout<<endl;

    cout<<"Which value you want to find"<<endl;
    cin>>Key;
    if(Search(Head,Key)){
        cout<<"Value Found"<<endl;
    }
    else {
        cout<<"Value Not Found"<<endl;
    }

    int value;
    InOrder(Head);
    cout<<endl;
    PreOrder(Head);
    cout<<endl;

    cout<<"Which Value want to delete in the BST"<<endl;
    cin>>value;
    
    DeleteNode(Head,value);
    InOrder(Head);

    int X,Y;
    cout<<"Enter The Range X To Y"<<endl;
    cin>>X>>Y;
    PrintInRange(Head,X,Y);
    cout<<"BST all Path in Root"<<endl;
    vector<int> ArrayList;
    RootToLeafPath(Head,ArrayList);


    return 0;
}
