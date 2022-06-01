#ifndef _COLLECTIONINT_H_
#define _COLLECTIONINT_H_

#include <iostream>

using namespace std;
 
template < typename T > class CollectionInt{
private:
    //  �z��f�[�^
    T* m_pArray;
    //  �z��̒���
    T m_length;
public:
    //  �R���X�g���N�^
    CollectionInt( T* array,T length ){
        m_pArray = new int[length];
        m_length = length;
        for(int i = 0; i < m_length ; i++){
            m_pArray[i] = array[i];
        }
    }
    //  �f�X�g���N�^
    ~CollectionInt(){
        delete[] m_pArray;
    }
    //  �ő�l�̎擾
    int getMax(){
        int max = m_pArray[0];
        for(int i = 0; i < m_length ; i++){
            if(max < m_pArray[i]){
                max = m_pArray[i];
            }
        }
        return max;
    }
    //  �ŏ��l�̎擾
    int getMin(){
        int min = m_pArray[0];
        for(int i = 0; i < m_length ; i++){
            if(min > m_pArray[i]){
                min = m_pArray[i];
            }
        }
        return min;
    }
    //  �����̕\��
    void showArray(){
        for(int i = 0; i < m_length ; i++){
            cout << m_pArray[i] << " ";
        }
        cout << endl;
    }

};
 
#endif // _COLLECTIONINT_H_
