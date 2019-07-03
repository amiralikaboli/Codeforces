#include <iostream>

using namespace std;

const int MaxN=1000+10;
bool mark[MaxN];
int a[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int t=0;
	for (int i=0; ;++i){
		if (i%2==0){
			for (int j=0;j<n;++j)
				if (t>=a[j] && mark[j]==false){
					++t;
					mark[j]=true;
				}
			if (t==n){
				cout << i;
				return 0;
			}
		}
		else if (i%2==1){
			for (int j=n-1;j>=0;--j)
				if (t>=a[j] && mark[j]==false){
					++t;
					mark[j]=true;
				}
			if (t==n){
				cout << i;
				return 0;
			}
		}
	}
}