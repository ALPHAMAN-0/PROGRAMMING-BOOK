#include <iostream>
#include<vector>

using namespace std;

int mod = 1000000007.;
int BinaryExporentiation(int base , int power){
    if(power==0){
        return 1;
    } 
    long long res = BinaryExporentiation(base,power/2);
    if(power&1){
        return (base * (res*res)%mod);
    }
    else{
        return (res*res)%mod;
    }
}
int main() {

    int base,power;
    cout<<"Enter 2 numbers"<<endl;
    cin>>base>>power;

    long long result = BinaryExporentiation(base,power);
    cout<<result<<endl;
    return 0;
}
