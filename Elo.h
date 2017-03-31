#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
class Elo {
 public:
	Elo(double a, double b);
        void setSa(double sa2, int m2);
	void setRa(double x  , double y, int num2);
	void setRb(double X, double Y, int num2);
	double getRa();
	double getRb();
	 
 private:
	double K;
        double Ra;
        double Rb;
        double Sa[6];
};


