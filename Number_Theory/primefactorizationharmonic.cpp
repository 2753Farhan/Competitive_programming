//For all prime factors upto number n
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e7+123;
//bool isPrime[mx];
bitset<mx> isPrime;
vector<int> primes;

void primeGen( int n ){
    for(int i=3;i <= n ;i+=2) isPrime[i] = 1;
    isPrime[2] = 1;
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

const int pMX = 1e7+123;
vector<int> factors[pMX];

int main(){
    int lim = 1e7;
    primeGen(lim);

    for(auto p : primes){
        for(int i=p; i<=lim; i+=p){
            int n=i;
            while(n%p==0){
                factors[i].push_back(p);
                n/=p;
            }
        }
    }
    for(int i=0;i<=20;i++){
        cout << i << ": ";
        for(auto p : factors[i]) cout << p<< " ";
        cout << "\n";
    }


  return 0;
}


