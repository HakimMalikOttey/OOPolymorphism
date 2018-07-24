#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "char.h"
using namespace std;


	person::person() {}
	person::~person() {
		cout << "This has been destroyed." << endl;
	}
	person::person(string A, string B, string C) {//initializes person class 
		name = A;
		age = B;
		eth = C;
	}
	string person::getage() {//whatever is located in paramete B will be taken and stored into age
		return age;
	}
	void person::setage(string B) {
		age = B;
	}
	string person::getname() {//whatever is located in paramete A will be taken and stored into name
		return name;
	}
	void person::setname(string A) { 
		name = A;
	}
	string person::geteth() { //whatver is located in paramete C will be taken and stored into eth, or ethnicity
		return eth;
	}
	void person::seteth(string C) {
		eth = C;
	}
	void person::show1() {
		cout << "This persons name is " << name << " and they are " << age << " years old. They are " << eth << "\n"<< endl;
	}
	void person::show4() {
		cout << "This person has no interesting attributes" << "\n" << endl;
	}
	
	boy::boy(){}
	boy::~boy() {
		cout << "This has been destroyed." << endl;
	}
	boy::boy(string A, int B) {
		figure= A;
		brother = B;
	}
	string boy::getfigure() {
		return figure;
	}
	void boy::setfigure(string A) {//whatever string is within parameter A will be stored into string figure (boy)
		figure = A;
	}
	int boy::getbroth() {
		return brother;
	}
	void boy::setbroth(int B) { //whatever int is within parameter B will be stored into int brother (boy)
		brother = B;
	}
	void boy::show() {
		cout << "This person happens to be a boy. This boy is the brother of " << brother << " people. He,also, owns a doll named " << figure <<"\n"<< endl;
	}
	
	girl::girl() {}
	girl::~girl() {
		cout << "This has been destroyed." << endl;
	}
	girl::girl(string A, int B) {
		doll = A;
		sister = B;
	}
	string girl::getdoll() {
		return doll;
	}
	void girl::setdoll(string A) {
		doll = A;
	}
	int girl::getsis() {
		return sister;
	}
	void girl::setsis(int B) {
		sister = B;
	}
	void girl::show() {
		person::show4();
		cout << "This person happens to be a girl. This girl is the sister of " << sister << " people. She also owns a doll named " << doll <<"\n"<< endl;
	}
	void girl::show(bool details) {
		if (details){ // if false, print message with attributes
			cout << "This person happens to be a girl. This girl is the sister of " << sister << " people. She also owns a doll named " << doll << "\n"<<endl;
		}
		if (!details) { //if true, print no attributes message
			person::show4();
		}
	}
