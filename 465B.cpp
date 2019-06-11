#include <iostream>

using namespace std;

const int MaxN=1E3+10;
bool b[MaxN];

int main(){
	int n;
	cin >> n;
	int ones=0;
	for (int i=0;i<n;++i){
		cin >> b[i];
		ones+=b[i];
	}
	int t=0;
	if (b[0]==true)
		++t;
	for (int i=1;i<n;++i)
		if (b[i]==true && b[i-1]==false)
			++t;
	if (ones==0){
		cout << 0;
		return 0;
	}
	cout << ones+t-1;
}