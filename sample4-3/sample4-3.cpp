#include <iostream>

using namespace std;

int main(){
    int* p = 0;
    p = new int();        // int�^�̗̈�𓮓I�m��
    *p = 123;
    cout << *p << endl;
    delete p;              // �C���X�^���X�̏���
    return 0;
}