#include <iostream>
#include<vector>

using namespace std;

int MaxAndPair(vector<int> arr,int mask){
    int count = 0;
    
    for(int i=0;i<arr.size();i++){
        if((mask & arr[i]) == mask){
            count++;
        }
    }
    return count;
}
int MaxAndValue(vector<int> arr){
    int mask = 0;
    int result = 0;

    for(int i=31; i>=0; i--){
        mask = 1<<i | (result);
        int count = MaxAndPair(arr,mask);
        if(count>=2){
            result = result | mask;
        }
    } 
    return result;   
}

int main() {
    vector<int> arr ={16,9,6,13};
    int maxandvalue = MaxAndValue(arr);
    cout<<maxandvalue<<endl;
    return 0;
}
