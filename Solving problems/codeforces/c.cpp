#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int LongestIncreasingSubsequenceLength(vector<int>& v)
{
    if (v.size() == 0) // boundary case
        return 0;

    vector<int> tail(v.size(), 0);
    int length = 1; // always points empty slot in tail

    tail[0] = v[0];

    for (int i = 1; i < v.size(); i++) {

        // Do binary search for the element in
        // the range from begin to begin + length
        auto b = tail.begin(), e = tail.begin() + length;
        auto it = lower_bound(b, e, v[i]);

        // If not present change the tail element to v[i]
        if (it == tail.begin() + length)
            tail[length++] = v[i];
        else
            *it = v[i];
    }

    return length;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(a[i]*-1);
        }
        cout << LongestIncreasingSubsequenceLength(v)<<"\n";
    }
}
