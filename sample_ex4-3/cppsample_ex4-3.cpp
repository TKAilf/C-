#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

// vector�� �����z�񂪓��I�Ɋg������邾���̃��C�u�����ł���
// �T�C�Y���C�ɂ����Ɏg�p�ł��邾��
/////////////////// vector�̎�ȃ����o�֐� /////////////////////////
////////////////////////////////////////////////////////////////////
// push_back() �v�f�̒ǉ�
// clear()     �v�f�̃N���A
// size()      �z��̑傫���𓾂�֐�
// capacity()  ���I�z��ɒǉ��ł���v�f�̋��e��
// empty()     �v�f���󂩂ǂ����𒲂ׂ�
////////////////////////////////////////////////////////////////////

// list�� vector�Ǝ��Ă��邪 �D���ȗv�f�̍폜��
// �D���ȏꏊ�ւ̗v�f�̒ǉ��� vector�����g������Ă���B
///////////////////// list�̎�ȃ����o�֐� /////////////////////////
////////////////////////////////////////////////////////////////////
// push_front() �擪�ɗv�f�̒ǉ�����
// push_back()  �����ɗv�f��ǉ�����
// pop_front()  �擪�̗v�f���폜����
// pop_back()   �����̗v�f���폜����
// insert()     �v�f��}������
// erase()      �v�f���폜����
// clear()      �S�v�f�̃N���A
////////////////////////////////////////////////////////////////////


int main(){
    vector<string> v;
    list<string> l;
    v.push_back( "HELLO" );
    v.push_back( "WORLD" );
    l.push_back( "hello" );
    l.push_back( "world" );
    l.push_back( "!" );
    // vector�ł̃C�e���[�^
    vector<string> :: iterator i1;
    list<string> :: iterator i2;
    for( i1 = v.begin(); i1 != v.end(); i1++ ){
        cout << *i1 << endl;
    }
    // list�̗v�f�̍폜
    i2 = l.begin();
    // remove : �v�f���폜����֐�( vector�ɂ͑��݂��Ȃ� )
    l.remove( *i2 );
    for( i2 = l.begin(); i2 != l.end(); i2++ ){
        cout << *i2 << endl;
    }
}
