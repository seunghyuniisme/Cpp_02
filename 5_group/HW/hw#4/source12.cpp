#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Ingredients {
protected:
	string name;
	int amount;
public:
	string getName() {
		return name;
	}
	int getAmount() {
		return amount;
	}
	void setAmount(int amount) {
		this->amount = amount;
	}
	bool subAmount(int amount) {
		if (this->amount <= 0) {
			return false;
		}
		else
			this->amount -= amount;
		return true;
	}
};

class Coffee : public Ingredients {
public:
	Coffee() {
		name = "Coffee";
		amount = 3;
	}
};

class Sugar :public Ingredients {
public:
	Sugar() {
		name = "Sugar";
		amount = 3;
	}
};

class Cream : public Ingredients {
public:
	Cream() {
		name = "CREAM";
		amount = 3;
	}
};

class Water : public Ingredients {
public:
	Water() {
		name = "Water";
		amount = 3;
	}
};

class Cup : public Ingredients {
public:
	Cup() {
		name = "Cup";
		amount = 3;
	}
};

class CoffeeMachine {
	Ingredients* ingr[];
public:
	CoffeeMachine() {
		cout << "-----명품 커피 자판기켭니다.-----" << endl;
		ingr[0] = new Coffee();
		ingr[1] = new Sugar();
		ingr[2] = new Cream();
		ingr[3] = new Water();
		ingr[4] = new Cup();

		showCoffeeMachineState();

		cout << endl;
	}

	void showCoffeeMachineState() {
		for (int i = 0; i < 5; i++) {
			cout << setw(10) << ingr[i]->getName();
			for (int j = 0; j < ingr[i]->getAmount(); j++) {
				cout << "*";
			}
			cout << endl;
		}
	}

	void start() {
		int num;
		while (true) {
			showMenu();
			num = selectMenu();

			if (num == 3) {
				for (int i = 0; i < 5; i++) {
					ingr[i]->setAmount(3);
				}

				cout << "모든 통을 채웁니다.~~" << endl;
				showCoffeeMachineState();
				cout << endl;
				continue;
			}
			else if (num == 4) {
				cout << "프로그램을 종료합니다.~~" << endl;
				exit(0);
			}

			//시작
			switch (num)
			{
			case 0:
				if (ingr[2]->subAmount(1) == false) {
					cout << "재료가 부족합니다.~~" << endl;
					showCoffeeMachineState();
					continue;
				}
				cout << "맛있는 보통 커피 나왔습니다.~~" << endl;
				showCoffeeMachineState();
				break;

			case 1:
				if (ingr[2]->subAmount(1) == false) {
					cout << "재료가 부족합니다.~~" << endl;
					showCoffeeMachineState();
					continue;
				}
				cout << "맛있는 설탕 커피 나왔습니다.~~" << endl;
				showCoffeeMachineState();
				break;

			case 2:
				if (ingr[2]->subAmount(1) == false) {
					cout << "재료가 부족합니다.~~" << endl;
					showCoffeeMachineState();
					continue;
				}
				cout << "맛있는 블랙 커피 나왔습니다.~~" << endl;
				showCoffeeMachineState();
				break;

			default:
				cout << "잘못 입력 하셨습니다.~~" << endl;
				break;
			}
		}
	}

	void showMenu() {
		cout << "보통 커피:0, 설탕 커피:1, 블랙 커피:2, 채우기:3, 종료:4>>";
	}

	int selectMenu() {
		int num;
		cin >> num;

		return num;
	}
};


int main() {
	cout.setf(ios::left);
	CoffeeMachine cm;
	cm.start();
}