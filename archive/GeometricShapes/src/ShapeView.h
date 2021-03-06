/*
 * ShapeView.h
 * A class, named ShapeView, that wraps the string representation of a shape object into a string representation with bounding borders.
 *  Created on: Jun 10, 2010
 *      Author: gina
 */

#ifndef SHAPEVIEW_H_
#define SHAPEVIEW_H_

#include <string>
#include "Shape.h"
#include "Rectangle.h"

class ShapeView {
private:
	int fillType;
	char forground;
	char background;
	const Shape* shapeRecieved;
public:
	enum {FILLED, HALLOW, INFO};

	std::string drawBorders() const;
	/*
	 * Mutators
	 */
	void setFillType(int ft);
	void setForground(char fg);
	void setBackground(char bg);
	/*
	 * Constructors
	 */
	//The ShapeView class should have two constructors and should store a const pointer to the shape object it receives;
	void setShape(const Shape* shapeToDraw);
	ShapeView& operator=(const ShapeView & svIn);
	ShapeView& operator =(const Shape* shapeToDraw);

	ShapeView(const ShapeView & svIn);
	ShapeView(const Shape* shapeToDraw);
	ShapeView();
	virtual ~ShapeView();
};

#endif /* SHAPEVIEW_H_ */
