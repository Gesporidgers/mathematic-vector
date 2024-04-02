#pragma once
#include <math.h>
#include <string>
class mathVector
{
private: double x, y;
public: mathVector(double xx, double yy) : x(xx), y(yy) {}
	  mathVector() { x = 0; y = 0; }
	  inline double normalize() {
		  return sqrt(x * x + y * y);
	  }

	  inline mathVector operator*(double t) {
		  mathVector res(this->x * t, this->y * t);
		  return res;
	  }
	  
	  inline mathVector operator-(const mathVector& b) {
		  mathVector res(this->x - b.x, this->y - b.y);
		  return res;
	  }

	  inline mathVector operator+(const mathVector& b) {
		  mathVector res(this->x + b.x, this->y + b.y);
		  return res;
	  }

	  inline mathVector operator-() {
		  this->x = -(this->x);
		  this->y = -(this->y);
		  return *this;
	  }

	  inline double X() {
		  return x;
	  }
	  inline double Y() {
		  return y;
	  }
	  inline void X(double x) {
		  this->x = x;
	  }
	  inline void Y(double y) {
		  this->y = y;
	  }

	  inline std::string ToString() {
		  return "(" + std::to_string(x) + "," + std::to_string(y)+")";
	  }
};

