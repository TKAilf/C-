#include <iostream>

using namespace std;

bool judge( int );

int main(){
    int n;
    cout << "®”‚ğ“ü—ÍF";
    cin >> n;
    if( judge( n ) ){
        cout << "‚±‚Ì”‚Í0ˆÈã‚Å‚·" << endl;
    }else{
        cout << "‚±‚Ì”‚Í0–¢–‚Å‚·B" << endl;
    }
}

bool judge( int n ){
    if( n >= 0 ){
        return true;
    }else{
        return false;
    }
}