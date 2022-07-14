#include <iostream>
#include "IInf1.h"
#include "IInf2.h"
#include "Sample.h"

// IInf1‚Ì‚Ý‚ªŽg‚¦‚éŠÖ”
void foo( IInf1* );
// IInf2‚Ì‚Ý‚ªŽg‚¦‚éŠÖ”
void bar( IInf2* );

int main(){
    CSample *s = new CSample();
    foo( ( IInf1* ) s );
    bar( ( IInf2* ) s );

    return 0;
}

void foo( IInf1* p ){
    p -> func1();
    p -> func2();
    // p -> func3();
    // p -> func4();
}

void bar( IInf2* p ){
    // p -> func1();
    // p -> func2();
    p -> func3();
    p -> func4();
}
