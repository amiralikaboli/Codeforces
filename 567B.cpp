#include <iostream>

using namespace std;

const int MaxN=100+10;
int a[MaxN];
char c[MaxN];
int t[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> c[i] >> a[i];
	for (int i=0;i<n;++i){
		if (c[i]=='+'){
			int ind=-1;
			for (int j=i+1;j<n;++j)
				if (c[j]=='-' && a[i]==a[j]){
					ind=j;
					break;
				}
			if (ind!=-1)
				for (int l=i;l<=ind;++l)
					++t[l];
			else if (ind==-1)
				for (int l=i;l<n;++l)
					++t[l];
		}
		else if (c[i]=='-'){
			int ind=-1;
			for (int j=i-1;j>=0;--j)
				if (c[j]=='+' && a[i]==a[j]){
					ind=j;
					break;
				}
			if (ind!=-1)
				for (int l=i;l<=ind;++l)
					++t[l];
			else if (ind==-1)
				for (int l=0;l<=i;++l)
					++t[l];
		}
	}
	int mx=-1;
	for (int i=0;i<n;++i)
		mx=max(mx,t[i]);
	cout << mx;
}