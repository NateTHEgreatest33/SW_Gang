#include <iostream>
#include <string>
#include "Person.h"
#include "SWEngineer.h"

using namespace std;

int main() {
    Person* person1 = new Person(011626, "Jed");

    cout << person1->getName() << "'s ID is " << person1->getId() << endl;

    SWEngineer* engineer1 = new SWEngineer(011626, "Jed");

    engineer1->doJob();

    return 0;
}