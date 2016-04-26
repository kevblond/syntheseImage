//
// Created by [...] on 26/04/2016.
//

#ifndef PROJECT_POINT_HPP
#define PROJECT_POINT_HPP

#define SQR(a) a*a

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
        Point operator=(const Point &p);
        float getX() const;
        float getY() const;
        float getZ() const;
        int sqrDist(const Point &p);
};


#endif //PROJECT_POINT_HPP
