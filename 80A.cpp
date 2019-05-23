#include <iostream>
#include <vector> 

using namespace std;

vector <int> v;

bool check_prime(int n){
	if (n==1)
		return false;
	for (int i=2;i*i<=n;++i)
		if (n%i==0)
			return false;
	return true;
}

void find_prime(){
	for (int i=2;i<50;++i)
		if (check_prime(i)==true)
			v.push_back(i);
}

int main(){
	int a,b;
	cin >> a >> b;
	find_prime();
	if (check_prime(a)!=true || check_prime(b)!=true){
		cout << "NO";
		return 0;
	}
	for (int i=0;i<v.size()-1;++i)
		if (a==v[i] && b==v[i+1]){
			cout << "YES";
			return 0;
		}
	cout << "NO";
}