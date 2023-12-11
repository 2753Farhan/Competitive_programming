#include<bits/stdc++.h>
using namespace std;

const int mx = 1e2+123;
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

const int pMX = 1e2+123;
vector<int> factors[pMX];
int main(){
    int lim = 1e2;
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
    int t,cnt=0;
    cin >> t;
    while(t--){
    cnt++;
    int n;
    cin >> n;
    vector<int> primefact ;
    for(int i=0;i<=n;i++){
        for(auto p : factors[i]) primefact.push_back(p);
    }
    map<int,int> m;
    for(auto val: primefact){
        if(m.find(val)==m.end()){
            m.insert(make_pair(val,1));
        }
        else
        m[val]++;
    }
      int i=0;
    for(auto a: m){

        i++;
        if(i==1)
        cout <<"Case "<<cnt<< ": " <<n<< " = "<<a.first << " ("<<a.second<<")" ;
        else
        cout << " * "<<a.first << " ("<<a.second<<")" ;

    }
    cout << "\n";
    }

  return 0;
}


