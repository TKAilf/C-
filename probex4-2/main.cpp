#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    int i = 0;
    while( 1 ){
        cout << "正の整数を入力:";
        cin >> i;
        if( i != -1 ){
            v.push_back( i );
        }else{
            break;
        }
    }
    sort( v.begin(), v.end() );
    cout << "最大値 : " << v[v.size() - 1] << endl;
    cout << "最小値 : " << v[0]  << endl;

    return 0;
}
