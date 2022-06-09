#include <iostream>
#include <string>
#include <vector>

using namespace std;

// cinはキーボードから入力されたものを格納するだけ
// もし、キーボードからの入力がない（Enterのみ等）の場合は
// 入力されていない判定になる。
// このため、Enter判定が欲しい場合はgetline()等を用いることで
// 処理を実現させる必要がある。

int main(){
    vector<string> v;
    string i = "";
    while( 1 ){
        cout << "文字列を入力:";
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
    cout << "最長の単語:";
    for( int l = 0; l < v.size(); l++ ){
        if( nmax == v[ l ].length() ){
            cout << v[ l ] << " ";
        }
    }
    cout << endl;
    cout << "最短の単語:";
    for( int l = 0; l < v.size(); l++ ){
        if( nmin == v[ l ].length() ){
            cout << v[ l ] << " ";
        }
    }
    cout << endl;

    return 0;
}
