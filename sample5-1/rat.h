#ifndef _RAT_H_
#define _RAT_H_

class CRat{
public:
    CRat();
    ~CRat();
    static void showNum();
    void squeak();
private:
    int m_id;
    static int m_count;         // クラスをどれだけ生成しようと、1つしか存在しない変数
};

#endif  _RAT_H_