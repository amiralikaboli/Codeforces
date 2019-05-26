#include <bits/stdc++.h>

using namespace std;

int n,sum;
int a[10];

int fact(int n){
	if (n==0)
		return 1;
	return n*fact(n-1);
}

bool check(){
	if(n==1)
		return true;
	if(n==2){
		if(a[0]+a[1]!=sum)
			return false;
		if(a[2]+a[3]!=sum)
			return false;
		if(a[0]+a[2]!=sum)
			return false;
		if(a[1]+a[3]!=sum)
			return false;
		if(a[0]+a[3]!=sum)
			return false;
		if(a[2]+a[1]!=sum)
			return false;
		return true;
	}
	if (n==3){
		if(a[0]+a[1]+a[2]!=sum)
			return false;
		if(a[3]+a[4]+a[5]!=sum)
			return false;
		if(a[6]+a[7]+a[8]!=sum)
			return false;
		if(a[0]+a[3]+a[6]!=sum)
			return false;
		if(a[1]+a[4]+a[7]!=sum)
			return false;
		if(a[2]+a[5]+a[8]!=sum)
			return false;
		if(a[0]+a[4]+a[8]!=sum)
			return false;
		if(a[2]+a[4]+a[6]!=sum)
			return false;
		return true;
	}
}

int main(){
	cin >> n;
	for(int i=0;i<n*n;++i){
		cin >> a[i];
		sum+=a[i];
	}
	sum/=n;
	sort(a,a+n*n);
	for (int t=0;t<fact(n*n);++t){
		if(check()){
			cout << sum << endl;
			for(int i=0;i<n;++i){
				for(int j=0;j<n;++j)
					cout << a[i*n+j] << " ";
				cout << endl;
			}
			return 0;
		}
		next_permutation(a,a+n*n);
	}
}