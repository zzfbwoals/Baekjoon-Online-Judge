/*
���� C���α׷��� C++���α׷����� �����Ͽ� �����϶�.
*/
#include <iostream>
using namespace std;

void run()
{
    int k, n=0;
    int sum=0;
    cout << "�� ���� �Է��ϼ���>>";
    cin >> n;
    for(k=1; k<=n; k++)
        sum += k;
    cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�." << endl;
}

int main()
{
    run();
    return 0;
}