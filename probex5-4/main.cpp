#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    set<char> st;
    cout << "英単語を入力：";
    string s = "";
    cin >> s;
    for( int i = 0; i < s.length(); i++ ){
        st.insert( s[i] );
    }
    cout << "使用されているアルファベット：";
    for( set<char>::iterator itr = st.begin(); itr != st.end(); itr++ ){
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}
