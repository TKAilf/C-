#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_

#include "car.h"

// CCar�N���X���X�[�p�[�N���X(�e�N���X)�Ƃ���T�u�N���X(�q�N���X)CAmbulace
class CAmbulance : public CCar{
public:
    CAmbulance();
    virtual ~CAmbulance();
    void sevePeaple();
private:
    int m_number;
};

#endif // _AMBULANCE_H_
