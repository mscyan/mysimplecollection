//
// Created by yanchao on 2019/1/9.
//

#include <vector>

#ifndef MYSIMPLECOLLECTION_S_VECTOR_H
#define MYSIMPLECOLLECTION_S_VECTOR_H

#endif //MYSIMPLECOLLECTION_S_VECTOR_H
//动态数组，实现vector的一些功能；
template <typename T>
class s_vector
{
public:
    s_vector();

    void push_back(T val);
    void clear();
    bool empty();
    void reverse();
    void print_all();
    int size();
    T *begin();
    T *end();
    T first();
    T last();
private:
    int _size;
    int capacity;
    int data[];
};

template<typename T>
s_vector<T>::s_vector() {
    std::vector<int> v;
}
