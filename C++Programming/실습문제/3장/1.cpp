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
Tower::Tower() {
    height = 1;
}

Tower::Tower(int num) {
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