//
// Created by yanch on 2019/1/10.
//

#include <string>

#ifndef MYSIMPLECOLLECTION_PERSON_H
#define MYSIMPLECOLLECTION_PERSON_H

#endif //MYSIMPLECOLLECTION_PERSON_H
using namespace std;
class person
{
public:
    int age = 20;
    string name = "NULL";

    person()
    {

    }

    person(int age, string name) : age(age), name(name) {}
};