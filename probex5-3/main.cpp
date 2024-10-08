#include <set>
#include <ctime>
#include <iostream>

using namespace std;

int main(){
    set<int> numbers;
    cout << "乱数：";
    srand( ( unsigned int )time( NULL ) );
    for( int i = 0; i < 10; i++ ){
        int nRandom = rand() % 10 + 1;
        numbers.insert( nRandom );
        cout << nRandom << " ";
    }
    cout << endl;
    cout << "出現した数：";
    for( set<int>::iterator itr = numbers.begin(); itr != numbers.end(); itr++ ){
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}
