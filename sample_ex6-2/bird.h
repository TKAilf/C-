#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string>

using namespace std;

// virtualを用いると、サブクラスで同じ関数を戻り値が違う状態で使い回せる。
// virtualがない場合は、サブクラスで同じように定義しても親クラスの関数が優先される。
class CBird{
    public:
        // 純粋仮想関数、CBirdクラスが何らかのクラスの親クラスになることを想定している。
        virtual void sing() = 0;
        void fly() { cout << "鳥が飛びます" << endl; }
};

#endif // _BIRD_H_
