#ifndef _CAR_H_
#define _CAR_H_

class CCar{
public:
    CCar();                     // �R���X�g���N�^( �N���X�����������ۂɈ�x�����Ă΂�� )
    ~CCar();                    // �f�X�g���N�^( �N���X���j�������ۂɈ�x�����Ă΂�� )
    void move();                // �ړ����\�b�h
    void supply( int fuel );    // �R���⋋���\�b�h
private:
    int m_fuel;
    int m_migration;
};

#endif _CAR_H_
