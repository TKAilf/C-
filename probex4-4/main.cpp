#include <iostream>
#include <string>
#include <vector>

using namespace std;

// cin�̓L�[�{�[�h������͂��ꂽ���̂��i�[���邾��
// �����A�L�[�{�[�h����̓��͂��Ȃ��iEnter�̂ݓ��j�̏ꍇ��
// ���͂���Ă��Ȃ�����ɂȂ�B
// ���̂��߁AEnter���肪�~�����ꍇ��getline()����p���邱�Ƃ�
// ����������������K�v������B

int main(){
    vector<string> v;
    string i = "";
    while( 1 ){
        cout << "����������:";
        getline( cin, i );
        if( i != "" ){
            v.push_back( i );
        }else{
            break;
        }
    }
    cout << endl;
    int nmax = v[ 0 ].length();
    int nmin = v[ 0 ].length();
    for( int j = 0; j < v.size(); j++ ){
        int njlength = v[ j ].length();
        if( nmax < njlength ){
            nmax = njlength;
        }
    }
    for( int k = 0; k < v.size(); k++ ){
        int nklength = v[ k ].length();
        if( nmin > nklength ){
            nmin = nklength;
        }
    }
    cout << "�Œ��̒P��:";
    for( int l = 0; l < v.size(); l++ ){
        if( nmax == v[ l ].length() ){
            cout << v[ l ] << " ";
        }
    }
    cout << endl;
    cout << "�ŒZ�̒P��:";
    for( int l = 0; l < v.size(); l++ ){
        if( nmin == v[ l ].length() ){
            cout << v[ l ] << " ";
        }
    }
    cout << endl;

    return 0;
}
