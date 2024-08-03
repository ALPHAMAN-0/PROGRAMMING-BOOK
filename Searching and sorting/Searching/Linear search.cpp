#include<iostream>
#include<vector>

using namespace std;

bool isfound(vector<int> &numbers,int target){
      for(int i=0;i<numbers.size();i++){
         if(numbers[i]==target){
            return true;
         }
      }
      return false;
}


int main(){

    int N,input,target;
    vector<int> numbers;
    
    cout<<"Enter a size"<<endl;
    cin>>N; 
    
    cout<<"Enter the numbers"<<endl;
    for(int i=0;i<N;i++){
        cin>>input;
        numbers.push_back(input);
    }

    cout<<"Enter the Target value"<<endl;
    cin>>target;
    
    if(isfound(numbers,target)){
        cout<<"Target value is found"<<endl;
    }
    else{
        cout<<"Target value is not found"<<endl;
    }
    return 0;
}