#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>

/*-----------------
Display a pyramid
Ex.
				X
			X	X	X
		X	X	X	X	X
	X	X	X	X	X	X	X
-----------------*/

using namespace std;

//Function to display pyramid

void displayPyramid(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
      {
        cout << "x";
      }
    cout << endl;  
  }
}

int main( int argc, const char* argv[] )
{
  displayPyramid(10);

  return 0;
}
