/*
<Enter> Ű�� �Էµ� ������ ���ڵ��� �а�, �Էµ� ���� 'x'�� ������ ȭ�鿡 ����϶�.
*/
#include <iostream>
#include <cstring>
using namespace std;

void run()
{
    cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
    char str[100];
    int count = 0;
    cin.getline(str, 100, '\n');
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='x')
            count ++;
    }
    cout << "x�� ������ " << count << endl;
}

int main()
{
    run();
    return 0;
}