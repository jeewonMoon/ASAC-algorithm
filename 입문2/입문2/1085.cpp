#include<iostream>
using namespace std;

int main() {
	int x, y, w, h;
	int resultx = 0, resulty = 0;

	cin >> x >> y >> w >> h;

	if (x < w - x) resultx = x;
	else resultx = w - x;
	if (y < h - y) resulty = y;
	else resulty = h - y;
	
	cout << min(resultx, resulty) << endl;
	return 0;
}