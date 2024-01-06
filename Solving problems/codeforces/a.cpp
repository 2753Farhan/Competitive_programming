#include<bits/stdc++.h>
using namespace std;
typedef long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        if(a%2==1){
            if(b%2==1)cout << "Bob\n";
            else cout << "Alice\n";
        }
        else {
              if(b%2==0)  cout << "Bob\n";
              else cout << "Alice\n";
        }
    }
}
