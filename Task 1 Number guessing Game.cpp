#include <iostream>
#include<time.h>
using namespace std;

int main()
{
    int randnum, num;
    srand(time(0));
	randnum = (rand()%100)+1;
	
	cout<<"***Number Guessing Game***"<<endl;

	do{
	cout<<"Guess Number between 1-100 : or press 0 to quit"<<endl;
	cin>>num;
	if (num == 0)
	{
	    cout<<"Correct num is : "<<randnum<<endl;
	    break;
	}
	
	else
	if(num > randnum)
	{
	    cout<<"Too High! try again"<<endl;
	}
	else if(num < randnum)
	{
	    cout<<"Too Low! try again"<<endl;
	}
	else{
	    cout<<"Congrats! you guessed the correct num"<<endl;
	}

}
    while(num!=randnum);
}



