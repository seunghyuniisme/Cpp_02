#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"

class UI {
	static int n;
public:
	static void start();
	static int insert();
	static int del();
	static int menu();
};

int UI::n = 0;

void UI::start() {
	cout << "�׷��� �������Դϴ�." << endl;
}

int UI::menu() {
	cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
	cin >> n;
	return n;
}

int UI::insert() {
	cout << "��:1, ��:2, �簢��:3 >> ";
	cin >> n;
	return n;
}

int UI::del() {
	cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
	cin >> n;
	return n;
}

class GraphicEditor {
	vector<Shape*> v;
	vector<Shape*>::iterator it;
public:
	GraphicEditor() {}
	void insert() {
		int n = UI::insert();

		//����
		if (n == 1)
			v.push_back(new Line());

		//��
		else if (n == 2)
			v.push_back(new Circle());

		//�簢��
		else if (n == 3)
			v.push_back(new Rect());

		//����
		else
			cout << "�Է� ����" << endl;
	}

	void deleteShape() {
		int n = UI::del();
		Shape* del;
		it = v.begin();

		for (int i = 0; i < n; ++i)
			++i;

		del = *it;
		it = v.erase(it);

		delete del;
	}

	void showAll() {
		for (int i = 0; i < v.size(); ++i) {
			cout << i << ": ";
			v[i]->paint();
		}
	}

	void start() {
		UI::start();
		for (;;) {
			int m = UI::menu();

			//����
			if (m == 1)
				insert();
			
			//����
			else if (m == 2)
				deleteShape();

			//��� ����
			else if (m == 3)
				showAll();

			//����
			else if (m == 4)
				break;

			//����
			else
				cout << "�Է� ����" << endl;
		}
	}
};

int main() {
	GraphicEditor* graphic = new GraphicEditor;
	graphic->start();
	delete graphic;
}