#include <iostream>
using namespace std;

// �����
class Tower {
    private:
        int height;
    public:
        Tower();
        Tower(int num);
        int getHeight();
};

// ������
Tower::Tower() : Tower(1) { } // ���ӻ�����

Tower::Tower(int num) { // Ÿ�ϻ�����
    height = num;
}

int Tower::getHeight() {
    return height;
}

// �����Լ�
int main()
{
    Tower myTower;
    Tower seoulTower(100);
    cout << "���̴� " << myTower.getHeight() << "����" << endl;
    cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
    return 0;
}