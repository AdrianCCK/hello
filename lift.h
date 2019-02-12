
#include <stdio.h>

#include <stdlib.h>
#include <iostream>

#define UP 1
#define DOWN -1
#define STOP 0


static double pos = 0;
void liftopen(void){
	printf("lift opening\n");


}
/*
 * def liftopen():
 * 		pass
 *
 */

void liftclose(void);

void liftreset(void);

int callbuttons(void){

	return 0;
}
int liftbuttons(void){
	return 0;
}

int liftquitting(void);

void winch(int onoff){

	if( onoff == UP){

		printf("going up\n");
		pos += 0.2;
	}else if( onoff == DOWN){
		pos -= 0.2;

		printf("going down\n");
	}else if( onoff == STOP){

		printf("stopping winch\n");
	}

}

double position(void){
	return pos;
}

double doorajar(void){
	static double doorgap = 0;
	return doorgap;
}

