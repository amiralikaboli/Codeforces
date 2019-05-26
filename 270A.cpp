#include <iostream>

using namespace std;

int a[200];
double deg[1111];

int main (){
	for (double i=1;i<1000;++i)
		deg[int(i)]=(i*180)/(i+2);
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int i=0;i<n;++i){
		bool b=false;
		for (int j=1;j<1000;++j)
			if (deg[j]==a[i])
				b=true;
		if (b==true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}