#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<string, string> word;
    string English[] = { "cat", "dog", "bird", "tiger" };
    word[ English[ 0 ] ] = "�L";
    word[ English[ 1 ] ] = "��";
    word[ English[ 2 ] ] = "��";
    word[ English[ 3 ] ] = "�g��";
    cout << "�p��œ����̖��O����͂��Ă������� : ";
    string name;
    cin >> name;
    map<string, string>::iterator itr;
    itr = word.find( name );
    if( itr == word.end() ){
        cout << "�Ή�����f�[�^�͓o�^����Ă��܂���B" << endl;
    }else{
        cout << "�u" << word[ name ] << "�v" << "�ł��B" << endl;
    }

    return 0;
}
