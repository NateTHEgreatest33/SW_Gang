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
/*
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
	cout<<"The distance between "<<house1.houseName<<" and "<<house2.houseName<<" is "<<distance<<"."<<endl;
}

void printCordsName(struct coordinates cords[], int numOfCordsInArray){
  for(int i = 0; i < numOfCordsInArray; i++){
    cout<<cords[i].houseName<<endl;
  }
*/
struct child{
	string name;
	int age;
	int grade;
};

struct parent{
	string name;
	string job;
	int age;
};

struct child c1[3];
struct parent p1[2];

void famSum(struct child c1[], struct parent p1[], int numOfChild){
	for (int i = 0; i < numOfChild; i++){
		cout<<c1[i].name<<" who is "<<c1[i].age<<" years old have parents "<<p1[0].name<<" and "<<p1[1].name<<" who are a "<<p1[0].job<<" and a "<<p1[1].job<<"."<<endl;
	}
	//return c1; ?
	cout<<"The number is children is "<<numOfChild<<"."<<endl;
}

int main( int argc, const char* argv[] )
{
  /*
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
  h3[0].houseName = "kjahsdkshakdjhas";

  //for ( start ; end condition ; what happens after each loop )
  for(int i = 0; i < 2; i++){
  	h3[i].x = 0;
  }

  printCordsName(h3,2);
  */

  c1[0].name="Jeff";
  c1[0].age=10;
  c1[0].grade=5;

  c1[1].name="Bob";
  c1[1].age=12;
  c1[1].grade=7;

  c1[2].name="Ron";
  c1[2].age=13;
  c1[2].grade=8;

  p1[0].name="Karen";
  p1[0].job="Manager";
  p1[0].age=40;

  p1[1].name="Boomer";
  p1[1].job="Rapper";
  p1[1].age=50;

  famSum(c1,p1,3);

  return 0;
}
