#include <iostream>
#include <string>
#include "SWEngineer.h"

using namespace std;

SWEngineer::SWEngineer(int inputId, string inputString) {
    this->setId(inputId);
    this->setName(inputString);
    //idk why ^ this gotta be pointer dereference but whatever
}

void SWEngineer::doJob() {
    cout << "Beep Boop Beep Boop" << endl;
}
