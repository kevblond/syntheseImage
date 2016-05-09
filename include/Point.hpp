//
// Created by [...] on 26/04/2016.
//

#ifndef PROJECT_POINT_HPP
#define PROJECT_POINT_HPP

#define SQR(a) a*a

#include <iostream>

class Point {
    protected:
        float x;
        float y;
        float z;
    public:
        Point(void);
        Point(float x, float y, float z);

        ~Point();
        bool operator==(const Point &p);
        bool operator!=(const Point &p);
        Point &operator=(const Point &p);
	void print(void) const;
        float getX() const;
        float getY() const;
        float getZ() const;
        float sqrDist(const Point &p);
};


#endif //PROJECT_POINT_HPP
