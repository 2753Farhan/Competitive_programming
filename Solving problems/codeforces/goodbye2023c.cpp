#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){

        ll n,sum=0,odd=0;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(a[i]%2==1)odd++;
            if(i==0) cout << sum << " ";

            else cout << sum - (odd/3)-(odd%3==1)<<" ";
        }
        cout << "\n";
    }
}

