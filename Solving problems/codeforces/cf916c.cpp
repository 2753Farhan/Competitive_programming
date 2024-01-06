#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll a[n],b[n];
        for(ll i=0;i<n;i++){
            cin >> a[i];
        }
        for(ll i=0;i<n;i++){
            cin >> b[i];
        }
        ll mx=0,temp=0,ans=0;
        for(ll i=0;i<n;i++){
            if(i==k)break;
            temp+=a[i];
            mx=max(mx,b[i]);
            ans=max(temp+(k-i-1)*mx,ans);
        }
        cout << ans << "\n";
    }
}
