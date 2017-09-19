/** @file list3301.cpp */
/** Listing 33-1. The point Class with Access Level Specifiers */
#include <iostream>
#include <cmath>

struct point
{
public:
	point() : point{0.0, 0.0} {}
	point(double x, double y) : x_{x}, y_{y} {std::cout << "x: " << x_ << "\ny: " << y_ << std::endl; }
	point(point const&) = default;
	~point() { std::cout << "~point" << std::endl; } //destructor da classe point
	
	double x() const { return x_; }
	double y() const { return y_; }
	
	double angle() 		const { return std::atan2(y(), x()); }
	double distance() 	const { return std::sqrt(x()*x() + y()*y()); }
	
	void move_cartesian(double x, double y)
	{
		x_ = x;
		y_ = y;
		std::cout << "x: " << x_ << "\ny: " << y_ << std::endl;
	}
	
	void move_polar(double r, double angle) 
	{
		move_cartesian(r * std::cos(angle), r * std::sin(angle));
	}
	
	void scale_cartesian(double s) 		{ scale_cartesian(s, s); }
	void scale_cartesian(double xs, double ys)
	{
		move_cartesian(x() * xs, y() * ys);
	}
	
	void scale_polar(double r)			{ move_polar(distance() * r, angle()); }
	void rotate(double a)				{ move_polar(distance(), angle() + a); }
	void offset(double o)				{ offset(o, o); }
	void offset(double xo, double yo ) 	{ move_cartesian(x() + xo, y() + yo); }
	
private:
	double x_;
	double y_;
};

int main() {
	point p1, p2;
	p1.move_cartesian(3, 5);
	

	std::cout << p1.distance() << std::endl;
		
}
