#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int sum = 0;
    if(b<m*a){
        int temp= n/m;
        sum += temp*b;
        temp = n%m;
        if(temp*a < b)
        sum += temp*a;
        else sum+=b;
    }
    else {
        sum += a*n ;
    }
    cout << sum ;

}
