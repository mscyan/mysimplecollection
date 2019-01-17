#include <iostream>
#include "time_util.h"
#include "s_vector.h"
#include "Person.h"
#include <string>
//启动类，主要用于测试实现的数据结构/集合
using namespace std;
int main() {

    s_vector<int> v;
    for(int i=0;i<30;i++)
    {
        v.push_back(i);
    }
    v.print_all();
//    for(int i=0;i<20;i++)
//    {
//        cout<<v[i]<<" ";
//    }cout<<endl;

//    cout<<v.empty()<<endl;
//    v.clear();
//    cout<<v.empty()<<endl;
    v.reverse();
    v.print_all();
    cout<<endl;
    v.info();

    person *p = new person();
    s_vector<person *> vp;
    vp.push_back(p);
    vp.info();
    return 0;
}