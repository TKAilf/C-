#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    // set : �l���Ƃɂ����i�[���邾���B
    // �������A�d���������Ȃ��B
    set<string> names;          // set�̃f�[�^�\����p�ӂ���B
    // �l����
    names.insert( "Tom" );
    names.insert( "Mike" );
    names.insert( "Mike" );
    names.insert( "Bob" );
    // �o�^����Ă���S�f�[�^��\������B
    set<string>::iterator itr;
    for( itr = names.begin(); itr != names.end(); itr++ ){
        cout << *itr << endl;
    }
    // Bob, Steve���f�[�^���ɑ��݂��邩���ׂ�B
    string n[] = { "Bob", "Steve" };
    int i;
    for( i = 0; i < 2; i++ ){
        // find�֐��ŒT���B�߂�l��iterator�B
        itr = names.find( n[ i ] );
        if( itr == names.end() ){
            cout << n[ i ] << " is not in a set" << endl;
        }else{
            cout << n[ i ] << " is in a set" << endl;
        }
    }

    return 0;
}
