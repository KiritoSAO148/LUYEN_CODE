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

struct p{
	int x,y;
};

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int n; cin >> n;
	p a[n];
	f0 (i,n) cin >> a[i].x >> a[i].y;
	//f0 (i,n) cout << a[i].x << ' ' << a[i].y << '\n';
	int res=-1e9;
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			res=max(res,abs(a[i].x-a[j].x)+abs(a[i].y-a[j].y));
		}
	}
	cout << res;
	return 0;
}