#include<iostream>
#include<vector>

#define PLUS_INF 1e9+7
#define Minus_INF -1e9+6


using namespace std;

void PrimeFactors(int N){
    int i=2;
    while(i*i <= N){
        while(N%i==0){
            cout<<i<<" ";
            N = N/i;
        }
        i++;
    }

    if(N>1){
        cout<<N<<endl;
    }
    else{
        cout<<endl;
    }
}

int main(){

    int N;
    cout<<"Enter the number prime factor"<<endl;
    cin>>N;
    cout<< "Prime Factor ";
    PrimeFactors(N);


    return 0;
}