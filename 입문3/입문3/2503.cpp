#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, s, b, cnt = 0;
	string num;
	bool arr[1000] = { false };
	cin >> n;

	for (int i = 123; i <= 987; i++) {
		string tmp = to_string(i);
		if (tmp[0] == tmp[1] || tmp[1] == tmp[2] || tmp[0] == tmp[2])	//�ߺ��Ǵ� ����
			arr[i] = true;
		if (tmp.find('0') != string::npos) arr[i] = true;	//���ڿ� 0 ����
	}
	
	for (int i = 0; i < n; i++) {
		cin >> num >> s >> b;

		for (int j = 123; j <= 987; j++) {
			int cnts = 0, cntb = 0;
			string tmp = to_string(j);
			if (!arr[j]) {
				for (int p = 0; p < 3; p++) {
					for (int q = 0; q < 3; q++) {
						if (num[p] == tmp[q] && p == q) {	//�ڸ�==, ����==
							cnts++;
							continue;
						}
						if (num[p] == tmp[q] && p != q) {	//�ڸ�!=, ����==
							cntb++;
							continue;
						}
					}
				}
				if (s != cnts || b != cntb) arr[j] = true;
			}
		}
	}

	for (int i = 123; i <= 987; i++) {
		if (!arr[i]) cnt++;
	}
	cout << cnt << "\n";

	return 0;
}