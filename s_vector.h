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
#include <iostream>
template <typename T>
class s_vector
{
    friend ostream & operator << (ostream &out, s_vector<T>);
public:
    s_vector();

    T operator [](int index)
    {
        if(index < _size)
        {
            return data[index];
        }
        T t = (T) 0;
        return t;
    }


    void push_back(T val);
    void clear();
    bool empty();
    void reverse();
    void print_all();
    int size();
//    T *begin();
//    T *end();
    T first();
    T last();
    void info();
private:
    int _size = 0;
    int capacity = 16;
    T *data = (T *) malloc(16 * sizeof(T));
    void allocate(int mem);
};

template<typename T>
s_vector<T>::s_vector()
{
    T arr[capacity];
    *data = *arr;
}

template<typename T>
void s_vector<T>::push_back(T val)
{
    if(_size < capacity)
    {
        data[_size] = val;
        _size ++;
    }
    else
    {
        capacity *= 2;
        allocate(capacity);
        data[_size] = val;
        _size ++;
    }
    return ;
}

template<typename T>
void s_vector<T>::print_all()
{
    for(int i=0;i<_size;i++)
    {
        cout<<data[i]<<" ";
    }cout<<endl;
}

template<typename T>
ostream & operator<<(ostream &out, s_vector<T> element)
{
    out<<element;
    return out;
}

template<typename T>
int s_vector<T>::size()
{
    return _size;
}

//当capacity等于size时，如果需要添加元素，则需要扩容，否则data[]无法承载；
//扩容一倍；
template<typename T>
void s_vector<T>::allocate(int mem)
{
    T *arr = (T *) malloc(sizeof(T) *mem);
    memcpy(arr, data, mem);
}

template<typename T>
T s_vector<T>::first()
{
    if(!empty())
    {
        return data[0];
    }
    return (T) 0;
}

template<typename T>
T s_vector<T>::last()
{
    if(!empty())
    {
        return data[_size-1];
    }
    return (T) 0;
}

template<typename T>
bool s_vector<T>::empty()
{
    return _size == 0;
}

template<typename T>
void s_vector<T>::clear()
{
    data = (T *) malloc(8 * sizeof(T));
    _size = 0;
    capacity = 16;
}

template<typename T>
void s_vector<T>::reverse()
{
    for(int i=0;i<_size / 2;i++)
    {
        T tmp = data[i];
        data[i] = data[_size - i - 1];
        data[_size - i - 1] = tmp;
    }
}

template<typename T>
void s_vector<T>::info()
{
    cout<< "capacity = " << capacity << "; size = " << _size << "; sizeof(T) = " << sizeof(T) <<endl;
}


