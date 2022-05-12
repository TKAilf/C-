#include <iostream>
#include <string>

using namespace std;

// T‚Ì’†‚ÉD‚«‚ÈŒ^‚ğ“ü‚ê‚Ä‚æ‚¢‚Å‚·‚æA‚Æ‚¢‚¤ˆÓ–¡
template < typename T >
T add( T x, T y ){
    return x + y;
}

int main(){
    cout << add< int >( 4, 3 ) << endl;
    cout << add< string >( "ABC", "DEF" ) << endl;
    cout << add( 1, 2 ) << endl;
    // cout << add( "abc", "def" ) << endl;
    // cout << add( 1, 2.3 ) << endl;
    return 0;
}
