#include<bits/stdc++.h>
using namespace std;
void printF(int ind, vector<int> &ds,int s,int sum,int arr[],int n){
    if(ind == n){
        if(s==sum){
            for(auto it : ds){
                cout << it << " ";
            }
            if(ds.size() == 0){
                cout << "{}";
            }
            cout << endl;
        }
        return;
    }
    s+=arr[ind];
    ds.push_back(arr[ind]);
    printF(ind+1,ds,s,sum,arr,n);
    s-=arr[ind];
    ds.pop_back();
    printF(ind+1,ds,s,sum,arr,n);
}
int main(){
    int arr[] = {3,1,2};
    int n=3;
    vector<int> ds;
    printF(0,ds,0,3,arr,n);

}
