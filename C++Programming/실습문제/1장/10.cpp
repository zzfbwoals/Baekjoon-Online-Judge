/*
���ڿ��� �ϳ� �Է¹ް� ���ڿ��� �κ� ���ڿ��� ������ ���� ����ϴ� ���α׷��� �ۼ��϶�.
*/
#include <iostream>
#include <cstring> // strlen �Լ��� ����ϱ� ���� �߰�
#include <string>
using namespace std;

void run()
{
    char str[100];
    cout << "���ڿ� �Է�>>";
    cin.getline(str, 100); // ������ ������ ���ڿ� �Է¹ޱ�
    for(int i=0; i<strlen(str); i++)
    {
        for(int j=0; j<=i; j++) // j<i+1 ��� j<=i ���
            cout << str[j];
        cout << endl;
    }
}

int main()
{
    run();
    return 0;
}