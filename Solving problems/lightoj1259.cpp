#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mx = 1e7+123;
//bool isPrime[mx];
bitset<mx> isPrime;
vector<int> primes;

void primeGen( int n ){
    isPrime[2]=1;
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
    primeGen(mx);
    int t,c=0;
    cin >> t;
    while(t--){
        c++;
        primes.clear();
        ll n;
        cin >> n;
        ll cnt=0;
        for(int i=0; primes[i]<=n/2 ;i++){
            if(isPrime[n-primes[i]]){

                cnt++;
            }
        }
        cout <<"Case "<<c <<": "<< cnt <<"\n";
    }

  return 0;
}


