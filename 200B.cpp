#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int n;
	double sum=0;
	cin >> n;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		sum+=a;
	}
	cout << fixed << setprecision(12) << sum/n;
}