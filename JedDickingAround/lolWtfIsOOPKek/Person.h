#ifndef PERSON_H
#define PERSON_H

#include<string>

using namespace std;

class Person {
    private:
        int id;
        string name;
    public:
        virtual void doJob(); 
        //TODO: inheritance shit

        Person();
        Person(int inputId, string inputString);
        void setId(int inputId);
        int getId();
        void setName(string inputName);
        string getName();
};

#endif