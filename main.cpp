#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>

/*-----------------
1) create struct for child with name, age, and grade
2) create struct for parent with name age and job
3) create function that that takes in array of children (should work for any number)
   and takes in array of parents (should only be 2), and prints out a new line for each child:
   "CHILDA  who is X years old has parents PARENT1, PARENT2 who are JOB1 and JOB2"
   
   the function should also return the number of children. 

-----------------*/

using namespace std;

vector<int> ExampleVector;

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

int famSum(struct child c1[], struct parent p1[], int numOfChild){
	for (int i = 0; i < numOfChild; i++){
		cout<<c1[i].name<<" who is "<<c1[i].age<<" years old have parents "<<p1[0].name<<" and "<<p1[1].name<<" who are a "<<p1[0].job<<" and a "<<p1[1].job<<"."<<endl;
	}
	return numOfChild;
}

int famSumBetter(vector<struct child> c1, vector<struct parent> p1){
	for (int i = 0; i < c1.size(); i++){
		cout<<c1[i].name<<" who is "<<c1[i].age<<" years old have parents "<<p1[0].name<<" and "<<p1[1].name<<" who are a "<<p1[0].job<<" and a "<<p1[1].job<<"."<<endl;
	}
	return c1.size();
}

vector<struct child> children;
vector<struct parent> parents;


int main( int argc, const char* argv[] )
{
  ExampleVector.push_back(11); //add this to the vector //ex[0]
  ExampleVector.push_back(20); //add this to the vector //ex[1]
  ExampleVector.push_back(30); //add this to the vector //ex[2]
  ExampleVector.size(); //3 items in the array
  int lastItem = ExampleVector[ExampleVector.size()-1];
  

  ExampleVector.pop_back(); //take off from the vector
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

  for(int i = 0; i < 3; i++){
    children.push_back(c1[i]);
  }
  for(int i = 0; i < 2; i++){
    parents.push_back(p1[i]);
  }
  famSumBetter(children, parents);

  cout<<"old way: "<<endl;

  famSum(c1,p1,3);

  return 0;
}
