#include "rat.h"
#include <iostream>

using namespace std;

// �l�Y�~�̐��������l0�ɂ���
int CRat::m_count = 0;


CRat::CRat() : m_id( 0 ){
    m_id = m_count;
    m_count++;
}

CRat::~CRat(){
    cout << "�l�Y�~:" << m_id << "����" << endl;
    m_count--;
}

void CRat::squeak(){
    cout << m_id << ":" << "�`���[�`���[" << endl;
}

void CRat::showNum(){
    cout << "���݂̃l�Y�~�̐���" << m_count << "�C�ł��B" << endl;
}