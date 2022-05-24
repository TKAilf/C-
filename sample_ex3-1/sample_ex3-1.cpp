#include <iostream>
#include <string>

using namespace std;

// Tの中に好きな型を入れてよいですよ、という意味
template < typename T >
T add( T x, T y ){
    return x + y;
}

int main(){
    cout << add< int >( 4, 3 ) << endl;
    cout << add< string >( "ABC", "DEF" ) << endl;
    cout << add( 1, 2 ) << endl;
    // string型かchar型か分からずエラーになる
    // cout << add( "abc", "def" ) << endl;
    // typenameは同じ型でなければエラーになる。
    // cout << add( 1, 2.3 ) << endl;
    return 0;
}
