
#ifndef COLOR_HPP
#define COLOR_HPP

#include <iostream>

class Color{
protected:
	float R;
	float G;
	float B;  
public:
	Color();
	Color(float R, float G, float B);
	~Color();
	float getR() const;
	float getG() const;
	float getB() const;
	void print() const;
  
};
#endif
