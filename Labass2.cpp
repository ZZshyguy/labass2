#include<iostream>
#include<cstdlib>
#include<ctime>
int main( ) {
  char ans;
  bool done = false;
  int roll,x,y,point;
  srand(7);
  while ( ! done ) {
         x = rand()%6+1;
	 y = rand()%6+1;
	 roll = x+y;
	 switch(roll){
		stuff
	 }
         cout << " Play again (y/n) ? ";
         cin >> ans;
         if ( ans == 'y' || ans == 'Y') done = true;
             else done = false;
  }
  return 0;
}

