#include<bits/stdc++.h>
using namespace std;

const int mx = 1e7+123;
//bool isPrime[mx];
bitset<mx> isPrime;
vector<int> primes;

void primeGen( int n ){
    for(int i=3;i <= n ;i+=2) isPrime[i] = 1;

    for(int i=3;i*i<=n;i+=2){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j] = 0;
            }
        }
    }
    primes.push_back(2);

    for(int i = 3; i<=n;i+=2 ){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }

}
int main(){
    int lim = 1e7;
    primeGen(lim);

    for(int i=0;i<primes.size();i++){
        cout << primes[i] << "\n";
    }

  return 0;
}

