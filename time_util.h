//
// Created by yanchao on 2019/1/9.
//

#ifndef MYSIMPLECOLLECTION_TIME_UTIL_H
#define MYSIMPLECOLLECTION_TIME_UTIL_H

#endif //MYSIMPLECOLLECTION_TIME_UTIL_H
#include "time.h"
#include <stdio.h>
using namespace std;
class s_time
{
public:
    s_time()
    {

    }

    void printTime()
    {
        time_t tt = time(nullptr);
        tm* t = localtime(&tt);
        printf("%d-%02d-%02d %02d:%02d:%02d\n",
               t->tm_year + 1900,
               t->tm_mon + 1,
               t->tm_mday,
               t->tm_hour,
               t->tm_min,
               t->tm_sec);
    }
private:
};