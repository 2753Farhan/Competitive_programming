#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t,cnt=0;
    cin >> t;
    while(t--){
        cnt++;
        ll n,m;
        cin >> n>>m;
        ll a=n/(2*m);
        cout <<"Case "<<cnt<< ": " <<a*m*m<<"\n";
    }
}
