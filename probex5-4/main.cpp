#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    set<char> st;
    cout << "�p�P�����́F";
    string s = "";
    cin >> s;
    for( int i = 0; i < s.length(); i++ ){
        st.insert( s[i] );
    }
    cout << "�g�p����Ă���A���t�@�x�b�g�F";
    for( set<char>::iterator itr = st.begin(); itr != st.end(); itr++ ){
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}
