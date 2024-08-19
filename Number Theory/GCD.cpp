#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

int GCDRec(int a,int b){
    if(a%b==0){
        return b;
    }
    else{
        return GCDRec(b,a%b);
    }
}
int GCDIet(int a,int b){
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else {
            b = b-a;
        }
    }
    return a;
}
int main(){
   
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    int result1 = GCDRec(a,b);
    int result2 = GCDIet(a,b);
    
    cout<<result1<<" "<<result2<<endl;
    return 0;
}