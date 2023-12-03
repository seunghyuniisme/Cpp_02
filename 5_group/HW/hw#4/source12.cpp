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
		cout << "-----��ǰ Ŀ�� ���Ǳ��մϴ�.-----" << endl;
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

				cout << "��� ���� ä��ϴ�.~~" << endl;
				showCoffeeMachineState();
				cout << endl;
				continue;
			}
			else if (num == 4) {
				cout << "���α׷��� �����մϴ�.~~" << endl;
				exit(0);
			}

			//����
			switch (num)
			{
			case 0:
				if (ingr[2]->subAmount(1) == false) {
					cout << "��ᰡ �����մϴ�.~~" << endl;
					showCoffeeMachineState();
					continue;
				}
				cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�.~~" << endl;
				showCoffeeMachineState();
				break;

			case 1:
				if (ingr[2]->subAmount(1) == false) {
					cout << "��ᰡ �����մϴ�.~~" << endl;
					showCoffeeMachineState();
					continue;
				}
				cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�.~~" << endl;
				showCoffeeMachineState();
				break;

			case 2:
				if (ingr[2]->subAmount(1) == false) {
					cout << "��ᰡ �����մϴ�.~~" << endl;
					showCoffeeMachineState();
					continue;
				}
				cout << "���ִ� �� Ŀ�� ���Խ��ϴ�.~~" << endl;
				showCoffeeMachineState();
				break;

			default:
				cout << "�߸� �Է� �ϼ̽��ϴ�.~~" << endl;
				break;
			}
		}
	}

	void showMenu() {
		cout << "���� Ŀ��:0, ���� Ŀ��:1, �� Ŀ��:2, ä���:3, ����:4>>";
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