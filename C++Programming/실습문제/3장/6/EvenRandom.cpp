#include "EvenRandom.h"
#include <cstdlib>
#include <ctime>

EvenRandom::EvenRandom() {
    srand((unsigned)time(0)); // �õ� ����
}

int EvenRandom::next() {
    return (rand() / 2) * 2; // 0���� RAND_MAX ������ ¦�� ���� ��ȯ
}

int EvenRandom::nextInRange(int low, int high) {
    int range = (high - low + 1) / 2; // ¦�� ���� ���
    return low + (rand() % range) * 2; // low�� high ������ ¦�� ���� ��ȯ
}