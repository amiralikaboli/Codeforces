#include <iostream>

using namespace std;

string s[10];
int sum_white=0,sum_black=0;

int main(){
	for (int i=0;i<8;++i){
		cin >> s[i];
		for (int j=0;j<8;++j)
			if (s[i][j]=='Q')
				sum_white+=9;
			else if (s[i][j]=='R')
				sum_white+=5;
			else if (s[i][j]=='B')
				sum_white+=3;
			else if (s[i][j]=='N')
				sum_white+=3;
			else if (s[i][j]=='P')
				sum_white+=1;
			else if (s[i][j]=='q')
				sum_black+=9;
			else if (s[i][j]=='r')
				sum_black+=5;
			else if (s[i][j]=='b')
				sum_black+=3;
			else if (s[i][j]=='n')
				sum_black+=3;
			else if (s[i][j]=='p')
				sum_black+=1;
	}
	if (sum_white>sum_black)
		cout << "White";
	else if (sum_black>sum_white)
		cout << "Black";
	else
		cout << "Draw";
}