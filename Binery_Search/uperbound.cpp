#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={1,2,2,2,4,5,6};
    int l=0,r=6,tar=3;
    int ans = 7;
    while( l <= r){
        int mid = (l+r) >> 1;
        if(a[mid]<=tar){
            l = mid+1;
        }
        else {
            ans = min(ans, mid);
            r= mid-1;
        }
    }
    cout << ans << "\n";
    //built-in
    cout << upper_bound(a.begin(),a.end(),tar)-a.begin();

}

