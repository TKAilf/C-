#include <iostream>
#include "sup1.h"
#include "sub2.h"
#include "sub1.h"
#include "sup2.h"

using namespace std;

int main(){
    CSup1 *s1 = new CSub1();
    CSup2 *s2 = new CSub2();
    // �e�N���X�̃f�X�g���N�^��virtual��p���Ă��Ȃ���
    // �q�N���X�̃f�X�g���N�^���Ă΂�Ȃ��Ȃ邱�Ƃ�����B
    delete s1;
    delete s2;

    return 0;
}
