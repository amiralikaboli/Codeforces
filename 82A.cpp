#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int k;
	for (int i=0; ;++i)
		if (5*(1<<(i+1))-5>=n){
			k=i;
			break;
		}
	//cerr << k << " ";
	n-=5*(1<<k)-5;
	//cerr << n << endl;
	--n;
	if (n/(1<<k)==0)
		cout << "Sheldon";
	else if (n/(1<<k)==1)
		cout << "Leonard";
	else if (n/(1<<k)==2)
		cout << "Penny";
	else if (n/(1<<k)==3)
		cout << "Rajesh";
	else if (n/(1<<k)==4)
		cout << "Howard";
}