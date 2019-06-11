#include <iostream>

using namespace std;

int a[111],b[111],sum,suma,sumb;

int main(){
	bool cck=false;
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i] >> b[i];
		if ((a[i]%2 && b[i]%2==0) || (a[i]%2==0 && b[i]%2))
			cck=true;
		suma+=a[i];
		sumb+=b[i];
		sum+=a[i]+b[i];
	}
	if (n==1 && (a[0]%2!=0 || b[0]%2!=0)){
		cout << -1;
		return 0;
	}
	if (sum%2){
		cout << -1;
		return 0;
	}
	if (suma%2 && cck==true){
		cout << 1;
		return 0;
	}
	if (suma%2==0 && sumb%2==0){
		cout << 0;
		return 0;
	}
	if (cck==false)
		cout << -1;
}