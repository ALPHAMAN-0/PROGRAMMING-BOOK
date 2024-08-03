#include<iostream>
#include<vector>

using namespace std;

bool isfound(vector<int> &numbers,int target){
    int mid1,mid2;
    int  l, r;
    
    l = 0;
    r = numbers.size();
    
    while(l<=r){
          mid1 = l + (r-l)/3;
          mid2 = r - (r-l)/3;
          if(numbers[mid1]==target || numbers[mid2]==target){
              return true;
          }
          else if(numbers[mid1] > target){
                r = mid1-1;
          }
          else if(numbers[mid2] < target) {
                l = mid2+1;
          }
          else {
                l = mid1++;
                r = mid2--;
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