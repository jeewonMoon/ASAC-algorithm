#include<iostream>
#include<algorithm>
#define pi 3.1415926535897932
using namespace std;

int main() {
	double r;
	//const double pi = acos(-1);
	cin >> r;

	cout<<fixed;	//�Ҽ��� ����
	cout.precision(6);	//6�ڸ���
	cout << r * r * pi <<"\n"<< r * r * 2 <<endl;
}