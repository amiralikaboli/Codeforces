#include <iostream>
#include <vector>

using namespace std;

vector <int> digit;

bool check(int n){
	int x=n;
	digit.clear();
	while (x!=0){
		digit.push_back(x%10);
		x/=10;
	}
	for (int i=0;i<digit.size()-1;++i)
		for (int j=i+1;j<digit.size();++j)
			if (digit[i]==digit[j])
				return false;
	return true;
}

int main (){
	int y;
	cin >> y;
	for (int i=y+1;i<=10*1000;++i)
		if (check(i)==true){
			cout << i;
			return 0;
		}
}