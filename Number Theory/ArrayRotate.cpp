#include <iostream>
#include <vector>
#include<bitset>
#include<algorithm>

using namespace std;

void Reverse(vector<int> &arr, int Start, int End){
    while(Start<End){
        int temp = arr[Start];
        arr[Start] = arr[End];
        arr[End] = temp;
        Start++;
        End--;
    }
}
void ArrayRotate(vector<int> &arr, int K){
    
    K = K%arr.size();
    if(K<0){
        K = K+arr.size();
    }

    Reverse(arr, 0 , K-1);
    Reverse(arr,K,arr.size()-1);
    Reverse(arr,0,arr.size()-1);
}
int main() {
	int test,N,K;
	cin>>test;
	
	while(test--){
	    cin>>N>>K;
	    
	    vector<int> arr(N);
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	    }
	 ArrayRotate(arr,K);
	    for(int i=0;i<N;i++){
	        cout<<arr[i]<<" ";
	        
	    }
	    
	}

}
