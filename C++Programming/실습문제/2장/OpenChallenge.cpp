#include <iostream>
using namespace std;

// ����0 ����0����1��2  0 -1 -2
// ����1 ����0����1��2  1  0 -1
//   ��2 ����0����1��2  2  1  0

// ���� ��� A-B==0
// �̱�� ��� A-B==-2 || A-B==1
// ����   ��� A-B==-1 || A-B==2
int reInt(string s)
{
    if(s=="����")
        return 0;
    else if(s=="����")
        return 1;
    else   
        return 2;
}

int main()
{
    string input1;
    int num1;
    cout << "�ι̿�>>";
    cin >> input1;
    num1 = reInt(input1);

    string input2;
    int num2;
    cout << "�ٸ���>>";
    cin >> input2;
    num2 = reInt(input2);

    if(num1-num2==0)
        cout << "�����ϴ�." << endl;
    else if(num1-num2==1 || num1-num2==-2)
        cout << "�ι̿��� �̰���ϴ�." << endl;
    else
        cout << "�ٸ����� �̰���ϴ�." << endl;
    return 0;
}