#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "프로그램을 종료하려면 암호를 입력하세요." << '\n';

	char pw[10];

	while (strcmp(pw, "C++") != 0) {
		cout << "암호>> ";
		cin >> pw;

		if (strcmp(pw, "C++") == 0) break;
		else cout << "암호가 틀립니다~~" << '\n';
	}

	cout << "프로그램을 정상 종료합니다.";

	return 0;
}
