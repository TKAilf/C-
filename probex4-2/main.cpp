#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    int i = 0;
    while( 1 ){
        cout << "���̐��������:";
        cin >> i;
        if( i != -1 ){
            v.push_back( i );
        }else{
            break;
        }
    }
    sort( v.begin(), v.end() );
    cout << "�ő�l : " << v[v.size() - 1] << endl;
    cout << "�ŏ��l : " << v[0]  << endl;

    return 0;
}
