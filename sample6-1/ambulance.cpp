#include "ambulance.h"
#include <iostream>

using namespace std;

CAmbulance::CAmbulance() : m_number( 119 ){
    cout << "CAmbulance�I�u�W�F�N�g����" << endl;
}

CAmbulance::~CAmbulance(){
    cout << "CAmbulance�I�u�W�F�N�g�j��" << endl;
}

void CAmbulance::sevePeaple(){
    cout << "�~�}�~������" << endl << "�Ăяo����" << m_number << "��" << endl;
}
