#include <iostream>
#include <string>
 
using namespace std;

template < typename T > T saidai( T a, T b )
{
    if( a > b ){
        return a;
    }

    return b;
}
 
int main(){
    cout << saidai(1,2) << endl;
    cout << saidai(1.75,3.12) << endl;
    string s1 = "aiu",s2 = "eo";
    cout << saidai(s1,s2) << endl;
    return 0;
}
