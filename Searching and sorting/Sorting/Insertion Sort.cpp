

#include<iostream>
#include<vector>

using namespace std;
int main(){

    int N,inp;
    vector<int> numbers;
    
    cout<<"Enter a size"<<endl;
    cin>>N; 
    
    cout<<"Enter the numbers"<<endl;
    for(int i=0;i<N;i++){
        cin>>inp;
        numbers.push_back(inp);
    }
    
    //sorted worker
    for(int i=0;i<N;i++){
        int x = numbers[i];
        int j = i-1;

        while(j>=0 && numbers[j]>x){
             numbers[j+1] = numbers[j];
             j--;
        }
        numbers[j+1] = x;
    }
    
    cout<<"Sorted order numbers"<<endl;
    for(int i=0;i<N;i++){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;


    return 0;
}

/*  Example  size 6  numbers are 5 8 6 1 7 9
        5* 8 6 1 7 9
        5 8* 6 1 7 9
        5 8 6* 1 7 9
        5 6 8 1* 7 9
        5 6 1* 8 7 9      
        5 1* 6 8 7 9
        1 5 6 8 7* 9
        1 5 6 7 8 9 sorted
*/