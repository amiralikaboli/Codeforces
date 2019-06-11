#include <iostream>

using namespace std;

int main (){
	int n,m;
	cin >> n >> m;
	int ans=n;
	for (int i=1; ;++i){
		if (i%m==0)
			++ans;
		--ans;
		if (ans==0){
			cout << i;
			return 0;
		}
	}
}