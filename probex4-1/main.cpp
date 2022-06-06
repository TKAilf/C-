#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2;
    int i = 0;
    while( 1 ){
        cout << "³‚Ì®”‚ð“ü—Í:";
        cin >> i;
        if( i != -1 ){
            if( i % 2 != 0 ){
                v1.push_back( i );
            }else{
                v2.push_back( i );
            }
        }else{
            break;
        }
    }
    int nSize1 = v1.size();
    int nSize2 = v2.size();
    int gusu;
    cout << "‹ô” :";
    for( gusu = 0; gusu < nSize2; gusu++ ){
        cout << " " << v2[ gusu ];
    }
    cout << endl;

    int kisu;
    cout << "Šï” :";
    for( kisu = 0; kisu < nSize1; kisu++ ){
        cout << " " << v1[ kisu ];
    }
    cout << endl;

    return 0;
}
