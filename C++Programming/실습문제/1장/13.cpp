/*
�߽Ĵ��� �ֹ� ������ c++���α׷����� �ۼ��غ���.
���� ���� ����� ���� �޴��� ��� ���� �Է¹ް� �̸� ����ϸ� �ȴ�.
�߸��� �Է��� �������� �κе� �ڵ忡 �߰��϶�.
*/
#include <iostream>
using namespace std;

void run()
{
    cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;
    while (1)
    {
        int menu, size;
        cout << "«��:1, ¥��:2, ������:3, ����:4>>";
        cin >> menu;

        if (menu == 4)
        {
            cout << "���� ������ �������ϴ�." << endl;
            break;
        }

        if (menu < 1 || menu > 4)
        {
            cout << "�ٽ� �ֹ��ϼ���!!" << endl;
            continue;
        }

        cout << "���κ�?";
        cin >> size;

        switch (menu)
        {
        case 1:
            cout << "«�� " << size << "�κ� ���Խ��ϴ�" << endl;
            break;
        case 2:
            cout << "¥�� " << size << "�κ� ���Խ��ϴ�" << endl;
            break;
        case 3:
            cout << "������ " << size << "�κ� ���Խ��ϴ�" << endl;
            break;
        }
    }
}

int main()
{
    run();
    return 0;
}