#include <iostream>
#include <vector>
using namespace std;

string octadecimal(int number) {

    string ans = "";
    while(number) {
        int rem = number % 8;
        ans += to_string(rem);
        number /= 8;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main() {
     
    int number;
    cout<<"Enter a Decimal number"<<endl;
    cin>>number;

    cout<<octadecimal(number)<<endl;

    return 0;
}
