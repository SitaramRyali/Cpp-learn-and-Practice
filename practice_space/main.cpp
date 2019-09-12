#include <iostream>
#include "gaussian.h"
using namespace std;


int main ()
{


//	Gaussian mygaussian(30.0,100.0);
//	Gaussian othergaussian(10.0,25.0);

//	std::cout << "average " << mygaussian.getMu() << std::endl;
//	std::cout << "evaluation " << mygaussian.evaluate(15.0) << std::endl;
//
//	std::cout << "mul results variance " << mygaussian.mul(othergaussian).getSigma2() << std::endl;
//	std::cout << "mul results average " << mygaussian.mul(othergaussian).getMu() << std::endl;
//
//	std::cout << "add results variance " << mygaussian.add(othergaussian).getSigma2() << std::endl;
//	std::cout << "add results average " << mygaussian.add(othergaussian).getMu() << std::endl;


	Gaussian gaussianone(40.0,225.0);
	Gaussian gaussiantwo(35.6,12.25);
	cout<<"PDF for guassian1 when x = 10.5 is:  "<< gaussianone.evaluate(10.5) << "\n";
	cout<<"PDF for guassian1 when x = 55.4 is:  "<< gaussianone.evaluate(55.4) << "\n";
	cout<<"PDF for guassian1 when x = 35.6 is:  "<< gaussianone.evaluate(35.6) << "\n";
	cout<<"PDF for guassian1 when x = 29.4 is:  "<< gaussianone.evaluate(29.4) << "\n";

	gaussianone.setMu(45.0);
	gaussiantwo.setSigma2(15.4);
	cout<<"guassian1 changed mean: "<<gaussianone.getMu()<<endl;
	cout<<"guassian2 changed variance is : "<<gaussiantwo.getSigma2()<<endl;

	Gaussian gaussianthree(gaussianone.mul(gaussiantwo));
	Gaussian gaussianfour(gaussianone.add(gaussiantwo));

	cout<<"mean and variance of gaussianthree is: "<<gaussianthree.getMu()<<gaussianthree.getMu()<<endl;
	cout<<"mean and variance of gaussianfour is: "<<gaussianfour.getMu()<<gaussianfour.getMu()<<endl;




	return 0;
}
