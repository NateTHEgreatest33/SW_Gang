#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main() {
    Person* person1 = new Person(011626, "Jed");

    cout << person1->getName << "'s ID is" << person1->getId << endl;

    return 0;
}