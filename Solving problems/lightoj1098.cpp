//pre-calculation kore hobe na :')
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll n){
    ll sum=0;
    for(ll i=2;i*i<=n;i++){
        ll j=n/i;
        sum+=((j*(j+1))/2)-((i*(i-1))/2);
        sum+=(j-i)*i;
    }
    return sum;
}

int main() {


    int t,cnt=0;
    cin >> t;
    while(t--){
        cnt++;
        ll n;
        cin >> n;
        cout << "Case "<< cnt<< ": " <<solve(n) << "\n";
    }
    return 0;
}
