#include "myrecrt.h"
void myrect::setlabel(std::string l)
{
	this->label = l;
}
myrect::myrect()
{
	label = "car";
}

std::string myrect::getlabel()
{
	return label;
}
