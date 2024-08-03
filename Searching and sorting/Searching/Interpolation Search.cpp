#include<iostream>
#include<vector>

using namespace std;

bool isfound(vector<int> &numbers,int target){
    int low , high , idx;
    low = 0;
    high = numbers.size()-1;

    while( low <= high && (numbers[high] >= target) ){
        idx = int((high-low) * ((target - numbers[low]) / (numbers[high] - numbers[low])) + low);
        if(numbers[idx]==target){
            return true;
        }
        else if(numbers[idx]<target){
            low = idx +1;
        }
        else {
            high = idx - 1;
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