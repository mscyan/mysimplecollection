#include <iostream>
#include "time_util.h"
#include "s_vector.h"
#include "Person.h"
#include <string>
//启动类，主要用于测试实现的数据结构/集合
using namespace std;
int main() {

    s_vector<int> v;
    for(int i=0;i<20;i++)
    {
        v.push_back(i*5 + 2);
    }
    v.print_all();
    cout<<"length : "<<v.size()<<endl;
    for(int i=0;i<20;i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;

//    int *pa = (int *) malloc(sizeof(int) * 5);
//    cout<<pa[0]<<endl;
    return 0;
}