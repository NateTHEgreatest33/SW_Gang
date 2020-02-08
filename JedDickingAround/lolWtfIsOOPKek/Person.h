#ifndef PERSON_H
#define PERSON_H

#include<string>

using namespace std;

class Person {
    private:
        int id;
        string name;
    public:
        void doJob(); 
        //wtf ^ why doesn't this have to be virtual?

        Person();
        Person(int inputId, string inputString);
        void setId(int inputId);
        int getId();
        void setName(string inputName);
        string getName();
        ~Person();
};

#endif