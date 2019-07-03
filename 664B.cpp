#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define pb push_back
#define F first
#define S second
#define pii pair<int,int>
#define pi acos(-1)
#define X real()
#define Y imag()
#define point complex<ld>

const int MaxN=2E5+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
vector <char> pm;
vector <int> num;

int bpow(int n,int k){ if(k==0) return 1; int cnt=bpow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*cnt*cnt)%MOD;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	string s;
	getline(cin,s);
	pm.pb('+');
	for (int i=0;i<s.size();++i)
		if (s[i]=='-' || s[i]=='+')
			pm.pb(s[i]);
	int ind=s.size()-1;
	while (s[ind]>='0' && s[ind]<='9'){
		num.pb(s[ind]-'0');
		--ind;
	}
	reverse(num.begin(),num.end());
	int n=0;
	for (int i=0;i<num.size();++i){
		n*=10;
		n+=num[i];
	}
	num.clear();
	int cnt=0;
	for (int i=0;i<pm.size();++i){
		if (pm[i]=='+'){
			cnt+=n;
			num.pb(n);
		}
		else{
			--cnt;
			num.pb(1);
		}
	}
	if (cnt<n){
		cout << "Impossible";
		return 0;
	}
	cnt-=n;
	for (int i=0;i<num.size();++i){
		if (pm[i]=='+'){
			int x=min(cnt,num[i]-1);
			num[i]-=x;
			cnt-=x;
		}
		else{
			int x=min(cnt,n-num[i]);
			num[i]+=x;
			cnt-=x;
		}
	}
	if (cnt){
		cout << "Impossible";
		return 0;
	}
	cout << "Possible" << endl << num[0] << " ";
	for (int i=1;i<num.size();++i)
		cout << pm[i] << " " << num[i] << " ";
	cout << "= " << n;
}