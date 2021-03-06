#ifndef _TEXTLINE_H 
#define _TEXTLINE_H 

#include <opencv/cv.h>
#include <opencv2/core/core.hpp>

#include "manuscript_global.h"

using namespace cv ;

////////////////////////////////////////////////////////////////////////////////////////////////////
/// <summary>	Text line class extends a DImmage and hold the property of a text line </summary>
///
/// <remarks>	El Sana, 2/9/2012. </remarks>
////////////////////////////////////////////////////////////////////////////////////////////////////

class MANUSCRIPT_EXPORT TextLine {

protected:
	Mat             _image ;
	Rect            _rect ;
	vector<Point>* _upper;
	vector<Point>* _lower;

public:
	TextLine();
	~TextLine();

	Point getUpper(int index);
	Point getLower(int index);
	void setPoints(Point upper,Point lower);
	void setRect(int x,int y,int height,int width);
	void setUpperPoint(Point upper);
	void setUpperPoint(int x,int y);
	void removeUpperPoint(int index);
	void setLowerPoint(int x,int y);
	void setLowerPoint(Point lower);
	void removeLowerPoint(int index);
	Rect getRect();
	void setRect(Rect rect);
	vector<Point>* getUpperPoints(){return _upper;}
	vector<Point>* getLowerPoints(){return _lower;}

};

#endif 
