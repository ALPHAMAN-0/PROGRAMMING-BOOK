#include <iostream>
#include<stack>
#include<vector>

using namespace std;

const int N = 1e5+9;

/* Example of graph
6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6
*/
vector<int> Graph[N];
bool Visited[N];

void DFS(int vertex){
    //Part 1 : Take Action on vertex after entering the vertex
    cout<< vertex <<endl;
    
    Visited[vertex] = true;
    for(int child : Graph[vertex]){

        cout<<"Pair Node "<<vertex<<" Child "<<child<<endl;
        
        //Part 2 : Take Action on child before entering the child Node
        if(Visited[child])continue;
    
        DFS(child);

        //Part 3: Take Action on child after exiting ChildNode
    }
    //Part 4: Take Action on vertex Before Exiting The vertex

}
int main() {
	
    int vertex,edge;
    cout<<"Enter the Vertex and edge"<<endl;
    cin>>vertex>>edge;

    int V1,V2;
    for(int i=0; i<edge; i++){
        cin>>V1>>V2;

        Graph[V1].push_back(V2);
        Graph[V2].push_back(V1);

    }
    DFS(vertex);
    
    return 0;
}
