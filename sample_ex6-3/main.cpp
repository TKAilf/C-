#include <iostream>
#include <string>
#include "bird.h"
#include "chicken.h"
#include "crow.h"

using namespace std;

int main(){
    CBird *b1, *b2, *b3;
    b1 = new CCrow();
    b2 = new CChicken();
    // 純粋仮想関数を使用したクラスは抽象クラスと呼ばれ、インスタンスを使用できない。
    // b3 = new CBird();
    b1 -> sing();
    b1 -> fly();
    b2 -> sing();
    b2 -> fly();
    delete b1, b2;

    return 0;
}
