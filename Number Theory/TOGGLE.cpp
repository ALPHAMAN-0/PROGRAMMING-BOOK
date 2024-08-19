#include <iostream>
#include <vector>
using namespace std;


int toggle(int n){
    int i = 3;
    int mask = 1<<i;
    return (n^mask);
}
int main() {
     int n;
     cin>>n;
     cout<<toggle(n)<<endl;
    
    return 0;
}
