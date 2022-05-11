#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include <string>

// constで値を変えないということを保証するための修飾子
using namespace std;

class CSample{
private:
    string m_str;
public:
    CSample();
    void setStr( const string str ); // 引数の値を変えられないようにする
    string getStr() const; // メンバ変数の値を変えられないようにする
public:
    static const int m_cst = 100; // m_cstの値を変えられないようにする
};

#endif // _SAMPLE_H_
