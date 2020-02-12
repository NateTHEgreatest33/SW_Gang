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

// void displayPyramid(int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j <= i; j++)
//       {
//         cout << "x";
//       }
//     cout << endl;  
//   }
// }

int displaySymPyramid()
{
    int space, rows;

    cout <<"Please enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; i++, k = 0)
    {
        for(space = 1; space <= rows-i; space++)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}

// int displaySymPyramid()
// {
//   int space, rows;

//   cout << "enter # of rowz pls: ";
//   cin << rows;

//   for(int i = 1, k = 0; i <= rows; ++i)
// }

int main( int argc, const char* argv[] )
{
  //displayPyramid(10);
  displaySymPyramid();

  return 0;
}