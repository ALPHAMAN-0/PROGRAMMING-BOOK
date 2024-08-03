#include<iostream>
#include<vector>

#define PLUS_INF 1e9+7
#define Minus_INF -1e9+6


using namespace std;

vector<int> divisors[100002];
void Divisors(int N){
    int i,j;
    for(int i=1; i<=N; i++){
        for(int j=i; j<=N; j+=i){
            divisors[j].push_back(i);
        }
    }
}
int main(){

    int N;
    cout << "Enter a Number" << endl;
    cin >> N;
    Divisors(N);
    for(int i=1; i<=N; i++){
        cout << "Divisors of " << i << ": ";
        for(int j=0; j<divisors[i].size(); j++){
            cout << divisors[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}