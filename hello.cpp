//============================================================================
// Name        : hello.cpp
// Author      : AdrianChua
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "lift.h"
#include "windows.h"

#define FLR1 0
#define GOUP 1
#define FLR2 2

struct pet {
	char name[100];
	int age;
};

class lift{

public:
	//member vars

	std::string status;
	int floor;

	//member methods
	void go_up(int levels){
		// play sound going up
		floor++;

		if( floor == 1){
			status = "FLOOR1";
		}else if ( floor == 2 ){
			status = "FLOOR2";
		}else if ( floor == 3 ){
			status = "FLOOR3";
		}
		//
	}
	// constructor
	lift(){
		status = "WAITING AT LOBBY";
		floor = 0;
	}


};


char statename[4][7] = {"FLR1", "GO UP", "FLR2", "OPEN"};
int main(void) {

	lift * myLift = new lift();
	lift * myLift2 = new lift();
	lift * myLift3 = new lift();
	std::cout << myLift-> status << std::endl;

	myLift->go_up(1);
	std::cout << myLift2-> status << std::endl;


	int go = 1;
	double level;
	int state = FLR1;
	int callbut, liftbut;
	//std::cout << "Hello World!!!" << std::endl;
	liftopen();

	while( go == 1){
		// keep playing/looping/ operating
		printf("running lift a:%d b:%d c:%d\n", 23, 45, 67);
		std::cout << "running lift a:" << 23 << "b:" << 45 << "c:" << 67  << std::endl;
		Sleep(1000);
		level = position();

		printf("position is: %f\n", level);
		callbut = callbuttons();
		liftbut = liftbuttons();

		if(state == FLR1) {

			//dosomething;

		}else if(state == FLR2) {
			//do something else

		}else{

		}

		switch(state){
			case FLR1:
				//dosomething;

				if(doorajar() == 0.0){
					winch(UP);

				}
				break;

			case FLR2:
				//do something else
				break;
			default:
				break;

		}

	}

	printf("Lift simulator quitting...\n");


	return 0;
}
