#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    // set : 値をとにかく格納するだけ。
    // ただし、重複を許さない。
    set<string> names;          // setのデータ構造を用意する。
    // 値を代入
    names.insert( "Tom" );
    names.insert( "Mike" );
    names.insert( "Mike" );
    names.insert( "Bob" );
    // 登録されている全データを表示する。
    set<string>::iterator itr;
    for( itr = names.begin(); itr != names.end(); itr++ ){
        cout << *itr << endl;
    }
    // Bob, Steveがデータ内に存在するか調べる。
    string n[] = { "Bob", "Steve" };
    int i;
    for( i = 0; i < 2; i++ ){
        // find関数で探す。戻り値はiterator。
        itr = names.find( n[ i ] );
        if( itr == names.end() ){
            cout << n[ i ] << " is not in a set" << endl;
        }else{
            cout << n[ i ] << " is in a set" << endl;
        }
    }

    return 0;
}
