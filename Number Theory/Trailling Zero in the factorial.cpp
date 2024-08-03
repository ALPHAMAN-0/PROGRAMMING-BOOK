#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;
int TraillingZeros(int N){
    int result = 0;
    int PowerOfFive = 5;

    while(PowerOfFive <= N){
        result += N/PowerOfFive;
        PowerOfFive *=5;
    }
    return result;
}
int main(){
   
   int N;
   cout<<"Enter a Number forTrailling Zero"<<endl;
   cin>>N;
   int result = TraillingZeros(N);
   cout<<result<<endl;
  return 0;
}