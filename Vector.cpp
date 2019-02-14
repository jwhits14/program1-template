#include "Vector.h"

Vector::Vector(int siz){
	Planet *vec = new Planet[size];
	this->size = siz;
}
Vector::~Vector(){
	for(int i = 0; i<this->size; i++) {
		delete vec[i];
	}
	delete[] vec;
}

void Vector::insert(int index, Planet *p){
	int tem = this->size+1;
	if(index>this->size) {
		tem = index+1;
	}
	Planet *temp = new Planet[tem];
	int j = 0;
	for(int i = 0; i<temp->size; i++){
		if(i==index) {
			temp[j] = *p;
			j++;
		}
		if(j<this.size()){
			temp[j] = this->vec[i];
		}
		j++;
	}
	this->vec.~Vector();
	Vector *vec = new Vector(temp->size);
	*vec = *temp;
}

Planet* Planet::read(int index){
	if(this.size()<index) {
		return NULL;
	}
	else {
		return this[index]
	}
}

bool Vector::remove(int index) {
	if(index>this->size) {
		return false;
	}
	Planet *temp = new Planet[this->size-1];
	int j = 0;
	for(int i = 0; i<this.size; i++) {
		if(index!=i) {
			temp[j] = this->vec[i];
			j++;
		}
	}
	this->vec.~Vector();
	Vector *vec = new Vector(temp->size);
	*vec = *temp;
	return true;
}
unsigned Vector::size(){
	return (unsigned int)(this->size);
}
