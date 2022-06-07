#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v0;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    vector<int> v5;
    vector<int> v6;
    vector<int> v7;
    vector<int> v8;
    vector<int> v9;
    int i = 0;
    while( 1 ){
        cout << "³‚Ì®”‚ð“ü—Í:";
        cin >> i;
        if( i != -1 ){
            if( i % 10 == 0 ){
                v0.push_back( i );
            }else if( i % 10 == 1 ){
                v1.push_back( i );
            }else if( i % 10 == 2 ){
                v2.push_back( i );
            }else if( i % 10 == 3 ){
                v3.push_back( i );
            }else if( i % 10 == 4 ){
                v4.push_back( i );
            }else if( i % 10 == 5 ){
                v5.push_back( i );
            }else if( i % 10 == 6 ){
                v6.push_back( i );
            }else if( i % 10 == 7 ){
                v7.push_back( i );
            }else if( i % 10 == 8 ){
                v8.push_back( i );
            }else{
                v9.push_back( i );
            }
        }else{
            break;
        }
    }
    cout << endl;

    cout << "ˆê‚ÌˆÊ‚ª0 :";
    if( !v0.empty() ){
        for( int array = 0; array < v0.size(); array++ ){
            cout << " " << v0[ array ];
        }
    }else{
        cout << " ‚È‚µ";
    }
    cout << endl;
    cout << "ˆê‚ÌˆÊ‚ª1 :";
    if( !v1.empty() ){
        for( int array = 0; array < v1.size(); array++ ){
            cout << " " << v1[ array ];
        }
    }else{
        cout << " ‚È‚µ";
    }
    cout << endl;
    cout << "ˆê‚ÌˆÊ‚ª2 :";
    if( !v2.empty() ){
        for( int array = 0; array < v2.size(); array++ ){
            cout << " " << v2[ array ];
        }
    }else{
        cout << " ‚È‚µ";
    }
    cout << endl;
    cout << "ˆê‚ÌˆÊ‚ª3 :";
    if( !v3.empty() ){
        for( int array = 0; array < v3.size(); array++ ){
            cout << " " << v3[ array ];
        }
    }else{
        cout << " ‚È‚µ";
    }
    cout << endl;
    cout << "ˆê‚ÌˆÊ‚ª4 :";
    if( !v4.empty() ){
        for( int array = 0; array < v4.size(); array++ ){
            cout << " " << v4[ array ];
        }
    }else{
        cout << " ‚È‚µ";
    }
    cout << endl;
    cout << "ˆê‚ÌˆÊ‚ª5 :";
    if( !v5.empty() ){
        for( int array = 0; array < v5.size(); array++ ){
            cout << " " << v5[ array ];
        }
    }else{
        cout << " ‚È‚µ";
    }
    cout << endl;
    cout << "ˆê‚ÌˆÊ‚ª6 :";
    if( !v6.empty() ){
        for( int array = 0; array < v6.size(); array++ ){
            cout << " " << v6[ array ];
        }
    }else{
        cout << " ‚È‚µ";
    }
    cout << endl;
    cout << "ˆê‚ÌˆÊ‚ª7 :";
    if( !v7.empty() ){
        for( int array = 0; array < v7.size(); array++ ){
            cout << " " << v7[ array ];
        }
    }else{
        cout << " ‚È‚µ";
    }
    cout << endl;
    cout << "ˆê‚ÌˆÊ‚ª8 :";
    if( !v8.empty() ){
        for( int array = 0; array < v8.size(); array++ ){
            cout << " " << v8[ array ];
        }
    }else{
        cout << " ‚È‚µ";
    }
    cout << endl;
    cout << "ˆê‚ÌˆÊ‚ª9 :";
    if( !v9.empty() ){
        for( int array = 0; array < v9.size(); array++ ){
            cout << " " << v9[ array ];
        }
    }else{
        cout << " ‚È‚µ";
    }

    return 0;
}
