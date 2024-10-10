#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class UpAndDownGame
{
public:
    static int min;
    static int max;
    static void seed() { srand((unsigned)time(0)); }
    static int nextInt() { return rand() % (max - min + 1) + min; }
    static void set(int a, int b)
    {
        if (a < b)
        {
            min = a;
            max = b;
        }
        else
        {
            min = b;
            max = a;
        }
    }
};

int UpAndDownGame::min = 0;
int UpAndDownGame::max = 99;

int main()
{
    UpAndDownGame::seed();
    int target = UpAndDownGame::nextInt();
    cout << "Up & Down ������ �����մϴ�." << endl;
    int cnt = 0;
    while (true)
    {
        int guess;
        cout << "���� " << UpAndDownGame::min << "�� " << UpAndDownGame::max << "���̿� �ֽ��ϴ�." << endl;
        if (cnt == 0)
        {
            cout << "���μ�>>";
            cin >> guess;
            if (guess == target)
            {
                cout << "���μ��� �̰���ϴ�!!" << endl;
                break;
            }
            else if (guess < target)
                UpAndDownGame::set(guess, UpAndDownGame::max);
            else
                UpAndDownGame::set(UpAndDownGame::min, guess);
        }
        else if (cnt == 1)
        {
            cout << "������>>";
            cin >> guess;
            if (guess == target)
            {
                cout << "�������� �̰���ϴ�!!" << endl;
                break;
            }
            else if (guess < target)
                UpAndDownGame::set(guess, UpAndDownGame::max);
            else
                UpAndDownGame::set(UpAndDownGame::min, guess);
        }
        cnt++;
        if (cnt >= 2)
            cnt = 0;
    }
    return 0;
}