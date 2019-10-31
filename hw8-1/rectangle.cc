#include "rectangle.h"
#include <iostream>
#include <stdio.h>

Rectangle::Rectangle(int width, int height){
	w = width;
	h = height;
}
int Rectangle::getArea(){
	return w*h;
}
int Rectangle::getPerimeter(){
	return 2*(w+h);
}
Square::Square(int width):Rectangle(width,width){
	
}
void Square::print(){
	printf("%dx%d Square\n",w,w);
	printf("Area: %d\n",getArea());
	printf("Perimeter: %d\n",getPerimeter());
}
NonSquare::NonSquare(int width, int height):Rectangle(width,height){
}
void NonSquare::print(){
	printf("%dx%d NonSquare\n",w,h);
        printf("Area: %d\n",getArea());
        printf("Perimeter: %d\n",getPerimeter());
}
		
