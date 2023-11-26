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
	cout << "그래픽 에디터입니다." << endl;
}

int UI::menu() {
	cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
	cin >> n;
	return n;
}

int UI::insert() {
	cout << "선:1, 원:2, 사각형:3 >> ";
	cin >> n;
	return n;
}

int UI::del() {
	cout << "삭제하고자 하는 도형의 인덱스 >> ";
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

		//라인
		if (n == 1)
			v.push_back(new Line());

		//원
		else if (n == 2)
			v.push_back(new Circle());

		//사각형
		else if (n == 3)
			v.push_back(new Rect());

		//예외
		else
			cout << "입력 에러" << endl;
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

			//삽입
			if (m == 1)
				insert();
			
			//삭제
			else if (m == 2)
				deleteShape();

			//모두 보기
			else if (m == 3)
				showAll();

			//종료
			else if (m == 4)
				break;

			//예외
			else
				cout << "입력 에러" << endl;
		}
	}
};

int main() {
	GraphicEditor* graphic = new GraphicEditor;
	graphic->start();
	delete graphic;
}