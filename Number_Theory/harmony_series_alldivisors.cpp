#include<bits/stdc++.h>
using namespace std;

const int mx = 1e3+123;
vector<int> d[mx];
int sumofd[mx];
int main(){
    int lim = 1e3;

    for(int i=1; i<=lim ; i++ ){
        for(int j=i;j<=lim;j+=i){
            d[j].push_back(i);
            sumofd[j]+=i;
        }
    }
    for(int i=1; i <= lim ;i++){
        cout << "divisors of "<< i<< " are ";
        for(auto val : d[i]){
            cout << val << " ";
        }
        cout << "\n";
        cout << "sum of divisors are: "<<sumofd[i]<<"\n";
    }
  return 0;
}

