//
// Created by [...] on 26/04/2016.
//

#ifndef PROJECT_VECTOR_HPP
#define PROJECT_VECTOR_HPP

#define SQR(a) ((a)*(a))

#include <cmath>
#include <iostream>

class Vector {
    protected:
        float x;
        float y;
        float z;
    public:
        Vector(void);
        Vector(float x, float y, float z);

        ~Vector();
        bool operator==(const Vector &p);
        bool operator!=(const Vector &p);
        Vector &operator=(const Vector &p);
	    Vector &operator+(const Vector &p);
        Vector &operator-(const Vector &p);
	    void print(void) const;
        float getX() const;
        float getY() const;
        float getZ() const;
        float scalarProduct(const Vector &p);
        float getNorme();
};


#endif //PROJECT_Vector_HPP
