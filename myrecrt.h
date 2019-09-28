#pragma once
#include<iostream>
class myrect
{
public:
	
	std::string label;
	void setlabel(std::string l);
	std::string getlabel();
	myrect();
	int x;
	int y;
	int w;
	int h;
};

