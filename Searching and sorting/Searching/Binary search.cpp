#include<iostream>
#include<vector>

using namespace std;

bool isfound(vector<int>&ar , int target){
    int left =0;
    int right = ar.size()-1;

    while(left<=right){
        int mid = left + (right-left)/2;

        if(ar[mid]==target){
            return true;
        }
        else if(ar[mid]<target){
              left = mid+1;
        }
        else {
            right = mid-1;
        }
    }
    return false;
}
int main(){
   
    int x,point,target;
    cout<<"enter the array size"<<endl;
    cin>>x;
    vector<int> ar(x);
    cout<<"enter the array elements"<<endl;
    
    for(int i=0;i<x;i++){
        cin>>ar[i];
    }
    
    cout<<"Enter the target value"<<endl;
    cin>>target;
    
    if(isfound(ar,target)){
        cout<<"The number is found "<<endl;
    }
    else {
        cout<<"The number is not found"<<endl;
    }

    return 0;
}