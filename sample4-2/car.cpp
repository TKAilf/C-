#include "car.h"
#include <iostream>

using namespace std;

CCar::CCar() : m_fuel( 0 ), m_migration( 0 ){
    cout << "CCar�I�u�W�F�N�g����" << endl;
}

CCar::~CCar(){
    cout << "CCar�I�u�W�F�N�g�j��" << endl;
}

void CCar::supply( int fuel ){
    if( fuel >= 0 ){
        m_fuel += fuel;
    }
    cout << "�R���F" << m_fuel << endl;
}

void CCar::move(){
    if( m_fuel > 0 ){
        m_migration++;
        m_fuel--;
    }
    cout << "�ړ������F" << m_migration << endl;
    cout << "�R���F" << m_fuel << endl;
}
