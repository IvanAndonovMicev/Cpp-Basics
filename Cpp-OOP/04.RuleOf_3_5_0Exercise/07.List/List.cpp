#include "List.h"

#include <sstream>

using namespace std;

//class Node
List::Node::Node(int value, Node* prev, Node* next) : value(value), prev(prev), next(next) { }

int List::Node::getValue() const { return value; }
void List::Node::setValue(int value) { this->value = value; }

List::Node* List::Node::getNext() const { return next; }
void List::Node::setNext(Node* next) { this->next = next; }

List::Node* List::Node::getPrev() const { return prev; }
void List::Node::setPrev(Node* prev) { this->prev = prev; }

//class List
List::List() : head(nullptr), tail(nullptr), size(0) { }

List::List(const List& other) : head(nullptr), tail(nullptr), size(0) {
	addAll(other);
}

int List::first() const { return head->getValue(); }

void List::add(int value) {
	if (size == 0) {
		head = tail = new Node(value, nullptr, nullptr);
		size = 1;
	}
	else {
		Node* newNode = new Node(value, tail, nullptr);
		tail->setNext(newNode);
		tail = newNode;
		size++;
	}
}

void List::addAll(const List& other) {
	for (Node* curr = other.head; curr != nullptr; curr = curr->getNext())
		add(curr->getValue());
}

void List::removeFirst() {
	if (size == 0) {
		return;
	}
	else if (size == 1) {
		delete head;
		head = tail = nullptr;
	}
	else {
		Node* newHead = head->getNext();
		newHead->setPrev(nullptr);
		delete head;
		head = newHead;
	}
	size--;
}

void List::removeAll() {
	for (Node* curr = head; curr != nullptr; ) {
		Node* next = curr->getNext();
		delete curr;
		curr = next;
	}

	size = 0;
	head = tail = nullptr;
}

size_t List::getSize() const { return size; }

bool List::isEmpty() const { return size == 0; }

//static List List::getReversed(List l) { }

std::string List::toString() const {
	std::ostringstream ostr;
	for (Node* curr = head; curr != nullptr; curr = curr->getNext())
		ostr << curr->getValue() << ' ';

	return ostr.str();
}

List& List::operator<<(const int& value) {
	add(value);

	return *this;
}

List& List::operator<<(const List& other) {
	addAll(other);

	return *this;
}

List& List::operator=(const List& other) {
	removeAll();
	addAll(other);

	return *this;
}

List::~List() {
	removeAll();
}