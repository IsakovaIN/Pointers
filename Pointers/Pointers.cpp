#include<iostream>

//�������� � ���������.


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//��������� � ����������
	/*n = 7;
	std::cout << "����� n = " << &n << std::endl;//(& ���������)�������� ��������� � ������ ����������

	//��������/���������� ���������
	int* pn;//Pointers - ���������, ������� pn. ������ ����� ��������� p � ���������.
	//���������� ��������� �� ������ ���� int
	pn = &n; //������������ ��������� �n ������ ���������� n

	std::cout << "pn = " << pn << std::endl;//����� �������� ���������

	std::cout << "*pn = " << *pn << std::endl;//�������������, ��������� �������� ���������� ����� ������������� ���������
	std::cout << "n = " << n << std::endl;

	*pn = 15;//������ �������� ���������� � ������� ������������� ���������
	std::cout << "������ ����������...\n";
	std::cout << "n = " << n << std::endl;

	m = 24;
	std::cout << "\n����� m = " << &m << std::endl;
	pn = &m; //��������������� ��������� �� ������ ������� ������
	std::cout << "pn = " << pn << std::endl;
	std::cout << "*pn = " << *pn << std::endl;//24
	*pn = 28;
	std::cout << "������ ����������...\n";
	std::cout << "m = " << m << std::endl;//28

	int* pm = &m; //�������� ��� ������ ��������� �� ���������� m
	std::cout << "pm = " << pm << std::endl;*/

	//��������� � �������
	const int size = 5;
	int arr[size]{ 22, 33, 44, 55, 66 };
	// ������       0   1   2   3   4
	int* parr = &arr[2];
	std::cout << "*parr = " << *parr << std::endl;

	std::cout << *(parr + 1) << std::endl;// ��������� �������� � �������� 3 � �������
	//���������� ����������
	parr++;//��������������� ��������� �� ��������� �������
	std::cout << "*parr = " << *parr << std::endl;

	parr -= 3; // ��������������� ��������� �� 3 �������� ������ ����� �� ��� 
	//�������� �����������
	std::cout << "*parr = " << *parr << std::endl;

	std::cout << "����� ������� � �������������� ��������� parr:\n";
	for (int i = 0; i < size; i++)
		std::cout << *(parr + i) << ' ';
	std::cout << std::endl;

	std::cout << *arr << std::endl; //22
	//arr[0] => *(arr + 0); ��� �������� �����
	std::cout << "arr[1] = " << *(arr + 1) << std::endl;//33

	//arr = &n; //������, �� arr - ��� ����������� ���������, 
	// �.�. �� �� ����� ���� �������������
	//�� ������ ������� ������
	// parr ����� �������������
	
	return 0;
}