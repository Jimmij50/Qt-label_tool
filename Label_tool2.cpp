#include "Label_tool2.h"
#include"utilities.h"
Label_tool2::Label_tool2(QWidget *parent)
	: QMainWindow(parent)
{
	index = 0;
	ui.setupUi(this);
	ui.img_label->setScaledContents(true);
	ui.img_label->installEventFilter(this);
	//this->resize(800 , 600);
	connect((ui.b_open), &QPushButton::clicked, this,
		[=]() {
			imagepath.clear();
			QStringList path = QFileDialog::getOpenFileNames(this, "Images", "../", "Images(*.png *.jpg)");
			imagepath = qlist2vect(path);
			if (!(imagepath.empty()))
			{
				readimg();
				update();
			}
				//ui.pushButton_2->setText(path);
		});
	connect(ui.b_next, &QPushButton::clicked, this, &Label_tool2::indexup);
	connect(ui.b_previous, &QPushButton::clicked, this, &Label_tool2::indexdown);
	//connect(ui.b_show, &QPushButton::clicked, this, &Label_tool2::showimg);
	connect(ui.b_savedir, &QPushButton::clicked, this, [=]()
		{
			dir = QFileDialog::getExistingDirectory(
				this, "choose src Directory",
				"/");
			ui.text->setText(dir);
		});
	connect(ui.b_saveimg, &QPushButton::clicked, this, [=]()
		{
			saveimg();
		savexml(); 
		});
	connect(ui.label_edit, &QLineEdit::editingFinished, this, &Label_tool2::getlabel);
	
}

void Label_tool2::readimg()
{
	if ((imagepath.empty()))
		return;
	else
	{
		image = cv::imread(Label_tool2::imagepath[index]);
		cv::cvtColor(image, image, CV_BGR2RGB);
		//cv::resize(image, image, cv::Size(300, 200));
		double scale = (400.0 / image.rows);
		scale = round(scale * 10) / 10;
		cv::resize(image, image, cv::Size(), scale, scale);
		qimg = QImage((const unsigned char*)(image.data), image.cols, image.rows, QImage::Format_RGB888);
		ui.img_label->resize(QSize(qimg.width(), qimg.height()));
		//ui.img_label->setPixmap(QPixmap::fromImage(qimg));
		//draw();
	}
}
void Label_tool2::indexup()
{
	if (index == (Label_tool2::imagepath.size() - 1)) return;
	else {
		index++;
		readimg();
		update();
	}
	
}
void Label_tool2::indexdown()
{
	if (index == 0) return;
	else
	{
		index--;
		readimg();
		update();
	}
}
void Label_tool2::saveimg()
{
	if ((dir!=NULL)&& !(imagepath.empty()))
	{
		Mat image_bgr;
		//cv::cvtColor(image, image_rgb, CV_BGR2RGB);
		cv::cvtColor(image, image_bgr, CV_BGR2RGB);
		ui.text->setText(dir);
		imwrite(dir.toStdString() + "./" + std::to_string(index) + ".jpg", image_bgr);
	}
	
	

}
bool Label_tool2::eventFilter(QObject* watched, QEvent* event)   //用过滤器eventFilter（）拦截QLabel中的QEvent::Paint事件
{
	if (watched == ui.img_label && event->type() == QEvent::Paint)
		draw();

	return QWidget::eventFilter(watched, event);
}
void Label_tool2::loadimg()
{


}
void Label_tool2::paintEvent(QPaintEvent* E)
{
	//QPainter p;
	//p.begin(&qimg);
	////p.drawPixmap(0, 0, ui.img_label->width(), ui.img_label->height(), QPixmap::fromImage(qimg));
	//p.drawRect(1, 1, 100, 100);
	//p.end();
	//Mat tt= cv::imread(Label_tool2::imagepath[index]);
	//cv::cvtColor(tt, tt, CV_BGR2RGB);
	////cv::resize(image, image, cv::Size(300, 200));
	//double scale = (400.0 / tt.rows);
	//scale = round(scale * 10) / 10;
	//cv::resize(tt, tt, cv::Size(), scale, scale);
	//QImage qa = QImage((const unsigned char*)(tt.data), tt.cols, tt.rows, QImage::Format_RGB888);
	//QPainter p2;
	//p2.begin(this);
	//p2.drawRect(1, 1, 100, 100);
	//p2.drawImage(QPoint(0, 0), qa);
	//p2.end();

}
void Label_tool2::draw()
{
	QPainter p;
	p.begin(ui.img_label);
	//p.begin(this);
	p.drawImage(QPoint(0,0), qimg);
	//p.drawRect(1, 1, 100, 100);
	p.end();

}
void Label_tool2:: savexml()
{
	QFile file;
	//file.setFileName(QString::fromStdString(dir.toStdString() + "./" + std::to_string(index) + ".txt"));
	file.setFileName("../demo.xml");
	bool isOk = file.open(QIODevice::WriteOnly);
	vector<myrect>* p_rect;
	p_rect = &(ui.img_label->rect_t);
	if (!(p_rect)->empty()&&true==isOk);
	{
		QTextStream stream(&file);
		
		vector<myrect>::iterator it;
		for (it = p_rect->begin(); it != p_rect->end(); it++)
		{
			stream <<QString::fromStdString(it->label)<<(it->x)<<"\n";
		}
		file.close();
	}

}

void Label_tool2::getlabel()
{
	QString current_label=ui.label_edit->text();
	ui.img_label->temp_rect.setlabel(current_label.toStdString());
	ui.text->setText(current_label);
}
