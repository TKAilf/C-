#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    stack<string> stk;
    while( 1 ){
        cout << "文字列を入力：";
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
