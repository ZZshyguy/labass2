/*
Craps game
Zachary Lapointe
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main( ) {
  char ans;
  bool done = false;
  int roll,x,y,point;
  srand(time(NULL));
  while ( ! done ) {
         x = rand()%6+1;
	 y = rand()%6+1;
	 roll = x+y;
	 cout<< " Player rolled "<< x <<" + "<< y <<" = "<<roll<<endl;
	 switch(roll){
		case 7:
		case 11:
			cout<< " Player wins"<<endl;
			break;
		case 2:
		case 3:
		case 12:
			cout<< " Player loses"<<endl;
			break;
		default:
			point = roll;
			cout<< " Point is "<<point<<endl;
			while(1){
				x = rand()%6+1;
	 			y = rand()%6+1;
	 			roll = x+y;
	 			cout<< " Player rolled "<< x <<" + "<< y <<" = "<<roll<<endl;
				if(roll==point){
					cout<<" Player wins"<<endl;
					break;
				}
				else if(roll==7){
					cout<<" Player loses"<<endl;
					break;
				}
			}
			
	 }
         cout << " Play again (y/n) ? ";
         cin >> ans;
	 cout << endl;
         if ( ans == 'y' || ans == 'Y') done = false;
             else done = true;
  }
  return 0;
}

