<<<<<<< HEAD
#include <cmath>
#include <iostream>

struct point {

	double distance() {
		return std::sqrt(x*x + y*y) ;
	}

	double angle () {
		return std::atan2(y,x) ;
	}

	void offset (double off) {
		offset(off, off) ;
	}

	void offset(double xoff, double yoff) {
		x = x + xoff ;
		y = y + yoff ;
	}

	void scale (double mult) {
		this->scale (mult, mult) ;
	}

	void scale (double xmult, double ymult) {
		this->x = this->x * xmult ;
		this->y = this->y * ymult ;
	}


	double x ;
	double y ;
} ;


int main () {

	point ponto1 , ponto2 ;

	std::cout << "Informe as cordenadas do ponto 1 : " ;
	std::cin >> ponto1.x >> ponto1.y ;

	std::cout << "Informe as cordenadas do ponto 2 : " ;
	std::cin >> ponto2.x >> ponto2.y ;

	std::cout << "Distancia do ponto 1 : " << ponto1.distance() << " \n" ;
	std::cout << "Distancia do ponto 2 : " << ponto2.distance() << " \n" ;


	return EXIT_SUCCESS ;

=======
/** @file q2.cpp */
/** Listing 31-4. Member Funcitions for Class point */
#include <iostream>
#include <cmath>  // for str and atan
struct point
{
	/// Distance to the origin.
	double distance() 
	{
		return std::sqrt(x*x + y*y);
	}
	/// Angle relative to x-axis.
	double angle()
	{
		return std::atan2(x, y);
	}

	/// Add an offset to x and y.
	void offset(double off)
	{
		offset(off, off);
	}
	/// Add an offset to x and an offset to y
	void offset(double xoff, double yoff)
	{
		x = x + xoff;
		y = y + yoff;
	}

	/// Scale x and y.
	void scale(double mult)
	{
		this->scale(mult, mult);
	}
	// Scale x and y.
	void scale(double xmult, double ymult)
	{
		this->x = this->x * xmult;
		this->y = this->y * xmult;
	}
	double x;
	double y;
};

int main()
{
	point ponto1, ponto2;

	std::cout << "Informe as coordenadas do ponto 1: " << std::endl;
	std::cin >> ponto1.x >> ponto1.y;

	std::cout << "Informe as coordenadas do ponto 2: " << std::endl;
	std::cin >> ponto2.x >> ponto2.y;

	std::cout << "Distancia dos pontos 1: " << ponto1.distance() << std::endl;
	std::cout << "Distancia dos pontos 2: " << ponto2.distance() << std::endl;

	ponto2.distance();

	
>>>>>>> 15167878551b2b4b9dc1dff10189a9308ffa80e6
}