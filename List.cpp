#include "List.h"
#include "Planet.h"
#include <iostream>

using namespace std;
List::List() {
	this->head = NULL;
	this->tail = NULL;	
}
List::~List() {
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
	Node * new_node = new Node();
	Node * temp;
	Node * orig_prev;

	new_node->data = p;

	if(head == NULL) {
		this->head = new_node;
		this->head->prev = NULL;
		this->head->next = NULL;
		this->tail = this->head;
	}
	else if(index >= size() - 1) {
		temp = this->tail;
		temp->next = new_node;
		this->tail = new_node;
		this->tail->prev = temp;
		this->tail->next = NULL;
	}
	else {
		temp = this->head;
		for(int i = 0; i < index; i++) {
			temp = temp->next;
		}
		temp->prev = orig_prev;
		orig_prev->next = new_node;
		new_node->next = temp;
		new_node->prev = orig_prev;
		temp->prev = new_node;
	}
}
Planet* List::read(int index) {
	Planet * retVal;
	Node * temp;

	if(index >= size()) {
		return NULL:
	}

	temp = this->head;
	for(int i = 0; i < index; i++) {
		temp = temp->next;
	}
	retVal = temp->data;
	return retVal;
}
//do I need to delete head and the next nodes prev as well? will this cause a memory leak if I dont?
bool List::remove(int index) {
	Node * temp;
	if(index >= size()) {
		return false;
	}
	if(index = size() - 1) {
		temp = this->tail->prev;
		delete this->tail;
		this->tail = temp;
		this->tail->next = NULL;
	}
	else if(index = 0) {
		temp = this->head->next;
		delete head;
		this->head = temp;
		this->head->prev = NULL:
	}
	else {
		temp = this->head;
		for(int i = 0; i < index; i++) {
			temp = temp->next;
		}
		Node * orig_prev = temp->prev;
		orig_prev->next = temp->next;
		temp->next->prev = orig_prev;
		delete temp;
	}
	return true;
}