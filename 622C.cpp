#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E5+10;
int a[MaxN];
int nqa[MaxN];

int main(){
	int n,q;
	scanf("%d %d",&n,&q);
	for (int i=0;i<n;++i)
		scanf("%d",&a[i]);
	fill(nqa,nqa+MaxN,-1);
	for (int i=n-2;i>=0;--i)
		if (a[i]==a[i+1])
			nqa[i]=nqa[i+1];
		else
			nqa[i]=i+1;
	for (int i=0;i<q;++i){
		int l,r,x;
		scanf("%d %d %d",&l,&r,&x);
		--l;
		--r;
		if (a[l]!=x)
			printf("%d\n",l+1);
		else if (nqa[l]!=-1 && nqa[l]<=r)
			printf("%d\n",nqa[l]+1);
		else
			printf("%d\n",-1);
	}
}