#ifndef _SAMPLE_H_
#define _SAMPLE_H_

class CSample{
    public:
        void setNum( int num );     // private指定されたメンバ変数に値をセットする。
        int  getNum();              // private指定されたメンバ変数の値を取得する。
    private:
        int  m_num;
};

#endif _SAMPLE_H_