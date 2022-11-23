#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
#define f0(i,n) for (int i=0; i<n; i++)
#define f1(i,n) for (int i=1; i<=n; i++)
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define maxn

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;

ll t[75];

void sieve(){
	t[0]=0; t[1]=0; t[2]=1;
	for (int i=3; i<=74; i++)
		t[i]=t[i-1]+t[i-2]+t[i-3];
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	sieve();
	//for (int i=0; i<=74; i++) cout << t[i] << " ";
	ll n;
	while (cin >> n){
		for (int i=0; i<=74; i++){
			if (t[i]>=n){
				cout << t[i] << "\n";
				break;
			}
		}
	}
	return 0;
}