#include<iostream>
#include<vector>

#define PLUS_INF 1e9+7
#define Minus_INF -1e9+6

using namespace std;

void Window(vector<int> &numbers,int WindowSize){
      int WindowSum = 0;
      int MinSum  = PLUS_INF;
      int MaxSum = Minus_INF;

      for(int i=0; i<WindowSize; i++){
         WindowSum+= numbers[i];
      }

      for(int i=WindowSize; i<numbers.size(); i++){
            WindowSum += numbers[i] - numbers[i-WindowSize];
            MaxSum = max(MaxSum,WindowSum);
            MinSum = min(MinSum,WindowSum);
      }
    
     cout<<"Max Sum :"<<MaxSum<<endl;
     cout<<"Min Sum :"<<MinSum<<endl;
}


int main(){

    int N,input,WindowSize;
    vector<int> numbers;
    
    cout<<"Enter a size"<<endl;
    cin>>N; 
    
    cout<<"Enter the numbers"<<endl;
    for(int i=0;i<N;i++){
        cin>>input;
        numbers.push_back(input);
    }
    cout<<"Enter the window size"<<endl;
    cin>>WindowSize;
    Window(numbers,WindowSize);
    return 0;
}