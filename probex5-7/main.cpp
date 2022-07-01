#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    stack<char> stk;
    cout << "英単語を入力：";
    string s;
    cin >> s;
    for( int i = 0; i < s.length(); i++ ){
        stk.push( s[i] );
    }
    cout << endl;
    while( !stk.empty() ){
        cout << stk.top();
        stk.pop();
    }

    return 0;
}
