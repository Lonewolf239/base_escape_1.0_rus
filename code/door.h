#include <iostream>
using namespace std;
void cycle1(int cycle1);
void cycle2(int cycle2);
void cycle3(int cycle3);
void escape(int esc);
void random();
void door1(int door1) {
	random();
	if (door1 == 1) {
		cout << "___________________________________________\n� �� ���� ������� ��� �����..." << endl;
		random();
		cycle1(1);
	}
}
void door2(int doo2) {
	cout << "___________________________________________\n� �� ���� ������� ��� �����..." << endl;
	random();
	cycle2(1);
}
void door3(int doo3) {
	if (doo3 == 1) {
		random();
		cout << "___________________________________________\n�� �������� ���� � ����� � ���������... ����� �������� � � ������ ������� ���� �� ���..." << endl;
		escape(1);
	}
}