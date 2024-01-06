#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3;
    cin >> s1>> s2 >> s3;
cout<<"\n";
    char grid[3][3];
    for(int i=0;i<3;i++)grid[0][i]=s1[i];
    for(int i=0;i<3;i++)grid[1][i]=s2[i];
    for(int i=0;i<3;i++)grid[2][i]=s3[i];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                cout <<grid[i][j]<<" ";
        }
        cout << "\n";
    }
    cout << "\n\n";
    set<string> st;
int    d[3]={0,-1,1};
    char val='C',x,y;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          string temp;
          temp.push_back(grid[i][j]);
          for(int k=0;k<3;k++){
                 for(int l=0;l<3;l++){
                    if((i+d[k]>=0&&i+d[k]<3)&&(j+d[l]>=0&&j+d[l]<3)){
                        if(d[k]!=0||d[l]!=0){
                        temp.push_back(grid[i+d[k]][j+d[l]]);
                        for(int m=0;m<3;m++){
                            for(int n=0;n<3;n++){
                                if((i+d[k]+d[m]>=0&&i+d[k]+d[m]<3)&&(j+d[l]+d[n]>=0&&j+d[l]+d[n]<3)){
                                    if(d[m]!=0||d[n]!=0&&!(d[k]+d[m]==0&&d[l]+d[n])){
                                    temp.push_back(grid[i+d[k]+d[m]][j+d[l]+d[n]]);
                                    st.insert(temp);
                                   cout << temp<<"\n";
                                    temp.pop_back();
                                    }
                                }
                            }
                        }
                        temp.pop_back();
                        }
                    }
                 }
          }
          temp.pop_back();
        }
    }
   //for(auto it=st.begin();it!=st.end();it++)cout << *it << "\n";
}
