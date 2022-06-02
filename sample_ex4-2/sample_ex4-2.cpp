#include <iostream>
#include <list>

using namespace std;

// list : STL�̈��
// vector�Ɏ��Ă��邪�Ⴄ�����������C�u����
// iterator : STL�ɂ�����|�C���^�̂悤�Ȃ���
// list���C�u�����ɂ͔z��̔ԍ������܂�֌W�Ȃ��A���̂���iterator�Ƃ���
// �z��̗v�f�������ϐ����g�p���邱�Ƃ�list���C�u������������悤�ɂ��Ă���B

// list<int> li;
// iterator itr;�̂Ƃ�
// itr = li.begin()�� list: li�̐擪�v�f���w������iterator�ƂȂ�B
// itr = li.end() �ōŌ�̗v�f���w������iterator�ƂȂ�B
// �܂��Aiterator��p���ėv�f�����o���ꍇ��
// *itr ���g�p���ėv�f�����o���K�v������B

int main(){
    list<int> li;
    li.push_back( 1 );              // ���Ƀf�[�^��}��
    li.push_back( 2 );              // ���Ƀf�[�^��}��
    li.push_front( 3 );             // �O�Ƀf�[�^��}��
    list<int> :: iterator itr;
    // �f�[�^�̑}��
    itr = li.begin();               // �C�e���[�^��퓬�ɐݒ�
    itr++;                          // ��ړ�
    li.insert( itr, 4 );            // �l�̑}��
    // �f�[�^�̕\��
    for( itr = li.begin(); itr != li.end(); itr++ ){
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}
