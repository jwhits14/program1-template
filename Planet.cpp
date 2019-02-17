#include "Planet.h"
#include <iostream>

Planet::Planet(int distance) {
    this->id = &this;
	this->pos = rand() %  360;
	this->distance = distance;
	int i = rand() % 3;
	if(i == 0) {this->type = 'h';}
	if(i == 1) {this->type = 'r';}
	if(i == 2) {this->type = 'g';}
}
int Planet::orbit() {
	pos++;
	if(pos > 359) {
		pos = 0;
	}
	return pos;
}

