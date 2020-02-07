#include <stdio.h>
#include <iostream>
#include <math.h>

/*-----------------
1) create struct for child with name, age, and grade
2) create struct for parent with name age and job
3) create function that that takes in array of children (should work for any number)
   and takes in array of parents (should only be 2), and prints out a new line for each child:
   "CHILDA  who is X years old has parents PARENT1, PARENT2 who are JOB1 and JOB2"
   
   the function should also return the number of children. 

-----------------*/
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
struct coordinates h3[2];

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
  


  h3[0].x = 8;
  h3[1].y = 7;
  h3[1].houseName = "sahgdjasgd";

//for ( start ; end condition ; what happens after each loop )
for(int i = 0; i < 2; i++){
  h3[i].x = 0;
}



	return 0;
}
