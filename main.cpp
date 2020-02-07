#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;


void printMyName(string myName){
	cout<<"my name is: "<<myName<<endl;
}

void addTwo(int inputNum){
	inputNum+=2;
	cout<<"The resulting number is: "<< inputNum << endl;
}

struct coordinates{
	float x;
	float y;
	string houseName;
};

struct coordinates h1;
struct coordinates h2;

void distTwo(struct coordinates house1, struct coordinates house2){
	float distance = sqrt(pow(house2.x-house1.x,2)+pow(house2.y-house1.y,2)*1.0);
	cout<<"The distance between "<<house1.houseName<<" and "<<house2.houseName<<" is "<<distance<<".";
}

int main( int argc, const char* argv[] )
{
  cout << "sup bro" << endl;
  cout << "not much, bro" << endl;
  cout<<"hello"<<endl;

  printMyName("Nate");
  addTwo(4);

  h1.x=10;
  h1.y=20;
  h1.houseName="yeetYah";

  h2.x=35;
  h2.y=45;
  h2.houseName="yeetNah";

  distTwo(h1,h2);
  

	return 0;
}
