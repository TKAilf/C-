#include <set>
#include <ctime>
#include <iostream>

using namespace std;

int main(){
    set<int> numbers;
    cout << "—”F";
    srand( ( unsigned int )time( NULL ) );
    for( int i = 0; i < 10; i++ ){
        int nRandom = rand() % 10 + 1;
        numbers.insert( nRandom );
        cout << nRandom << " ";
    }
    cout << endl;
    cout << "oŒ»‚µ‚½”F";
    for( set<int>::iterator itr = numbers.begin(); itr != numbers.end(); itr++ ){
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}
