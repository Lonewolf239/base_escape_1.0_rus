#include <iostream>
using namespace std;
void floor3(int fl3, int fr3);
int main();
void enter1(int ent1, int con1);
void cyc1(int cp1);
void cyc2(int cp2);
void cyc3(int cp3);
void liver1(int liv1) {
	int cakeislie, x;
	cout << "___________________________________________\n����� � �������� �� ������� ������� �������� ���� � ����� �������\n������� ������� �� ����� ������� ����������� ����\n�������� ������. �����������?\n�� 1\n��� 2" << endl;
	cin >> cakeislie;
	if (cakeislie == 1) {
		cout << "___________________________________________\n�� ����������� ����...� �� ��������� �������!..������ � �����-�� �������� ������������\n� ��� ����� ������� �����...\n�� ���������� ����������� ����...\n�� �������" << endl;
		cout << "___________________________________________\n������ ������: ";
		cin >> x;
		if (x == 2209) {
			cout << endl << endl << "�������� ����������..." << endl << endl;
			cout << endl << endl << "���������� ��������� �������" << endl << endl;
			enter1(1, 0);
		}
		if (x == 5296) {
			cout << endl << endl << "�������� ����������..." << endl << endl;
			cout << endl << endl << "���������� ��������� �������" << endl << endl;
			floor3(1, 0);
		}
		if (x > 0) {
			cout << endl << endl << endl;
			main();
		}
	}
	else {
		cout << "___________________________________________\n�� ������ �� ���� ��� �����, ���� ���� ��� ����...\n������� �� ����� � ������� ���� �� ���\n��� ������ ����� ����" << endl;
		cyc2(1);
	}
}
void liver2(int liv2) {
	cout << "___________________________________________\n����� ��� ������ ������ �����������..." << endl;
	cyc2(1);
}
void liver3(int liv3) {
	cout << "___________________________________________\n����� ��� ������ ������ �����������..." << endl;
	cyc3(1);
}