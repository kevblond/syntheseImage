
#ifndef COLOR_HPP
#define COLOR_HPP

#include <iostream>

class Color{
  public:
	Color();
	Color(float R, float G, float B);
	~Color();
	float getR() const;
	float getG() const;
	float getB() const;
  private:
	float R;
	float G;
	float B;
};
#endif