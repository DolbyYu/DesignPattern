#include <iostream>
#include "AbstractFactory.h"

int main()
{
	//! 一个工厂不只是生产一种产品，而是生产一类产品。对生产同一类产品的工厂进行抽象
	
	AbstractFactory *fac = NULL;
	AbstractBall *ball = NULL;
	AbstractShirt *shirt = NULL;

	fac = new BasketballFactory();
	ball = fac->getBall();
	shirt = fac->getShirt();
	delete fac;
	delete ball;
	delete shirt;

	fac = new FootballFactory();
	ball = fac->getBall();
	shirt = fac->getShirt();
	delete fac;
	delete ball;
	delete shirt;

	system("pause");
	return 0;
}