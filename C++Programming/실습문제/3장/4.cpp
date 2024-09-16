#include <iostream>
using namespace std;

class CoffeeMachine
{
    private:
        int coffee;
        int water;
        int sugar;
    public:
        CoffeeMachine(int x, int y, int z) {coffee = x, water = y, sugar = z;}
        void show() {cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << " ��:" << water << " ����:" << sugar << endl;}
        void fill() {coffee=10, water=10, sugar=10;}
        void drinkEspresso() {coffee--; water--;}
        void drinkAmericano() {coffee--; water-=2;}
        void drinkSugarCoffee() {coffee--; water-=2; sugar--;}
};

int main()
{
    CoffeeMachine java(5, 10, 3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
    return 0;
}