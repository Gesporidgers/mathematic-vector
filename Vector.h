#pragma once
#include <math.h>

class Vector
{
public:double x, y, z;
public:Vector(double xx, double yy, double zz) : x(xx), y(yy), z(zz) {};
	  
	  
	  inline Vector operator*(double k) {
		  Vector res(this->x * k, this->y * k, this->z * k);
		  return res;
	  }


	  inline Vector operator+(Vector& vec) {
		  Vector res(this->x + vec.x, this->y + vec.y, this->z + vec.z);
		  return res;
	  }

	  inline Vector operator-(Vector& vec) {
		  Vector res(this->x - vec.x, this->y - vec.y, this->z - vec.z);
	  }

	  inline double length() {
		  return (sqrt(x * x + y * y + z * z));
	  }

	  inline Vector normalize() {
		  double l = length();
		  Vector res(x / l, y / l, z / l);
		  return res;
	  }

	  inline Vector vectProd(Vector& vec) {
		  Vector res(y * vec.z - z * vec.y, z * vec.x - x * vec.z, x * vec.y - y * vec.x);
	  }
	  inline const double* toArr() {
		  double coords[3] = { x,y,z };
	  }
};

