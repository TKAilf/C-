#ifndef _SAMPLE_H_
#define _SAMPLE_H_

// クラス宣言
class CSample
{
public:
    // メンバ関数
    void set( int num );    // m_numに値を設定する
    int  get();             // m_numの値を取得する
private:
    // メンバ変数
    int m_num;
};

#endif // _SAMPLE_H_