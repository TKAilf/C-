#include <iostream>
#include <string>
#include "sample.h"

// �N���X�Ԃł̑��ݎQ�Ƃ̌��܂育��

using namespace std;

int main(){
    CSample s;
    cout << "�萔�F" << s.m_cst << endl;
    s.setStr( "ABC" );
    cout << s.getStr() << endl;
    return 0;
}
