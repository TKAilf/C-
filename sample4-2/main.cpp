#include "car.h"
#include <iostream>

using namespace std;

int main(){
    CCar* pC = 0;
    pC = new CCar();        // インスタンス生成
    pC -> supply( 10 );
    pC -> move();
    pC -> move();
    delete pC;              // インスタンスの消去
    cout << "インスタンスの消去完了" << endl;
    return 0;
}