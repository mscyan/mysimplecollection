//
// Created by yanchao on 2019/1/9.
//

#include <vector>

#ifndef MYSIMPLECOLLECTION_S_VECTOR_H
#define MYSIMPLECOLLECTION_S_VECTOR_H

#endif //MYSIMPLECOLLECTION_S_VECTOR_H
//动态数组，实现vector的一些功能；
#include <stdlib.h>
#include <string.h>
template <typename T>
class s_vector
{
public:
    s_vector();

    T operator [](int index);
    ostream operator << (int index);

    void push_back(T val);
    void clear();
    bool empty();
    void reverse();
    void print_all();
    int size();
    int length();
    T *begin();
    T *end();
    T first();
    T last();
private:
    int _size = 0;
    int capacity = 16;
    T data[];
};

template<typename T>
s_vector<T>::s_vector() {
    T arr[capacity];
    *data = *arr;
}

//重载运算符
template<typename T>
T s_vector<T>::operator[](int index) {
    if(index < _size)
    {
        return data[index];
    }
    cout<<"invalid index "<<endl;
    return nullptr;
}

template<typename T>
void s_vector<T>::push_back(T val) {
    if(_size < capacity)
    {
        data[_size] = val;
        _size ++;
    }
    else
    {
        capacity *= 2;
        T arr[capacity];
        memcpy(data, arr, sizeof(*data));
        *data = *arr;
        data[_size] = val;
        _size ++;
    }
    return ;
}

template<typename T>
void s_vector<T>::print_all() {
    for(int i=0;i<_size;i++)
    {
        cout<<data[i]<<" ";
    }cout<<endl;
}

template<typename T>
int s_vector<T>::length() {
    return _size;
}

//template<typename T>
//ostream s_vector<T>::operator<<(T element) {
//    cout<<element;
//}
