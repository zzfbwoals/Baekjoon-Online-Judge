#include <iostream>
using namespace std;

// ����0 ����0����1��2  0 -1 -2
// ����1 ����0����1��2  1  0 -1
//   ��2 ����0����1��2  2  1  0

// ���� ��� A-B==0
// �̱�� ��� A-B==-2 || A-B==1
// ����   ��� A-B==-1 || A-B==2

enum RSP {����, ����, ��};

int main()
{
    string input1;
    cout << "�ι̿�>>";
    cin >> input1;
    RSP s = static_cast<RSP>(input1);

    string input2;
    cout << "�ٸ���>>";
    cin >> input2;
    RSP t = static_cast<RSP>(input2);

    if(s - t == 0)
        cout << "�����ϴ�." << endl;
    else if(s - t == -2 || s - t == 1)
        cout << "�ι̿��� �̰���ϴ�." << endl;
    else
        cout << "�ٸ����� �̰���ϴ�." << endl;
    
    return 0;
}