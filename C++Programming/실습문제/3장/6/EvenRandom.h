#ifndef EVENRANDOM_H
#define EVENRANDOM_H

class EvenRandom {
public:
    EvenRandom();
    int next(); // 0���� RAND_MAX ������ ¦�� ���� ��ȯ
    int nextInRange(int low, int high); // low�� high ������ ¦�� ���� ��ȯ
};

#endif