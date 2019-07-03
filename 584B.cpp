#include <iostream>

using namespace std;

const int MaxN=1E5+10;
const long long INF=1000*1000*1000+7;
long long tavan_seven[MaxN],tavan_three[MaxN];

int ghadr(int x){
	if (x<0)
		return x+INF;
	else
		return x;
}

int main(){
	int n;
	cin >> n;
	tavan_three[0]=tavan_seven[0]=1;
	for (int i=1;i<=n;++i){
		tavan_three[i]=tavan_three[i-1]*27;
		tavan_three[i]%=INF;
		tavan_seven[i]=tavan_seven[i-1]*7;
		tavan_seven[i]%=INF;
	}
	cout << ghadr(tavan_three[n]-tavan_seven[n]);
}