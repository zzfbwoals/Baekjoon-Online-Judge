/*
�Ҽ����� ������ 5���� �Ǽ��� �Է� �޾� ���� ū ���� ȭ�鿡 ����϶�.
*/
#include <iostream>
using namespace std;

void run()
{
    double max = -DBL_MAX;
    cout << "5 ���� �Ǽ��� �Է��϶�>>";
    for(int i=0; i<5; i++)
    {
        double num;
        cin >> num;
        if(num > max)
            max = num;
    }
    cout << "���� ū �� = " << max << endl;
}

int main()
{
    run();
    return 0;
}