#include<bits/stdc++.h>
using namespace std;

const int mx = 1e3+123;
int cnt[mx];
pair<int,int> p[mx];
bool func(pair<int,int>a ,pair<int,int> b){
    return a.first<b.first || (a.first == b.first && a.second>b.second);
}

int main(){
    int lim = 1e3;

    for(int i=1; i<=lim ; i++ ){
        for(int j=i;j<=lim;j+=i){
            cnt[j]++;
        }
    }


    for(int i=1;i<=lim ;i++){
        p[i]=make_pair(cnt[i],i);
    }



    sort(p+1,p+lim+1,func);

    // Fix the sort function to use pair<int, int>

    int t, cnt=0;
    cin >> t;

    while(t--){
        cnt++;
        long long n;  // Use long long for n
        cin >> n;
        cout << "Case "<< cnt << ": " << p[n].second << "\n";
    }

    return 0;
}
