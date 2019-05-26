#include <iostream>
#include <vector>

using namespace std;

bool upper[222],lower[222],l[222],r[222];
int x[222],y[222];

int main (){
	int n,ans=0;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> x[i] >> y[i];
	}
	for (int i=0;i<n;++i){
		for (int j=0;j<n;++j){
			if (y[i]==y[j] && x[i]>x[j])
				l[i]=true;
			if (y[i]==y[j] && x[i]<x[j])
				r[i]=true;
			if (x[i]==x[j] && y[i]>y[j])
				lower[i]=true;
			if (x[i]==x[j] && y[i]<y[j])
				upper[i]=true;
		}
		ans+=upper[i]*lower[i]*l[i]*r[i];
	}
	cout << ans;
}