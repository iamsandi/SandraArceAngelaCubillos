#include <iostream>
#include <fstream>
#include <math.h>

double f(double x){
 return exp(-pow(x,2));
}
double Derivative(double x){
    double h = 0.001;
    return (f(x+h)-f(x-h))/(2*h);
}

int main(){

	std::ofstream *File; 

	File = new std::ofstream[1]; 

	File[0].open( "DerivedData.dat.txt", std::ofstream::trunc ); 

	std::cout << File  << std::endl;

	for(double i = -20; i < 20; i+= 0.01 ){
		File[0] << i << " " << Derivative(i) << std::endl; 
	}


	File[0].close();
	return 0;

    