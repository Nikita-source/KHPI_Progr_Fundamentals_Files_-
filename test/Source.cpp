// ������ 233. 
// ������� �. �. - CC+ � ������� �  �������� 3-� ������� -2019.pdf
// �������� ���������, ������� ������� �� ����� ����
// numbers.txt � ���������� � ���� 5 ����� �����, ��������� 
// ������������� � ����������.�������� ��������� ���������� ���� �
// ���������, ��� ������ ����� ��������� � ��������� ������.

// ���������� �������� _CRT_SECURE_NO_WARNINGS � �������� �������
// ��� #define _CRT_SECURE_NO_WARNINGS

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

#define FIWIE "d:\\temp\\numbers.txt\0"
#define N 5 // ���������� �����
// ������� �� ����� ���� � ���������� � ����
// ����� �����, ��������� �������������
void main()
{
	setlocale(LC_ALL, "Russian");

	char fname[40] = FIWIE;
	FILE* f; // ���� �����
	int n; // �����
	puts("\n�������� �����");
	printf("��������� ����� ����� �������� � ���� %s\n",
		fname);
	puts("����� ����� ������� ����� ��������� <Enter>\n");
	// ������� ���� � ������ ������ (w) ������ (t)
	// ���� ���� � ����� ������ ��� ����, �� �����
	// ������ ����� �������� ������ ������
	// ��� ���������� � ����� ����� �����������
	// ����� ���������� (�)
	if ((f = fopen(fname, "wt")) == NULL)
	{
		printf("������ �������� ����� ��� ������");
		_getch();
		return;
	}
	for (int i = 0; i < N; i++)
	{
		printf("->");
		scanf("%i", &n);
		fprintf(f, "%i\n", n);
	}
	fclose(f); // ������� ����
	printf("��������� ����� �������� � ���� %s\n", fname);
	puts("\n��� ���������� ������� <Enter>");
	_getch();
}