#ifndef _CALC_H_
#define _CALC_H_

// ��ʓI��template�ŏ������N���X�̓\�[�X�������w�b�_�[���ɋL�ڂ���
// inline�F�Â��v���O�����ɂ悭�o�Ă�����̂ł���A�����𑁂��������ۂɎg���B

template < typename T > class CCalc{
private:
    T m_n1;
    T m_n2;
public:
    inline void set( const T n1, const T n2 ){
        m_n1 = n1;
        m_n2 = n2;
    };
    inline T add() const {
        return m_n1 + m_n2;
    }
};

#endif // _CALC_H_
