#include <iostream>
#include <queue>
#include <string>
#include <map>

using namespace std;

int main(){
    queue<char> q;
    map<char, string> m;
    m[ '0' ] = "��";
    m[ '1' ] = "��";
    m[ '2' ] = "��";
    m[ '3' ] = "�O";
    m[ '4' ] = "�l";
    m[ '5' ] = "��";
    m[ '6' ] = "�Z";
    m[ '7' ] = "��";
    m[ '8' ] = "��";
    m[ '9' ] = "��";
    cout << "�����̒l����͂��Ă��������F";
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
    cout << "�ϊ����ʁF";
    cout << result << endl;

    return 0;
}
