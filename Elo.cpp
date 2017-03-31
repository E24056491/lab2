#include "Elo.h"
#include <cmath>
#include <iostream>
#include <fstream>


	ELo::Elo(double a, double b)
	{
		Ra = a;
		Rb = b;
	        K = 32;
		   
	}
      
	void Elo::setSa(double sa2, int m2)
         { 
	    
	        Sa[m2] = sa2;
	 }
	 
	 
	  
	 void Elo::setRa(double x  , double y, int num2)
	 {
	 	Ra = x + K*(Sa[num2] - pow(1 + pow(10, (y - x)/400), -1));
	 }
	
	 void ELO::setRb(double X, double Y, int num2)
	 {
	 	Rb = Y + K*((1-Sa[num2]) - pow(1 + pow(10, (X - Y)/400), -1));
	 }
	 double ELO::getRa()
	 {
	 	return Ra;
	 }
	double ELO::getRb()
	 {
	 	return Rb;
	 }
	 


