#ifndef _CROW_H_
#define _CROW_H_

#include "bird.h"

class CCrow : public CBird{
    public:
        void sing() { cout << "�J�[�J�[" << endl; }
        void fly() { cout << "�J���X����т܂�" << endl; }
};

#endif // _CROW_H_
