/*
Ŀ�Ǹ� �ֹ��ϴ� ������ C++ ���α׷��� �ۼ��غ���.
Ŀ�� ������ ����������, �Ƹ�Ű���, īǪġ���� 3��������
������ 2000��, 2300��, 2500���̴�.
�Ϸ翡 20000�� �̻� ���� �Ǹ� ī�並 �ݴ´�.
���� ����� ���� �۵��ϴ� ���α׷��� �ۼ��϶�.
*/
#define MAX_SIZE 100
#include <iostream>
#include <cstring>
using namespace std;

bool checkInputError()
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(MAX_SIZE, '\n');
		cout << "�Է� ����" << endl;
		return true; // ���� ����
	}
	else
		return false; // ���� ����
}

void run()
{
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
	int sum = 0;
	while (sum < 20000)
	{
		cout << "�ֹ�>> ";
		char coffee[MAX_SIZE];
		int count;
		cin >> coffee >> count;
		if (checkInputError())
			continue;
		if (strcmp(coffee, "����������") == 0)
		{
			sum += 2000 * count;
			cout << 2000 * count << "���Դϴ�. ���ְ� �弼��" << endl;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0)
		{
			sum += 2300 * count;
			cout << 2300 * count << "���Դϴ�. ���ְ� �弼��" << endl;
		}
		else if (strcmp(coffee, "īǪġ��") == 0)
		{
			sum += 2500 * count;
			cout << 2500 * count << "���Դϴ�. ���ְ� �弼��" << endl;
		}
	}
	cout << "���� " << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;
}

int main()
{
	run();
	return 0;
}