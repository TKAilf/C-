#ifndef _COLLECTIONINT_H_
#define _COLLECTIONINT_H_

#include <iostream>

using namespace std;
 
template < typename T > class CollectionInt{
private:
    //  配列データ
    T* m_pArray;
    //  配列の長さ
    T m_length;
public:
    //  コンストラクタ
    CollectionInt( T* array,T length ){
        m_pArray = new int[length];
        m_length = length;
        for(int i = 0; i < m_length ; i++){
            m_pArray[i] = array[i];
        }
    }
    //  デストラクタ
    ~CollectionInt(){
        delete[] m_pArray;
    }
    //  最大値の取得
    int getMax(){
        int max = m_pArray[0];
        for(int i = 0; i < m_length ; i++){
            if(max < m_pArray[i]){
                max = m_pArray[i];
            }
        }
        return max;
    }
    //  最小値の取得
    int getMin(){
        int min = m_pArray[0];
        for(int i = 0; i < m_length ; i++){
            if(min > m_pArray[i]){
                min = m_pArray[i];
            }
        }
        return min;
    }
    //  成分の表示
    void showArray(){
        for(int i = 0; i < m_length ; i++){
            cout << m_pArray[i] << " ";
        }
        cout << endl;
    }

};
 
#endif // _COLLECTIONINT_H_
