
#include<iostream>
#include<vector>

using namespace std;
int main(){

    int N,input;
    vector<int> numbers;
    
    cout<<"Enter a size"<<endl;
    cin>>N; 
    
    cout<<"Enter the numbers"<<endl;
    for(int i=0;i<N;i++){
        cin>>input;
        numbers.push_back(input);
    }
    
    //sorted worker
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(numbers[j+1]>numbers[j]){
                swap(numbers[j+1],numbers[j]);
            }
        }
    }
    
    cout<<"Sorted order numbers"<<endl;
    for(int i=0;i<N;i++){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;


    return 0;
}