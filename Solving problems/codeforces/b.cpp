#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,pl=0,mn=0;
        cin >> n;
        string s;
        cin >> s;
        for(auto val: s){
            if(val=='-')mn++;
            else pl++;
        }
        cout <<abs(pl-mn)<<"\n";
    }
}
