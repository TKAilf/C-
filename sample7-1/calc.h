#ifndef _CALC_H_
#define _CALC_H_

// �I�[�o�[���[�h�Ƃ́A1�̃N���X�̒��ɓ������O�̊֐��𕡐��������邱��
// �I�[�o�[���[�h�͊֐������łȂ��A�R���X�g���N�^�ł��\�ł���B
class CCalc{
private:
    int m_a, m_b;
public:
    CCalc();
    CCalc( int a, int b ); 
    int add();
    int add( int a, int b );
    int getA();
    int getB();
};

#endif // _CALC_H_