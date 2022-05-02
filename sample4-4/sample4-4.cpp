#include <iostream>

using namespace std;

int main(){
    int *p = 0;
    int i;
    p = new int [10];   // int型の領域を10個動的確保する
    for( i = 0; i < 10; ++i ){
        p[i] = i;
        cout << p[i] << endl;
    }
    delete[] p;         // 配列をdeleteする際には、delete[]を使う
    return 0;
}