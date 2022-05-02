#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

class Vector2D{
// protectedは親クラス、子クラス内では変更可能
// それ以外では変更不可能
protected:
    int m_x;
    int m_y;
public:
    Vector2D();
    void setValue( int x, int y );
    int getX();
    int getY();
protected:
    void init();
};

#endif // _VECTOR2D_H_