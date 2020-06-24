#include "movie.h"
#include <iostream>

int main(void){
	struct Product p;
	p.weight = 100;
	p.price = 99;
	printmovie(p);
	std::cout << "INSIDE MAIN \n" ;
	return 0;
}
