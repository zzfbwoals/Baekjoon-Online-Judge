/*
���� �ؽ�Ʈ�� �Է¹޾� ���ĺ� ������׷��� �׸��� ���α׷��� �ۼ��϶�.
�빮�ڴ� ��� �ҹ��ڷ� �����ϸ�, �ؽ�Ʈ �Է��� ���� ';' ���ڷ� �Ѵ�.
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void run()
{
    cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
    cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
    char text[10000];
    cin.getline(text, 10000, ';');

    // ���ĺ� ���� ���
    int count=0;
    int alpha[26] = {0};
    for(int i=0; i<strlen(text); i++)
    {
        if(isalpha(text[i]))
        {
            count++;
            alpha[tolower(text[i])-'a']++;
        }
    }

    // ���̾�׷� ���
    cout << "�� ���ĺ� �� " << count << endl << endl;
    for(int i=0; i<26; i++)
    {
        cout << (char)(i + 'a') << " (" << alpha[i] << ")\t: ";
        for(int j=0; j<alpha[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

int main()
{
    run();
    return 0;
}