#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person() {

}

Person::Person(int inputId, string inputString){
    id = inputId;
    name = inputString;
}

void Person::setId(int inputId) {
    id = inputId;
}

int Person::getId() {
    return id;
}

void Person::setName(string inputName) {
    name = inputName;
}

string Person::getName() {
    return name;
}

Person::~Person() {
    
}