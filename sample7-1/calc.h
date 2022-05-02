#ifndef _CALC_H_
#define _CALC_H_

// オーバーロードとは、1つのクラスの中に同じ名前の関数を複数持たせること
// オーバーロードは関数だけでなく、コンストラクタでも可能である。
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