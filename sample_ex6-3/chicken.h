#ifndef _CHICKEN_H_
#define _CHICKEN_H_

#include "bird.h"

class CChicken : public CBird{
    public:
        void sing() { cout << "�R�P�R�b�R�[" << endl; }
        void fly() { cout << "�{�͔�ׂ܂���" << endl; }
};

#endif // _CHICKEN_H_
