#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>

/*-----------------
test push from windows desktop

PROBLEM 1
1) create struct for books: book name, number of pages, auther
2) create a function that will take in a vector of books (any size) print out the name, auther, and # pages for each book


PROBLEM 2
1) create a struct for people, that includes name, and book they are readying (book reading is empty to start)
2) create function to assign a book from the book struct, to each person in the people struct
3) print out who has what book and the name, auther, and # pages for that book
4) if there are less books then there are people, then for the people that do not get books, print out, "person x did not get a book" (x == name)

scratch constraints, jvsnotag: 3 books, 5 people
-----------------*/

using namespace std;

struct book{
  string name;
  string author;
  int pages;
};

struct person{
	string name;
	string book;
};

struct book b1[3];
struct person p1[5];

void bookInfo(vector<struct book> b1){
  for (int i = 0; i < b1.size(); i++){
      cout<<"The name of the book is: "<<b1[i].name<<". The author of the book is: "<<b1[i].author<<". "<<"The book has "<<b1[i].pages<<" pages."<<endl;
    }
}

void assignBook(vector<struct book> b1, vector<struct person> p1){
	for (int i = 0; i < p1.size(); i++){
		if (i < b1.size()){
			p1[i].book = b1[i].name;
		}
		else{
			p1[i].book = "NO BOOK";
		}
		cout<<p1[i].name<<"'s book is "<<p1[i].book<<"."<<endl;
	}
}

vector<struct book> books; 
vector<struct person> people;

/*
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
*/

int main( int argc, const char* argv[] )
{
  /*
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
  */

  b1[0].name = "Fake News - Vol 1";
  b1[0].author = "MAGA Inc";
  b1[0].pages = 69;

  b1[1].name = "How to Become Tesla CEO";
  b1[1].author = "Not Elon Musk";
  b1[1].pages = 420;

  b1[2].name = "What if I Don't Want a.out?";
  b1[2].author = "Jed Macatula";
  b1[2].pages = 69420;

  p1[0].name="James";
  p1[0].book="";

  p1[1].name="Boba";
  p1[1].book="";

  p1[2].name="Mochi";
  p1[2].book="";

  p1[3].name="Tofu";
  p1[3].book="";

  p1[4].name="Uni";
  p1[4].book="";

  for (int i = 0; i < 3; i++)
  {
	books.push_back(b1[i]);
  }

  for (int i = 0; i < 5; i++)
  {
	people.push_back(p1[i]);
  }

  cout<<"Book Problem Part 1"<<endl;
  bookInfo(books);

  cout<<"Book Problem Part 2"<<endl;
  assignBook(books, people);
  

  return 0;
}
