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
vector<int> primefactors(int n){
    vector<int> factors;
    for(auto p : primes){
        if(1LL*p*p>n) break;

        if(n%p == 0){
            while( n%p == 0){
                factors.push_back(p);
                n/=p;
            }
        }
    }
    if(n > 1){
        factors.push_back(n);
    }
    return factors;
}
int main(){
    int lim = 1e7;
    primeGen(lim);

    int n;
    cin >> n;
    vector<int> primefact = primefactors(n);

    for(auto a: primefact){
        cout << a << " ";
    }
    cout << "\n";

  return 0;
}


