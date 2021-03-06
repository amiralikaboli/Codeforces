#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>

const int MaxN=1E5+10;
int a[MaxN],b[MaxN];
int seg[4*MaxN],tim[4*MaxN];

void update(int l,int r,int val,int t,int s,int e,int ind){
	if (l>=e || r<=s)
		return;
	if (l<=s && r>=e){
		seg[ind]=val;
		tim[ind]=t;
		return;
	}
	int mid=(s+e)/2;
	update(l,r,val,t,s,mid,2*ind+0);
	update(l,r,val,t,mid,e,2*ind+1);
}

pii get(int p,int s,int e,int ind){
	if (e-s==1)
		return pii(seg[ind],tim[ind]);
	int mid=(s+e)/2;
	pii x;
	if (p<mid)
		x=get(p,s,mid,2*ind+0);
	else
		x=get(p,mid,e,2*ind+1);
	if (x.second<tim[ind])
		x=pii(seg[ind],tim[ind]);
	return x;
}

int main(){
	ios::sync_with_stdio(false);
	int n,q;
	cin >> n >> q;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int j=0;j<n;++j)
		cin >> b[j];
	fill(tim,tim+4*MaxN,-1);
	for (int t=0;t<q;++t){
		int h;
		cin >> h;
		if (h==1){
			int sa,sb,l;
			cin >> sa >> sb >> l;
			--sa;
			--sb;
			update(sb,sb+l,sa-sb,t,0,n,1);
		}
		else{
			int p;
			cin >> p;
			--p;
			pii x=get(p,0,n,1);
			cerr << "out:";
			if (x.second==-1)
				cout << b[p] << endl;
			
			else
				cout << a[p+x.first] << endl;
		}
	}
}