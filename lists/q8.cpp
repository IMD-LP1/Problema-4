#include <iostream>


class Matrix {

public:
	Matrix () {
		linha = 0 ;
		coluna = 0 ;
		elementos = nullptr ;
	}
	Matrix (int l , int c) {
		linha = l ;
		coluna = c ;

		elementos = new(std::nothrow) double*[linha] ;
		for (int ii {0} ; ii < linha ; ii++) {
			elementos[ii] = new(std::nothrow) double[coluna] ;
		}
	}

	Matrix(Matrix const&) = default ;
	~Matrix() {
		for (int ii{0} ; ii < linha ; ii++) {
			delete[] elementos[ii] ;
		}
		delete[] elementos ;
		elementos = nullptr ;
	}

	void read () {
		for (int ii{0} ; ii < linha ; ii++) {
			for (int jj{0} ; jj < coluna ; jj++) {
				std::cout << "M[" << ii << ", " << jj << "]: ";
				std::cin >> elementos[ii][jj]; 
			}
		}
	}

	void write () {
		for (int ii{0} ; ii < linha ; ii++) {
			for (int jj{0} ; jj < coluna ; jj++) {
				std::cout << elementos[ii][jj] << " " ;		 
			}
			std::cout << "\n" ;
		}
	}


	Matrix transpose () {
		Matrix m2(coulna,linha) ;
		for (int ii{0} ; ii < linha ; ii++) {
			for (int jj{0} ; jj < colunas ; j++) {
					
			}
		}
	}

	



private:
	int linha , coluna ;
	double **elementos ;
} ;




int main () {


	int linhas, colunas;

	// solicitar numero de linhas da matriz m1
	std::cout << "Informe o numero de linhas da matriz M: ";
	std::cin >> linhas;
	// solicitar numero de colunas da matriz m1
	std::cout << "Informe o numero de colunas da matriz M: ";
	std::cin >> colunas;
	// alocar matriz m1
	Matrix m1(linhas,colunas) ;

	// solicitar e ler valores da matriz m1
	std::cout << "Informar elementos da matriz M" << std::endl;
	m1.read();

	// escrever matriz m1 informada
	std::cout << "Matriz informada: " << std::endl;
	m1.write();

	// traspor e escrever a transposta m2
	std::cout << "Matriz transposta: " << std::endl;
	//matrix_transpose(m1, m2);
	//matrix_write(m2);


	return EXIT_SUCCESS;
}
