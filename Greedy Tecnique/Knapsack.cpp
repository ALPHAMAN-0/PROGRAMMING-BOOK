#include <iostream>
#include <vector>
#include<bitset>
#include<utility>
#include<algorithm>

using namespace std;

#define vi vector<int> 
#define pii pair<int,int>
#define vipii vector<pii>
#define loop(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define SetBitsCount(x) builtin_popcount(x)

bool compare(pii p1, pii p2){
    double value1 = (double) p1.ff/p2.ss;
    double value2 = (double) p2.ff/p2.ss;
    return value1 > value2;
}

int main() {
	int Item,i,Weight;
    cout<<"number of items"<<endl;
    cin>>Item;
    cout<<"Enter the Bag Size"<<endl;
    cin>>Weight;
    vipii arr(Item);
    
    cout<<"Enter Value and Weight"<<endl;
    loop(i,0,Item){
        cin>>arr[i].ff>>arr[i].ss;
    }
    
    sort(arr.begin(),arr.end(),compare); // Sort value per weight
    int MaximumCarry =0;
    
    loop(i,0,Item){
        if(Weight>=arr[i].ss){
            MaximumCarry+=arr[i].ff;
            Weight = Weight - arr[i].ss;
            continue;
        }
        double ValuePerUnit = (double) arr[i].ff/arr[i].ss;
        MaximumCarry+= ValuePerUnit * Weight;
        break;
    }
    cout<<MaximumCarry<<endl;


    return 0;
}
