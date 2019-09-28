#include "mypoints.h"
mypoint::mypoint(int _x=0,int _y=0 ) :x(_x),y(_y)
{

}
int mypoint::getx()
{
	return this->x;
}
int mypoint::gety()
{
	return this->y;
}