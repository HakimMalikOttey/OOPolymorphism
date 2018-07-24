#pragma once
#ifndef CHAR_H
#define CHAR_H

#include <string>
using namespace std;
//parent
class person{
public:
	person();

	person(std::string A, string B, string C);
	~person();//destroys object
	string getname();
	void setname(string);
	string getage();
	void setage(string);
	string geteth();
	void seteth(string);
	void show1();// prints out everything located in protected
	void show4();

protected:
	string name;
	string age;
	string eth;
private:
};
//child of person class
class boy:public person {
public:
	boy();
	boy(std::string A, int B);
	~boy();
	int getbroth();
	void setbroth(int brother);//stores variable in parameters into int brother. Used to tell the user how many siblins this character has
	string getfigure();
	void setfigure(string figure);//stores variable in paramets within string figure. Used to tell the user the name of figure
	void show();
protected:
	int brother;
	string figure;
private:
};
//child of person class
class girl:public person {
public:
	girl();
	girl(std::string A, int B);
	~girl();
	int getsis();
	void setsis(int brother);//stores variable in parameters into int sister. Used to tell the user how many siblins this character has
	string getdoll();
	void setdoll(string doll);//stores variable in paramets within string doll. Used to tell the user the name of doll
	void show();
	void show(bool detail);
protected:
	int sister;
	string doll;
private:
};
#endif