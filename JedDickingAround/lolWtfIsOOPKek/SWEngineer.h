#ifndef SWENGINEER_H
#define SWENGINEER_H
#include "Person.h"

using namespace std;

class SWEngineer : public Person
{
    public:
        SWEngineer(int inputId, string inputString);
        void doJob();
};

#endif