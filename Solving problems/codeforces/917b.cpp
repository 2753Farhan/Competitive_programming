#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

        int n,res=0;
        cin >> n;
        string s;
        cin >> s;
        map<char,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])==mp.end()){
                res+=n-i;
                mp.insert({s[i],1});
            }
        }
        cout << res << "\n";
    }
}
