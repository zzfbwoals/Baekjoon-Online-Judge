#include <iostream>
#include "EvenRandom.h"
using namespace std;

int main()
{
    EvenRandom r;
    cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
    for(int i=0; i<10; i++)
    {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2���� 10������ ¦�� ���� ���� 10 ��--" << endl;
    for(int i=0; i<10; i++)
    {
        int n = r.nextInRange(2, 10);
        cout << n << ' ';
    }
    cout << endl;
    return 0;
}