#include <iostream>
using namespace std;

#include "UI.h"

int UI::getMenu() {
	int key;
	cout << "����:1, ����:2, ��κ���:3, ����:4 >>";
	cin >> key;
	return key;
}
int UI::getShapeTypeToInsert() {
	int key;
	cout << "��:1, ��:2, �簢��:3 >>";
	cin >> key;
	return key;
}
int UI::getShapeIndexToDelete() {
	int key;
	cout << "�����ϰ��� �ϴ� ������ �ε��� >>";
	cin >> key;
	return key;
}