#include <iostream>
#include <vector>
using namespace std;


bool CheckOnOffBit(int n){
    int i = 5;
    int mask = 1<<i;
    if((n&mask)==0){
        return false;
    }
    else{
        return true;
    }
}
int main() {
     int n;
     cin>>n;
     if(CheckOnOffBit(n)){
         cout<<"On"<<endl;
     }  
     else{
         cout<<"Off"<<endl;
     }
    return 0;
}
