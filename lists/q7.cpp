#include <iostream>



class Vector {

public:
	Vector() : Vector{0 , nullptr} {}
	Vector(int t) : tam_{t} , elementos_ = new double[tam_] {}
	Vector(Vector const&) = default ;
	~Vector() : delete[] elementos , elementos = nullptr {std::cout << "Destrutor\n" ;}


	void vector_init (int t) {
		tam_ = t ;
		elementos_ = new double[tam_] ;	
	}

	void vector_read () {
		for (int ii{0} , ii < tam_ ; ii++) {
			std::cout << "Elemento[" << ii+1 << "]: " ;
			std::cin >> elementos_[ii] ;
		}
	}

	double vector_sum () {
		double soma{0} ;
		for (int ii{0} ; ii < tam_ ; ii++) {
			soma += elementos_[ii] ;
		}
		return soma ;
	}

	bool vector_find (int key) {
		for (int ii{0} ; ii < tam_ ; ii++) {
			if (elementos_[ii] == key) {
				return true ;
			}
		}
		return false ;
	}



private:
	int tam_ ;
	double *elementos_ ;
} ;

int main (int argc , char *argv[]) {
	int n{0} , chave{0} ;
	Vector vetor ;
	std::cout << "Quantos elementos sua lista armazenara ? " ;
	std::cin >> n ;

	vetor.vecto_init(n) ;
	vetor.vector_read() ;
	std::cout << "Soma dos elementos informados: " << vetor.vector_sum() << std::endl ;
	std::cout << "Informe a chave de busca: " ;
	std::cin >> chave ;
	if (vetor.vector_find(chave)) {
		std::cout << "Chave localizada!" << std::endl ;
	}
	else {
		std::cout <<"Chave nao localizada!" << std::endl ;
	}



	return EXIT_SUCCESS ;
}