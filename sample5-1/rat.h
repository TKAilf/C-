#ifndef _RAT_H_
#define _RAT_H_

class CRat{
public:
    CRat();
    ~CRat();
    static void showNum();
    void squeak();
private:
    int m_id;
    static int m_count;         // �N���X���ǂꂾ���������悤�ƁA1�������݂��Ȃ��ϐ�
};

#endif  _RAT_H_