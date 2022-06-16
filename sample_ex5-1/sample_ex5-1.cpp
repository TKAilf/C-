#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    // mapの定義方法 : map<キーの型, 値> 配列名;
    // vectorやlistとの違いは、配列の要素を2つ指定可能であるという点。
    map<string, int> score;     // mapのデータ構造を用意する。
    string names[] = { "Tom", "Bob", "Mike" };
    score[ names[ 0 ] ] = 100;  // キーとの値の関連付け① Tom : 100
    score[ names[ 1 ] ] = 80;   // キーとの値の関連付け② Bob : 80
    score[ names[ 2 ] ] = 120;  // キーとの値の関連付け③ Mike : 120
    int i;
    for( i = 0; i < 3; i++ ){
        cout << names[ i ] << ":" << score[ names[ i ] ] << endl;
    }

    return 0;
}
