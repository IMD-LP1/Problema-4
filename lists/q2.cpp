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

}