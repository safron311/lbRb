#include <iostream>
#include <bitset>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int x;
	cout << "������� ����� �����: ";
	cin >> x;
	cout << "�����: " << bitset<16>(x) << '\n';
	for (unsigned short i = 0; i < 16; i ++) {//�������� ����� ��� ������� ����
		if ((x & (3 << i)) == (1 << (i+1)))//�������� � ������� �����
			x = (x | (3 << i));
	}
	cout << "����� �����: " << bitset<16>(x) << '\n';
	return 0;
}