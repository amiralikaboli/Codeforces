#include <bits/stdc++.h>

using namespace std;

const int MaxN=30+10;
int minTime[MaxN],maxTime[MaxN];
int t[MaxN];

int main(){
	int d,sum;
	cin >> d >> sum;
	for (int i=0;i<d;++i){
		cin >> minTime[i] >> maxTime[i];
		sum-=minTime[i];
		if (sum<0){
			cout << "NO";
			return 0;
		}
	}
	for (int i=0;i<d;++i){
		t[i]+=min(sum,maxTime[i]-minTime[i])+minTime[i];
		sum-=min(sum,maxTime[i]-minTime[i]);
	}
	if (sum>0){
		cout << "NO";
		return 0;
	}
	cout << "YES\n";
	for (int i=0;i<d;++i)
		cout << t[i] << " ";
}