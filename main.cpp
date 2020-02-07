#include <stdio.h>
#include <iostream>

using namespace std;


void printMyName(string myName){
	cout<<"my name is: "<<myName<<endl;
}

void addTwo(int inputNum){
	inputNum+=2;
	cout<<"The resulting number is: "<< inputNum << endl;
}


int main( int argc, const char* argv[] )
{
  cout << "sup bro" << endl;
  cout << "not much, bro" << endl;
  cout<<"hello"<<endl;

  printMyName("Nate");
  addTwo(4);

	return 0;
}
