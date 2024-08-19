#include <iostream>
#include <vector>
#include<bitset>
#include<utility>
#include<algorithm>
#include <cstdint>

using namespace std;

#define vi vector<int> 
#define pii pair<int,int>
#define vipii vector<pii>
#define loop(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define SetBitsCount(x) __builtin_popcount(x)

int l=0;
int FindLengthAndCout(int number){
    int l=0,count=0;
    while(count<number){
        l++;
        count = count + (int)pow(2,(l-1)/2);
    }
    count = count - (int)pow(2,(l-1)/2);
    return count;
}
int FindElementAndConvertAnswer(int number,int count){
    int Element = number - count-1;
    int Answer = (1<<(l-1)) | (Element << (l/2));
    return Answer;
}
int ReverseBinary(int number){
      int f = l-1, n = 0;
      int rev = 0;

      while(f>n){
            if((number & (1<<f))!=0){
                rev = rev | (1<<n);
            }
            if((number & (1<<n))!=0){
                rev = rev|(1<<f);
            }
            f--;
            n++;
      }
      return rev;
}
int main() {
    int number;
    cout<<"Enter the Number"<<endl;
    cin>>number;
    
    int Count = FindLengthAndCout(number);
    int Answer = FindElementAndConvertAnswer(number,Count);
    Answer = Answer | ReverseBinary(Answer);
    cout<<Answer<<endl;
    
    return 0;
}
