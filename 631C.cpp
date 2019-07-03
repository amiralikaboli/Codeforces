#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E5+10;
const int MaxQ=2E5+10;
int a[MaxN];
set <int> st;

struct query{
	int kind;
	int len;
	int tim;
}q[MaxQ];

bool cmp(query a,query b){
	if (a.len==b.len)
		return a.tim>b.tim;
	return a.len>b.len;
}

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int i=0;i<k;++i){
		cin >> q[i].kind >> q[i].len;
		q[i].tim=i;
	}
	sort(q,q+k,cmp);
	for (int i=0;i<q[0].len;++i)
		st.insert(a[i]);
	for (int i=max(1,q[0].len-q[1].len);i>=0;--i)
		if (q[0].kind==1){
			set<int>::iterator it=st.rbegin();
			a[i]=*it;
			st.erase(it);
		}
		if (q[0].kind==2){
			set<int>::iterator it=st.begin();
			a[i]=*it;
			st.erase(it);	
		}
	for (int i=1;i<k;++i){
		
	}
}