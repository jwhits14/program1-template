#include "List.h"
#include <iostream>

using namespace std;

List::List() {
	this->head = NULL;
	this->tail = NULL;	
}
List::~List() {
	//ask Moore about this
	Node * temp = this->head;
	delete this->head;
	while(temp!=NULL) {
		temp = temp->next;
		delete temp->prev;
	}
	delete this->tail;
}
unsigned List::size(){
	unsigned count = 0;
	Node * temp = this->head;
	while(temp != NULL) {
		count++;
		temp = temp->next;	
	}
	return count;
}
void List::insert(int index, Planet * p) {
	//do I need to wait for a second node to initialize tail? or would tail and head point to the same thing?
	if(head == NULL) {
		this->head->data = p; 	
	}
}

