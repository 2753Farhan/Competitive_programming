#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+6;

int sum[N];
char s[N][10];
void solves()
{
	map<pair<int,int>,int>mp;
	int n;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",s[i]);
		int l=strlen(s[i]);
		int ssum=0;
		for(int j=0;j<l;j++) ssum += s[i][j]-'0';
		for(int j=0;j<l;j++)
		{
			sum[i] += s[i][j]-'0';
			mp[{2*sum[i]-ssum,2*(j+1)-l}]++;
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		int l=strlen(s[i]);
		ans += mp[{sum[i],l}]+mp[{-sum[i],-l}];
	}
	printf("%lld",ans);
}
int main()
{
    int T = 1;
    // cin >> T;
    while (T--) {
        solves();
    }
    return 1;
}

