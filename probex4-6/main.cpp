#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(){
    int i;
    list<int> l;
    while( 1 ){
        cout << "正の整数を入力:";
        cin >> i;
        if( i != -1 ){
            l.push_back( i );
            list<int>::iterator itr = l.begin();
            l.sort();
            cout << "入力された数:";
            for( itr = l.begin(); itr != l.end(); itr++ ){
                cout << *itr << " ";
            }
            cout << endl;
        }else{
            break;
        }
    }

    return 0;
}
