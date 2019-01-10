#include <iostream>
#include "time_util.h"
#include "s_vector.h"

//启动类，主要用于测试实现的数据结构/集合
using namespace std;
int main() {

    s_vector<int> *v = new s_vector<int>();
    v->print_all();

    for(int i=0;i<20;i++)
    {
        v->push_back(i * 5 + 1);
    }
    v->print_all();
    cout<<v->length();

    return 0;
}