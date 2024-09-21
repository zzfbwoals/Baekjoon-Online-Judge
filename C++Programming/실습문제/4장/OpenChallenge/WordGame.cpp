#include "WordGame.h"
#include "Player.h"
#include <iostream>
using namespace std;

void WordGame::run()
{
	cout << "���� �ձ� ������ �����մϴ�" << endl << "���ӿ� �����ϴ� �ο��� ����Դϱ�?";
	int num;
	cin >> num;
	// �÷��̾� ����
	Player* p = new Player[num];
	for (int i = 0; i < num; i++)
	{
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ ����>>";
		string name;
		cin >> name;
		(p + i)->setName(name);
	}
	// �����ձ� ����
	cout << "�����ϴ� �ܾ�� �ƹ����Դϴ�" << endl;
	string a = "�ƹ���";
	string b;
	while (true)
	{
		bool end = false; // Ʋ�ȳ� ��Ʋ�ȳ�
		for (int i = 0; i < num; i++)
		{
			cout << (p + i)->getName() << ">>";
			cin >> b;
			int aSize = a.size();
			if (a.at(aSize - 2) == b.at(0) && a.at(aSize - 1) == b.at(1)) // �����ձ� ����
			{
				a = b;
			}
			else // �����ձ� ����
			{
				cout << "����!!" << endl << "������ �����մϴ� ..." << endl;
				end = true;
				break;
			}
		}
		if (end)
			break;
	}
}