#pragma once

class Rectangle
{
    private:
        double length, width;
    public:
        inline void setWidth(int widthEntry){
            Rectangle::width = widthEntry;
        }

        inline void setLength(int lengthEntry){
            Rectangle::length = lengthEntry;
        }

        inline int getWidth(){
            return width;
        }

        inline int getLength(){
            return length;
        }

        inline double getArea(){
            return (width * length);
        }

};