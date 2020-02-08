#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>

/*-----------------
PROBLEM 1
1) create struct for books: book name, number of pages, auther
2) create a function that will take in a vector of books (any size) print out the name, auther, and # pages for each book


PROBLEM 2
1) create a struct for people, that includes name, and book they are readying (book reading is empty to start)
2) create function to assign a book from the book struct, to each person in the people struct
3) print out who has what book and the name, auther, and # pages for that book
4) if there are less books then there are people, then for the people that do not get books, print out, "person x did not get a book" (x == name)
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
