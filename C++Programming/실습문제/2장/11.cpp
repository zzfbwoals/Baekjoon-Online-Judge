/*
다음 C프로그램을 C++프로그램으로 수정하여 실행하라.
*/
#include <iostream>
using namespace std;

void run()
{
    int k, n=0;
    int sum=0;
    cout << "끝 수를 입력하세요>>";
    cin >> n;
    for(k=1; k<=n; k++)
        sum += k;
    cout << "1에서 " << n << "까지의 합은 " << sum << "입니다." << endl;
}

int main()
{
    run();
    return 0;
}