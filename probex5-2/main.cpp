#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<char, string> mp;
    char number[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' };
    mp[ number[0] ] = "��";
    mp[ number[1] ] = "��";
    mp[ number[2] ] = "�O";
    mp[ number[3] ] = "�l";
    mp[ number[4] ] = "��";
    mp[ number[5] ] = "�Z";
    mp[ number[6] ] = "��";
    mp[ number[7] ] = "��";
    mp[ number[8] ] = "��";
    mp[ number[9] ] = "��";
    cout << "�����̒l����͂��Ă��������F";
    string s;
    cin >> s;
    string result = "";
    for( int i = s.length() - 1; i >= 0; i-- ){

        map<char, string>::iterator it = mp.find( s[i] );
        if( it == mp.end() ){
            cout << "�����̒l����͂��Ă��������B" << endl;
            return 0;
        }

        result = mp[ s[i] ] + result;
        if( i != 0 && ( ( s.length() ) - i ) % 3 == 0 ){
            result = "," + result;
        }
    }

    cout << "�ϊ����ʁF";
    cout << result << endl;
}
