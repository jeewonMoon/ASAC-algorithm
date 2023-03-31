#include<iostream>
#include<algorithm>
#define pi 3.1415926535897932
using namespace std;

int main() {
	double r;
	//const double pi = acos(-1);
	cin >> r;

	cout<<fixed;	//소수점 고정
	cout.precision(6);	//6자리로
	cout << r * r * pi <<"\n"<< r * r * 2 <<endl;
}