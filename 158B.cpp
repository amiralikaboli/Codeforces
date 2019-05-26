#include <iostream>
#include <algorithm>
using namespace std;
int s[1000*100+10],t[10];
int main (){
	int n,sum=0;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> s[i];
		++t[s[i]];
	}
	sum+=t[4];
	sum+=t[3];
	if (t[1]>=t[3])
		t[1]-=t[3];
	else 
		t[1]=0;
	sum+=(t[2]/2);
	if (t[2]%2==1){
		++sum;
		if (t[1]>0 && t[1]<=2)
			t[1]=0;
		else
			t[1]-=2;
	}
	sum+=((t[1]+3)/4);
	cout << sum << endl;
	return 0;
}
