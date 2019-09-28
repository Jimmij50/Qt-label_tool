#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Label_tool2.h"
#include<opencv2/opencv.hpp>
#include<qfile.h>
#include<qfiledialog.h>
#include<qstring.h>
#include<qdebug.h>
#include<iostream>
#include<qstringlist.h>
#include<vector>
#include<qimage.h>
#include<qpixmap.h>
#include<cmath>
#include<qpainter.h>
#include<qtextstream.h>	
using namespace cv;
using namespace std;
class Label_tool2 : public QMainWindow
{
	Q_OBJECT

public:
	Label_tool2(QWidget *parent = Q_NULLPTR);

private:
	Ui::Label_tool2Class ui;
	int index;
	vector<string> imagepath;
	void readimg();
	void indexup();
	QString dir;
	void indexdown();
	void saveimg();
	Mat image;
	void paintEvent(QPaintEvent* E);
	void draw();
	QImage qimg;
	bool Label_tool2::eventFilter(QObject* watched, QEvent* event);
	void loadimg();
	void savexml();
	void getlabel();
};
