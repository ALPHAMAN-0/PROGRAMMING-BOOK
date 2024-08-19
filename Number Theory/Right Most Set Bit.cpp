#include <iostream>
#include <vector>
using namespace std;

int RightMostSetBit(int Number){
    int m = 1;
    int pos = 0;
   
    if(Number==0){
        return -1;
    } 
    while((Number & m)==0){
        m = m<<1;
        pos++;
    }
    return pos+1;
}
int main() {
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
    cout<<RightMostSetBit(number)<<endl;
    return 0;
}
