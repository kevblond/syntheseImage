//
// Created by [...] on 26/04/2016.
//

#ifndef PROJECT_VECTOR_HPP
#define PROJECT_VECTOR_HPP


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
        Vector operator=(const Vector &p);
	    Vector operator+(const Vector &p);
        Vector operator-(const Vector &p);
	    void print();
        float getX() const;
        float getY() const;
        float getZ() const;
};


#endif //PROJECT_Vector_HPP
