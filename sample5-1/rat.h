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
    static int m_count;         // ƒNƒ‰ƒX‚ğ‚Ç‚ê‚¾‚¯¶¬‚µ‚æ‚¤‚ÆA1‚Â‚µ‚©‘¶İ‚µ‚È‚¢•Ï”
};

#endif  _RAT_H_