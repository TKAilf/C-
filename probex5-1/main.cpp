#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<string, string> word;
    string English[] = { "cat", "dog", "bird", "tiger" };
    word[ English[ 0 ] ] = "猫";
    word[ English[ 1 ] ] = "犬";
    word[ English[ 2 ] ] = "鳥";
    word[ English[ 3 ] ] = "トラ";
    cout << "英語で動物の名前を入力してください : ";
    string name;
    cin >> name;
    map<string, string>::iterator itr;
    itr = word.find( name );
    if( itr == word.end() ){
        cout << "対応するデータは登録されていません。" << endl;
    }else{
        cout << "「" << word[ name ] << "」" << "です。" << endl;
    }

    return 0;
}
