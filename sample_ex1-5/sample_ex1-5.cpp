#include <iostream>

using namespace std;

bool judge( int );

int main(){
    int n;
    cout << "��������́F";
    cin >> n;
    if( judge( n ) ){
        cout << "���̐���0�ȏ�ł�" << endl;
    }else{
        cout << "���̐���0�����ł��B" << endl;
    }
}

bool judge( int n ){
    if( n >= 0 ){
        return true;
    }else{
        return false;
    }
}