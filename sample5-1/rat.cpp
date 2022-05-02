#include "rat.h"
#include <iostream>

using namespace std;

// ネズミの数を初期値0にする
int CRat::m_count = 0;


CRat::CRat() : m_id( 0 ){
    m_id = m_count;
    m_count++;
}

CRat::~CRat(){
    cout << "ネズミ:" << m_id << "消去" << endl;
    m_count--;
}

void CRat::squeak(){
    cout << m_id << ":" << "チューチュー" << endl;
}

void CRat::showNum(){
    cout << "現在のネズミの数は" << m_count << "匹です。" << endl;
}