/*#pragma once
#include "List.h"
#include <iostream>
List::List() {
	this->head = NULL;
	this->tail = NULL;
}
void List::setHead(Node* head) {
	this->head = head;
}
Node* List::getHead() {
	return head;
}
void List::setTail(Node* tail) {
	this->tail = tail;
}
Node* List::getTail() {
	return tail;
}

bool List::isEmpty() {
	if (head == NULL) {
		return true;
	}
	else {
		return false;
	}
}
void List::insertAthead(int data) {
	if (isEmpty()) {
		Node* temp = new Node(data);
		head = temp;
		tail = temp;
	}
	else {
		Node* temp = new Node(data);
		temp->setNext(head);
		head = temp;
	}
}
void List::insertAttail(int data) {
	if (isEmpty()) {
		insertAthead(data);
	}
	else {
		Node* temp = new Node(data);
		tail->setNext(temp);
		tail = temp;
	}
}
int List::count() {
	int counter = 0;
	Node* temp = head;
	while (temp != NULL) {
		counter++;
		temp = temp->getNext();
	}
	return counter;
}
void List::print() {
	Node* temp = head;
	while (temp != NULL) {
		std::cout << temp->getData()<<std::endl;
		temp = temp->getNext();
	}
}*/