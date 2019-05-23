#include <iostream>

using namespace std;

int a,b,c;
int tavan[20];

int change(int n){
	int ind=0;
	int x=n;
	int ans=0;
	while (x!=0){
		if (x%10!=0){
			ans+=(x%10)*tavan[ind];
			++ind;
		}
		x/=10;
	}
	return ans;
}

int main (){
	tavan[0]=1;
	for (int i=1;i<10;++i)
		tavan[i]=tavan[i-1]*10;
	cin >> a >> b;
	c=a+b;
	if (change(a)+change(b)==change(c))
		cout << "YES";
	else
		cout << "NO";
}