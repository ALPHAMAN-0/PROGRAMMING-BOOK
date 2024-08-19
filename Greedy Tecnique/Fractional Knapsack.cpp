#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

typedef pair<int,int> PII;
vector<PII> V;
bool cmp (PII A, PII B){
    return A.second * B.first > A.first * B.second;
}

int  FractionalKnapsack(){
    int W;
    cout<<"Enter the weight of knapsack"<<endl;
    cin>>W;
    int ans = 0;
    for(int i=0;i<V.size();i++){
        if(V[i].second <= W){
            ans += V[i].first;
            W -= V[i].second;
        }
        else{
            ans += V[i].first * W / V[i].second;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
int main()
{   
    int N;
    cout<<"Enter the number of items"<<endl;
    cin>>N;
    
    cout<<"Enter the weight and price"<<endl;
    for(int i=0;i<N;i++){
        int weight,price;
        cin>>weight>>price;
        V.push_back({price,weight});
    }
    sort(V.begin(),V.end(),cmp);
    FractionalKnapsack();
    return 0;
}