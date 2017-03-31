#include <iostream>
#include "Elo.h"
#include <cmath>
#include <fstream>


using namespace std;
int main()
{
    double initK, initRa, initRb, sa[6];
	
	ifstream inFile("infile.txt", ios::in);
	ofstream outFile("outfile.txt", ios::out);
	
	if(!inFile)
	{
		cerr<<"failed opening"<<endl;
		exit(1);
	}
	
	while(inFile>>initK>>initRa>>initRb>>sa[0]>>sa[1]>>sa[2]>>sa[3]>>sa[4]>>sa[5])
	{
		cout<<initK<<"\t"<<initRa<<"\t"<<initRb<<endl;
		for(int z = 0; z < 6; z++)
		{
			cout<<sa[z]<<endl;
		}
	}
	
	Elo rank(initRa,initRb);
        
        for(int m = 0; m < 6; m++)
		{
		    rank.setSa(sa[m], m);	
		}
		
		

	 
	int num = 0;

	for(int i = 0; i < 6; i++)
	{
	  double Ra2 = rank.getRa();
	  double Rb2 = rank.getRb();
     
	  rank.setRa(Ra2, Rb2, num);
      rank.setRb(Ra2, Rb2, num);
	  
	  num++;
	  
	  outFile<<rank.getRa()<<"\t"<<rank.getRb()<<endl;
	  
	  cout<<rank.getRa()<<"\t"<<rank.getRb()<<endl;
	
	  if(!outFile)
	  {
		  cerr<<"failed opening outfile.txt"<<endl;
		  exit(1);
      }
	
		
	}
	
	
	
	
}

