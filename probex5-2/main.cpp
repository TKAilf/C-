#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<char, string> mp;
    char number[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' };
    mp[ number[0] ] = "一";
    mp[ number[1] ] = "二";
    mp[ number[2] ] = "三";
    mp[ number[3] ] = "四";
    mp[ number[4] ] = "五";
    mp[ number[5] ] = "六";
    mp[ number[6] ] = "七";
    mp[ number[7] ] = "八";
    mp[ number[8] ] = "九";
    mp[ number[9] ] = "○";
    cout << "整数の値を入力してください：";
    string s;
    cin >> s;
    string result = "";
    for( int i = s.length() - 1; i >= 0; i-- ){

        map<char, string>::iterator it = mp.find( s[i] );
        if( it == mp.end() ){
            cout << "整数の値を入力してください。" << endl;
            return 0;
        }

        result = mp[ s[i] ] + result;
        if( i != 0 && ( ( s.length() ) - i ) % 3 == 0 ){
            result = "," + result;
        }
    }

    cout << "変換結果：";
    cout << result << endl;
}
