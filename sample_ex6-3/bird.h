#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string>

using namespace std;

// virtual��p����ƁA�T�u�N���X�œ����֐���߂�l���Ⴄ��ԂŎg���񂹂�B
// virtual���Ȃ��ꍇ�́A�T�u�N���X�œ����悤�ɒ�`���Ă��e�N���X�̊֐����D�悳���B
class CBird{
    public:
        // �������z�֐��ACBird�N���X�����炩�̃N���X�̐e�N���X�ɂȂ邱�Ƃ�z�肵�Ă���B
        virtual void sing() = 0;
        void fly() { cout << "������т܂�" << endl; }
};

#endif // _BIRD_H_
