#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

// vectorは ただ配列が動的に拡張されるだけのライブラリであり
// サイズを気にせずに使用できるだけ
/////////////////// vectorの主なメンバ関数 /////////////////////////
////////////////////////////////////////////////////////////////////
// push_back() 要素の追加
// clear()     要素のクリア
// size()      配列の大きさを得る関数
// capacity()  動的配列に追加できる要素の許容量
// empty()     要素が空かどうかを調べる
////////////////////////////////////////////////////////////////////

// listは vectorと似ているが 好きな要素の削除や
// 好きな場所への要素の追加等 vectorよりも拡張されている。
///////////////////// listの主なメンバ関数 /////////////////////////
////////////////////////////////////////////////////////////////////
// push_front() 先頭に要素の追加する
// push_back()  末尾に要素を追加する
// pop_front()  先頭の要素を削除する
// pop_back()   末尾の要素を削除する
// insert()     要素を挿入する
// erase()      要素を削除する
// clear()      全要素のクリア
////////////////////////////////////////////////////////////////////


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
