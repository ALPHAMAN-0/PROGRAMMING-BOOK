#include <iostream>
#include <vector>
using namespace std;


int main() {
     
    int n = 5;
    int i = 3;

    int onMask = 1 << i;
    cout<<(n|onMask)<<endl;

    int offMask = ~(1 << i);
    cout<<(n&offMask)<<endl;
    
    return 0;
}
