#include "mylabel.h"

mylabel::mylabel(QWidget *parent)
	: QLabel(parent)
{
	unfinished = true;
	start=false;
	//this->setText(QString("123"));
	//this->setMouseTracking(true);
}

mylabel::~mylabel()
{
}
void mylabel::mousePressEvent(QMouseEvent* ev)
{
	if (ev->button() == Qt::LeftButton&&!start)
	{
		 x1 = ev->x();
		 y1 = ev->y();
		points1.push_back(mypoint(ev->x(), ev->y()));
		temp_rect.x = ev->x();
		temp_rect.y = ev->y();
		/*QString text = QString("<center><h3>Mouse Press:(%1,%2)</h3></center").arg(x1).arg(y1);
		this->setText(text);*/
		start = false;
		leftdown = false;
		unfinished = false;
		leftdown = true;
	}
	if (ev->button() == Qt::RightButton)
	{
		start = false;
	}
	QLabel::mousePressEvent(ev);

	
}

void mylabel::mouseMoveEvent(QMouseEvent* ev)
{
	if (leftdown)
	{
		x2 = ev->x();
		y2 = ev->y();
		
		QString text = QString("<center><h3>Mouse Press:(%1,%2)</h3></center").arg(x2).arg(y2);
		this->setText(text);
		start = true;
		
		
	}
	else return;
}

void mylabel::mouseReleaseEvent(QMouseEvent* ev)
{
	points2.push_back(mypoint(ev->x(), ev->y()));
	temp_rect.w = x2 - x1;
	temp_rect.h = y2 - y1;
	rect_t.push_back(temp_rect);
	leftdown = false;
	start = false;
}

void mylabel::mouseDoubleClickEvent(QMouseEvent* ev)
{
	/*unfinished = true;
	start = false;*/
}

void mylabel::paintEvent(QPaintEvent* E)
{
	QLabel::paintEvent(E);	
	QPainter p;
	p.begin(this);
	if (!rect_t.empty() )
	{
		std::vector<myrect> ::iterator it1;
		for (it1 = rect_t.begin(); it1 != rect_t.end(); it1++)
		{
			p.drawRect(it1->x, it1->y, it1->w, it1->h);
			p.drawText(it1->x, it1->y, QString::fromStdString(it1->getlabel()));
		}
	}
	p.drawText(x1, y1, QString::fromStdString(temp_rect.getlabel()));
	p.drawRect(x1, y1, x2-x1, y2-y1);
	
	p.end();
}