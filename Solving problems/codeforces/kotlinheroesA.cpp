#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    while(n--){
    string s,s1;
    cin >> s;
    int ind=0;
    for(int i=0;i<s.length();i++){
        if(s[i]-'a'>=0&&s[i]-'a'<=26){
            ind=i;
        }
    }
    //cout << ind << "\n";
    for(int i=ind+1 ;i<s.length();i++){
        if(s[i]!='0'){
      //      cout<<s[i]<<"\n";
            break;
        }
        else{
            ind++;
       //     cout << ind << "\n";
        }
    }
    cout << s.substr(0,ind+1)<<"\n";
    }
}
