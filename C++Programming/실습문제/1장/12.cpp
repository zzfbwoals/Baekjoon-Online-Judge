/*
���� C���α׷��� C++���α׷����� �����Ͽ� �����϶�. �� ���α׷��� ���� ����� �������� 11�� ����.
*/
#include <iostream>
using namespace std;

int sum(int a, int b);

void run()
{
    int n=0;
    cout << "�� ���� �Է��ϼ���>>";
    cin >> n;
    cout << "1���� " << n << "������ ���� " << sum(1, n) << " �Դϴ�." << endl;
}

int main()
{
    run();
    return 0;
}

int sum(int a, int b)
{
    int k, res=0;
    for(k=a; k<=b; k++)
        res += k;
    return res;
}