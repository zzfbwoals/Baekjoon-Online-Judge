#include <string>
#include <iostream>
using namespace std;

int main()
{
    cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
    while(true)
    {
        cout << ">>";
        string text;
        getline(cin, text);
        if(text=="exit")
            break;
        int n = text.length();
        for(int i=n-1; i>=0; i--)
        {
            cout << text[i];
        }
        cout << endl;
    }
    return 0;
}