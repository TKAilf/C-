#include <iostream>
#include <queue>
#include <string>
#include <map>

using namespace std;

int main(){
    queue<char> q;
    map<char, string> m;
    m[ '0' ] = "○";
    m[ '1' ] = "一";
    m[ '2' ] = "二";
    m[ '3' ] = "三";
    m[ '4' ] = "四";
    m[ '5' ] = "五";
    m[ '6' ] = "六";
    m[ '7' ] = "七";
    m[ '8' ] = "八";
    m[ '9' ] = "九";
    cout << "整数の値を入力してください：";
    string s = "";
    cin >> s;
    for( int i = s.length() - 1; 0 <= i; i-- ){
        q.push( s[i] );
    }
    string result = "";
    int n = 1;
    while( !q.empty() ){
        result = m[ q.front() ] + result;
        q.pop();
        if( ( s.length() != n ) && ( n % 3 == 0 ) ){
            result = "," + result;
        }
        n++;
    }
    cout << "変換結果：";
    cout << result << endl;

    return 0;
}
