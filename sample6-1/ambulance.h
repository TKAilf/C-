#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_

#include "car.h"

// CCarクラスをスーパークラス(親クラス)とするサブクラス(子クラス)CAmbulace
class CAmbulance : public CCar{
public:
    CAmbulance();
    virtual ~CAmbulance();
    void sevePeaple();
private:
    int m_number;
};

#endif // _AMBULANCE_H_
