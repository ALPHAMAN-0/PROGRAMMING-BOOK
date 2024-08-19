#include <iostream>
#include <vector>
using namespace std;


int kernighans(int number){
    int count = 0;
    while(number){
        number = number&(number-1);
        count++;
    }
    return count;
}
int main() {
     int n;
     cin>>n;
     cout<<kernighans(n)<<endl;
    return 0;
}
