#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string>

using namespace std;

// virtualを用いると、サブクラスで同じ関数を戻り値が違う状態で使い回せる。
// virtualがない場合は、サブクラスで同じように定義しても親クラスの関数が優先される。
class CBird{
    public:
        virtual void sing() { cout << "鳥が鳴きます。" << endl; }
        void fly() { cout << "鳥が飛びます" << endl; }
};

#endif // _BIRD_H_
