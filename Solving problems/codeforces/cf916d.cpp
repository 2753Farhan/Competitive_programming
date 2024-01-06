#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n],b[n],c[n];
        vector<pair<ll,ll>> p1,p2,p3;
        for(int i=0;i<n;i++){
            cin >> a[i];
            p1.push_back({a[i],i});
        }
        sort(p1.rbegin(),p1.rend());
        for(int i=0;i<n;i++){
            cin >> b[i];
            p2.push_back({b[i],i});
        }
        sort(p2.rbegin(),p2.rend());

        for(int i=0;i<n;i++){
            cin >> c[i];
            p3.push_back({c[i],i});
        }
       sort(p3.rbegin(),p3.rend());

       ll sum=0;
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(p1[i].second!=p2[j].second&&p3[k].second!=p2[j].second&&p1[i].second!=p3[k].second)
                sum=max(sum,p1[i].first+p2[j].first+p3[k].first);
            }
        }
       }
       cout << sum <<"\n";

    }
}
