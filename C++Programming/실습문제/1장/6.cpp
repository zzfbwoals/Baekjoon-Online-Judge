/*
���ڿ��� �� �� �Է¹ް� �� ���� ���ڿ��� ������ �˻��ϴ� ���α׷��� �ۼ��϶�. ���� ������ "�����ϴ�", �ƴϸ� "���� �ʽ��ϴ�"�� ����϶�.
*/
#include <iostream>
#include <string>
using namespace std;

void run()
{
    string a, b;
    cout << "�� ��ȣ�� �Է��ϼ���>>";
    cin >> a;
    cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
    cin >> b;
    if(a == b)
        cout << "�����ϴ�" << endl;
    else
        cout << "���� �ʽ��ϴ�" << endl;
}

int main()
{
    run();
    return 0;
}