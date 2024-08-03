#include<iostream>
#include<vector>

#define PLUS_INF 1e9+7
#define Minus_INF -1e9+6

bool PrimeNumbers[1000];
using namespace std;
void PrimeFilter(int N){
    for(int i=2; i*i<=N;i++){
        if(PrimeNumbers[i] == false){
                for(int j = i*i; j<=N; j+=i){
                    PrimeNumbers[j] = true;
                }
        }
    }
}

int main(){

    int N;
  cout<<"Enter the Range of numbers"<<endl;
    cin>>N;
    PrimeFilter(N);
    for(int i=2;i<N;i++){
        if(PrimeNumbers[i]==false){
            cout<<i<<endl;
        }
    }
    
    return 0;
}