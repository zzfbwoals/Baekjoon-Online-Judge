/*
������ ���� "yes"�� �Էµ� ������ �������� �ʴ� ���α׷��� �ۼ��϶�.
����ڷκ����� �Է��� cin.getline() �Լ��� ����϶�.
*/
#include <iostream>
using namespace std;

void run()
{
    while(1)
    {
        string str;
        cout << "�����ϰ������ yes�� �Է��ϼ���>>";
        cin >> str;
        if(str=="yes")
            break;
    }
    cout << "�����մϴ�..." << endl;
}

int main()
{
    run();
    return 0;
}