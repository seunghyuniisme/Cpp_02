#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << '\n';

	char pw[10];

	while (strcmp(pw, "C++") != 0) {
		cout << "��ȣ>> ";
		cin >> pw;

		if (strcmp(pw, "C++") == 0) break;
		else cout << "��ȣ�� Ʋ���ϴ�~~" << '\n';
	}

	cout << "���α׷��� ���� �����մϴ�.";

	return 0;
}
