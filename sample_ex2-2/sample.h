#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include <string>

// const�Œl��ς��Ȃ��Ƃ������Ƃ�ۏ؂��邽�߂̏C���q
using namespace std;

class CSample{
private:
    string m_str;
public:
    CSample();
    void setStr( const string str ); // �����̒l��ς����Ȃ��悤�ɂ���
    string getStr() const; // �����o�ϐ��̒l��ς����Ȃ��悤�ɂ���
public:
    static const int m_cst = 100; // m_cst�̒l��ς����Ȃ��悤�ɂ���
};

#endif // _SAMPLE_H_
