#include <iostream>
using namespace std;

class Board
{
static int index;
static string str[100];
public:
    static void add(string text)
    {
        str[index] = text;
        index++;
    }
    static void print()
    {
        cout << "************* �Խ����Դϴ�. *************" << endl;
        for(int i=0; i<index; i++)
            cout << i << ": " << str[i] << endl;
        cout << endl;
    }
};

int Board::index = 0;
string Board::str[100];

int main()
{
    Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
    Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
    Board::print();
    Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
    Board::print();
}