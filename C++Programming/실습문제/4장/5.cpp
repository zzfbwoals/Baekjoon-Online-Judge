#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    srand((unsigned)time(0));
    cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
    while(true)
    {
        cout << ">>";
        string text;
        getline(cin, text);
        if(text == "exit")
            break;
        int index = rand() % text.length();
        int randomChar;
        if (rand() % 2 == 0) {
            randomChar = rand() % 26 + 65; // A���� Z������ ������ �빮��
        } else {
            randomChar = rand() % 26 + 97; // a���� z������ ������ �ҹ���
        }
        text[index] = randomChar;
        cout << text << endl;
    }
    return 0;
}