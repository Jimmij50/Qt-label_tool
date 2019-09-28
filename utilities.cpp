#include"utilities.h"
vector<string> qlist2vect(QStringList path)
{
	vector<string> re;
	//QStringListIterator a=path.begin;
	for (auto& a : path)
	{
		re.push_back(a.toStdString());
	}
	return re;
}

Mat openImg(vector<string> imgpath, int i)
{


	Mat temp = imread(imgpath[i]);
	imshow("te", temp);
	return temp;
	

}
