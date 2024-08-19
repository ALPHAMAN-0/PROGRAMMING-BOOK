#include <iostream>
#include <vector>
#include<stack>

using namespace std;
const int N = 1e5+9;

bool Visited[N];
vector<int> Graph[N];

void FindConnectedComponents(int vertex){
        Visited[vertex] = true;
        for(int child: Graph[vertex]){
            if(Visited[child]) continue;
            FindConnectedComponents(child);
        }
}
int main() {
     int node,edge;
     cout<<"Enter Node and Edge"<<endl;
     cin>>node>>edge;
     
     int v1,v2;
     for(int i=0;i<edge;i++){
        cin>>v1>>v2;
        Graph[v1].push_back(v2);
        Graph[v2].push_back(v1);
     }
     int ConnectComponentsCount = 0;
     for(int i=0;i<=node;i++){
        if(Visited[i]) continue;
        FindConnectedComponents(i);
        ConnectComponentsCount++;
     }

     cout<<"Connected Components of The graph is :" <<ConnectComponentsCount<<endl;
    return 0;
}
