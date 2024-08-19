#include <iostream>
#include <vector>

using namespace std;

vector<int> Linear_Sieve(int n){
   vector<bool> Sieve(n+1, true);
   vector<int> primes;
   Sieve[0] = Sieve[1] = false;
   
   for(int i=2; i*i<=n;i++){
      if(Sieve[i] == true){
         primes.push_back(i);
         for(int j = i*i; j<=n; j+=i){
            Sieve[j] = false;
         }
      }
   }
   
   for(int i=sqrt(n)+1 ;i<=n; i++){
      if(Sieve[i]){
         primes.push_back(i);
      }
   }

   return primes;
}
int main() {
   int n;
   cout<<"Enter a number"<<endl;
   cin>>n;

   vector<int> primes = Linear_Sieve(n);
   for(int i=0; i<primes.size(); i++){
      cout<<primes[i]<<" ";
   }

    return 0;
}
