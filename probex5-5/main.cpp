#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
    queue<string> q;
    while( 1 ){
        cout << "•¶Žš—ñ‚ð“ü—ÍF";
        string s = "";
        getline( cin, s );
        if( s == "" ){
            break;
        }
        q.push( s );
    }
    cout << endl;
    while( !q.empty() ){
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
