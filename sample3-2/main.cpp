#include <iostream>
#include "sample.h"

using namespace std;

int main(){
    CSample sample;
    sample.setNum( 5 );
    cout << sample.getNum() << endl;
    return 0;
}