#include "random.h"

int Random(int min, int max)
{
	srand(time(NULL));
	//time(NULL) �������� ���������� ���������� ������� ������ � ������ 1970 ����, ��� ������ ������ ����� ����� ����� �������
	//srand()- ��������� ��������� ����� ������������� �����

	int x = min + rand() % (max - min + 1);

	return x;
}