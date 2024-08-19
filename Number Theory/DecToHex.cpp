#include <iostream>
#include <vector>
using namespace std;

string hexadecimal(int number) {

    string hex = "0123456789ABCDEF";
    string ans = "";
    while (number > 0) {
        ans += hex[number % 16];
        number /= 16;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main() {
     
    int number;
    cout<<"Enter a Decimal number"<<endl;
    cin>>number;

    cout<<hexadecimal(number)<<endl;

    return 0;
}
