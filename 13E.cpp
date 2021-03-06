#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

const int MaxN=1E5+123;
int n,q,x;
int a[MaxN];
int t[MaxN],last[MaxN];

void find(int ind){
	if (ind+a[ind]>=min(ind/x*x+x,n)){
		last[ind]=ind;
		t[ind]=0;
	}
	else{
		last[ind]=last[ind+a[ind]];
		t[ind]=t[ind+a[ind]]+1;
	}
}

void find_last(int ind){
	int l=ind;
	int ted=1;
	while(true){
		ted+=t[l];
		l=last[l];
		if (l+a[l]>=n){
			printf("%d %d\n",l+1,ted);
			return;
		}
		l+=a[l];
		++ted;
	}
}

int main(){
	scanf("%d %d",&n,&q);
	x=ceil(sqrt(n));
	for (int i=0;i<n;++i)
		scanf("%d", &a[i]);
	for (int i=n-1;i>=0;--i)
		find(i);
	for (int i=0;i<q;++i){
		int h;
		scanf("%d",&h);
		int m,k;
		if (h==0){
			scanf("%d %d",&m,&k);
			--m;
			a[m]=k;
			for (int j=m;j>=m/x*x;--j)
				find(j);
		}
		if (h==1){
			scanf("%d",&m);
			--m;
			find_last(m);
		}
	}
}