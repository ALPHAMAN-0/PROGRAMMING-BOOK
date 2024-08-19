#include <iostream>

using namespace std;

int ReverseIntegerBits(int number){
      int f = 31,l=0;  //integer 32 bits
      int rev = 0;
      
      while(f > l){
         if((number & (1<<f)) != 0){
            rev = rev | (1<<l);
         }
         if((number & (1<<l)) !=0){
            rev = rev | (1<<f);
         }
         f--;
         l++;
      }
      return rev;     
}

int main() {
    
    int number;
    cin>>number;
    number = ReverseIntegerBits(number);
    cout<<number<<endl;
    return 0;
}
