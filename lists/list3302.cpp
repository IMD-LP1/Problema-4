#include <iostream>
#include <cmath>

class point
{
public:
	point() : point{0.0, 0.0} {}
	point(double x, double y) : angle_{x}, r_{y} {std::cout << "angle: " << angle_ << "\nr: " << r_ << std::endl; }
	point(point const&) = default;
	~point() { std::cout << "~point" << std::endl; } //destructor da classe point
	
	double angle() 		const { return angle_ ; }
	double distance() 	const { return r_ ; }

	double x() const { return distance() * std::cos(angle()) ; }
	double y() const { return distance() * std::sin(angle()) ; }
	
	
	void move_cartesian(double x, double y)
	{
		move_polar (std::sqrt((x*x) + (y*y)) , std::atan2(y,x)) ;
	}
	
	void move_polar(double r, double angle) 
	{
		angle_ = angle ;
		r_ = r ;
		std::cout << "angle: " << angle_ << "\nr: " << r_ << std::endl;
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
	double angle_ ;
	double r_ ;

	//double x_;
	//double y_;
};

int main() {
	point p1, p2;
	p1.move_cartesian(3, 5);
	
	std::cout << p1.distance() << std::endl;
	
	std::cout << "........\n" ;

	p1.move_polar(10, 60 ) ;
	std::cout << p1.distance() << std::endl;
		
}