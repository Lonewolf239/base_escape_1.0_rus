#include <iostream>
using namespace std;
void cycle1(int cycle1);
void cycle2(int cycle2);
void cycle3(int cycle3);
void random();
void random2();
void close1(int cl1) {
	int x, y;
	if (cl1 == 1) {
		cout << "___________________________________________\n�� ������� ������� ����... �� ����\n������� ������ ���� 1\n���� 2" << endl;
		cin >> x;
		if (x == 1) {
			random();
			close1(2);
		}
		else {
			random2();
			cycle1(1);
		}
	}
	if(cl1==2) {
		cout << "___________________________________________\n�� ������� ������ ����... ��� ���\n����� ��� 1\n���� 2" << endl;
		cin >> y;
		random();
		random2();
		if (y == 1) {
			cout << "___________________________________________\n�� ����� ���..." << endl;
			cycle2(1);
			random();
		}
		else {
			random2();
			cycle1(1);
		}
	}
}
void close2(int cl2) {
	int x, y;
	if (cl2 == 1) {
		cout << "___________________________________________\n�� ������� ������� ����... �� ����\n������� ������ ���� 1\n���� 2" << endl;
		cin >> x;
		if (x == 1) {
			close2(2);
		}
		else {
			random2();
			cycle2(1);
		}
	}
	if (cl2 == 2) {
		cout << "___________________________________________\n�� ������� ������ ����... �� ����\n���� 1" << endl;
		cin >> y;
		random();
		random2();
	}
	if (y == 1) {
		random();
		cycle2(1);
	}
}
void close3(int cl3) {
	int x, y;
	if (cl3 == 1) {
		cout << "___________________________________________\n�� ������� ������� ����... �� ����\n������� ������ ���� 1\n���� 2" << endl;
		cin >> x;
		if (x == 1) {
			close3(2);
		}
		else {
			cycle3(1);
		}
	}
	if (cl3 == 2) {
		cout << "___________________________________________\n�� ������� ������ ����... �� ����\n���� 1" << endl;
		cin >> y;
		random();
		random2();
	}
	if (y == 1) {
		cycle3(1);
	}
}