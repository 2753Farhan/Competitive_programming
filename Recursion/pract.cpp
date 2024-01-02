#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==1)return 1;
    else return n+sum(n-1);
}
int fact(int n){
    if(n==1)return 1;
    return n*fact(n-1);
}
void rev(int i,int arr[],int n){
    if(i>=n/2)return;
    swap(arr[i],arr[n-i-1]);
    rev(i+1,arr,n);
}
bool palindrome(int i,string s){
    if(i>=s.size()/2)return true;
    if(s[i]!=s[s.size()-i-1])return false;

    return palindrome(i+1,s);
}
int fib(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return fib(n-1)+fib(n-2);
}
//f(n)=f(n+1)+f(n+2)
int main(){
    cout << sum(3)<<"\n";
    cout << fact(5)<<"\n";
    int arr[]={1,5,6,2,3};
    rev(0,arr,5);
    for(int i=0;i<5;i++)cout << arr[i]<<" ";
    cout << "\n";
    cout << palindrome(0,"shuvuhs")<<"\n";
    cout << fib(8);

}
