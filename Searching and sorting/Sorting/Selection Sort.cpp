
/*
       5 8 6 1 7 9
       1 8 6 5 7 9
       1 6 8 5 7 9
       1 5 8 6 7 9
       1 5 6 8 7 9
       1 5 6 7 8 9
*/
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
      for(int j=i+1;j<N;j++){
         if(numbers[i]>numbers[j]){
            swap(numbers[i],numbers[j]);
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