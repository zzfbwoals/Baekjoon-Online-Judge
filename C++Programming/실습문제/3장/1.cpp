#include <iostream>
using namespace std;

class Tower {
    private:
        int height;
    public:
        Tower() {
            height = 1;
        };
        Tower(int num) {
            height = num;
        };
        int getHeight() {
            return height;
        };
};

int main()
{
    Tower myTower;
    Tower seoulTower(100);
    cout << "���̴� " << myTower.getHeight() << "����" << endl;
    cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
    return 0;
}