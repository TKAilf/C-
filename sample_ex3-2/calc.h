#ifndef _CALC_H_
#define _CALC_H_

// 一般的にtemplateで書いたクラスはソース部分もヘッダー側に記載する
// inline：古いプログラムによく出てくるものであり、処理を早くしたい際に使う。

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
