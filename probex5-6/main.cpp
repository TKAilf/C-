#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    stack<string> stk;
    while( 1 ){
        cout << "•¶Žš—ñ‚ð“ü—ÍF";
        string s = "";
        getline( cin, s );
        stk.push( s );
        if( s == "" ){
            break;
            cout << endl;
        }
    }
    while( !stk.empty() ){
        cout << stk.top() << endl;
        stk.pop();
    }

    return 0;
}
