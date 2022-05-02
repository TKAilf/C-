#ifndef _CAR_H_
#define _CAR_H_

class CCar{
public:
    CCar();                     // コンストラクタ( クラスが生成される際に一度だけ呼ばれる )
    ~CCar();                    // デストラクタ( クラスが破棄される際に一度だけ呼ばれる )
    void move();                // 移動メソッド
    void supply( int fuel );    // 燃料補給メソッド
private:
    int m_fuel;
    int m_migration;
};

#endif _CAR_H_
