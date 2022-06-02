#include <iostream>
#include <list>

using namespace std;

// list : STLの一つ
// vectorに似ているが違う性質を持つライブラリ
// iterator : STLにおけるポインタのようなもの
// listライブラリには配列の番号があまり関係ない、そのためiteratorという
// 配列の要素を示す変数を使用することでlistライブラリを扱えるようにしている。

// list<int> li;
// iterator itr;のとき
// itr = li.begin()で list: liの先頭要素を指し示すiteratorとなる。
// itr = li.end() で最後の要素を指し示すiteratorとなる。
// また、iteratorを用いて要素を取り出す場合は
// *itr を使用して要素を取り出す必要がある。

int main(){
    list<int> li;
    li.push_back( 1 );              // 後ろにデータを挿入
    li.push_back( 2 );              // 後ろにデータを挿入
    li.push_front( 3 );             // 前にデータを挿入
    list<int> :: iterator itr;
    // データの挿入
    itr = li.begin();               // イテレータを戦闘に設定
    itr++;                          // 一つ移動
    li.insert( itr, 4 );            // 値の挿入
    // データの表示
    for( itr = li.begin(); itr != li.end(); itr++ ){
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}
