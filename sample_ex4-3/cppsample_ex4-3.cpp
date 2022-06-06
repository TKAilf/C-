#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(){
    vector<string> v;
    list<string> l;
    v.push_back( "HELLO" );
    v.push_back( "WORLD" );
    l.push_back( "hello" );
    l.push_back( "world" );
    l.push_back( "!" );
    // vectorでのイテレータ
    vector<string> :: iterator i1;
    list<string> :: iterator i2;
    for( i1 = v.begin(); i1 != v.end(); i1++ ){
        cout << *i1 << endl;
    }
    // listの要素の削除
    i2 = l.begin();
    // remove : 要素を削除する関数( vectorには存在しない )
    l.remove( *i2 );
    for( i2 = l.begin(); i2 != l.end(); i2++ ){
        cout << *i2 << endl;
    }
}
