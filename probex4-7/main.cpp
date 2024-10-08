#include <iostream>
#include <string>
#include <list>

using namespace std;
bool string_delete( string &s );

int main(){
    list<string> li;
    while( 1 ){
        cout << "文字列を入力:";
        string s = "";
        getline( cin, s );
        if( s != "" ){
            li.push_back( s );
        }else{
            break;
        }
    }
    li.remove_if( string_delete );
    list<string>::iterator itr = li.begin();
    cout << "5文字未満の単語:";
    for( itr = li.begin(); itr != li.end(); itr++ ){
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}

bool string_delete( string &s ){
    if( s.length() >= 5 ){
        return true;
    }else{
        return false;
    }
}
