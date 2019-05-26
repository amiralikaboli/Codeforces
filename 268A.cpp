#include <iostream>

using namespace std;

int home[50],away[50];

int main (){
	int n;
	cin >> n;
	int ans=0;
	for (int i=0;i<n;++i)
		cin >> home[i] >> away[i];
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			if (home[i]==away[j])
				++ans;
	cout << ans;
}