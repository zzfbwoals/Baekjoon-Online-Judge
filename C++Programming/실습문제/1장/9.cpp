/*
�̸�, �ּ�, ���̸� �Է¹޾� �ٽ� ����ϴ� ���α׷��� �ۼ��϶�.
*/
#include <iostream>
#include <string>
using namespace std;

void run()
{
    char name[100], address[100];
    int age;
    cout << "�̸���?";
    cin.getline(name, 100, '\n');
    cout << "�ּ�?";
    cin.getline(address, 100, '\n');
    cout << "���̴�?";
    cin >> age;
    cout << name << ", " << address << ", " << age << "��" << endl;
}

int main()
{
    run();
    return 0;
}