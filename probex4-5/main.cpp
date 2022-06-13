#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> li;
    int i;
    while( 1 ){
        cout << "³‚Ì®”‚ð“ü—Í:";
        cin >> i;
        if( i != -1 ){
            li.push_back( i );
        }else{
            break;
        }
    }
    list<int>::iterator i1 = li.begin();
    li.remove( 2 );
    for( i1 = li.begin(); i1 != li.end(); i1++ ){
        cout << *i1 << " ";
    }
    cout << endl;

    return 0;
}
