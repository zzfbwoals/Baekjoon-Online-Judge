#include <string>
#include <iostream>
using namespace std;

void run1()
{
    int count = 0;
    cout << "���ڿ� �Է�>> ";
    string str;
    getline(cin, str);
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='a')
            count++;
    }
    cout << "���� a�� " << count << "�� �ֽ��ϴ�." << endl;
}

void run2()
{
    int count = 0; int index = 0;
    cout << "���ڿ� �Է�>> ";
    string str;
    getline(cin, str);
    while(true)
    {
        index = str.find( 'a' , index );
        if(index == -1)
            break;
        else
        {
            count++; index++;
        }
    }
    cout << "���� a�� " << count << "�� �ֽ��ϴ�." << endl;    
}

int main()
{
    run2();
    return 0;
}