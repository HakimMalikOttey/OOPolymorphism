// OOPolymorphism.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include"char.h"

int main()
{
	person blank1;//default constructor 
	blank1.show1();//prints out primary description
	blank1.show4();//prints out secondary description
	person blank2 = person("Bard", "12", "black");
	blank2.show1();
	boy blank22 = boy(" The Tick", 4);
	blank22.show();
	person blank3 = person("Lenna", "17","Yellow");
	blank3.show1();
	girl blank33 = girl("Barbie", 6);
	blank33.show(true);//will print secondary description with all characteristcs 
	person blank4 = person("Jamian", "5", "Yellow");
	blank4.show1();
	girl blank44 = girl("Barbie", 6);
	blank44.show(false);//will print secondary description that lists no characteristics
	system("pause");
    return 0;
}

