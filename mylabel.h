#pragma once

#include <qlabel.h>
#include"qevent.h"
#include<qpainter.h>
#include<vector>
#include"mypoints.h"
#include"myrecrt.h"
class mylabel : public QLabel
{
	Q_OBJECT

public:
	mylabel(QWidget *parent);
	~mylabel();
	std::vector<mypoint> points1;
	std::vector<mypoint> points2;
	int x1, x2;
	int y1, y2;
	myrect temp_rect;
	std::vector<myrect> rect_t;

protected:
	void mousePressEvent(QMouseEvent* ev);
	void mouseMoveEvent(QMouseEvent* ev);
	void mouseReleaseEvent(QMouseEvent* ev);
	void mouseDoubleClickEvent(QMouseEvent* ev);
	void paintEvent(QPaintEvent*);
private:
	
	bool unfinished;
	bool start;
	bool leftdown;
};
