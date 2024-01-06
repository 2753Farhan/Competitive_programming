#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,ev=0,od=0;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%2==0)ev++;
            else od++;
        }
        if(od!=0&&ev!=0){
            cout << 2 << "\n";
        }
        else{
            ll k=2;
            for(int i=1;i<=57;i++){
                k*=2;
                map<ll,int> mp;
                for(int i=0;i<n;i++){
                    mp[a[i]%k]=1;
                }
                if(mp.size()==2)break;
            }
            cout << k << "\n";

        }
    }
}
