#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(){
    int i;
    list<int> l;
    while( 1 ){
        cout << "���̐��������:";
        cin >> i;
        if( i != -1 ){
            l.push_back( i );
            list<int>::iterator itr = l.begin();
            l.sort();
            cout << "���͂��ꂽ��:";
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
