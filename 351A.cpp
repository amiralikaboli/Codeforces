#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const int Max=1E4+10;
const int INF=1E9+10;
int cnt=0;
double num;
double sum,ans=INF;
double intpart,fractpart;

int main (){
	int n;
	cin >> n;
	for (int i=0;i<2*n;++i){
		cin >> num;
		fractpart=modf(num,&intpart);
		sum+=fractpart;
		if (fractpart==0)
			++cnt;
	}
	for (int i=0;i<=min(n,cnt);++i)
		ans=min(ans,abs(n-i-sum));
	cout << fixed << setprecision(3) << ans;
}