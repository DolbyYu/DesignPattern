#include <iostream>
#include "FactoryMethod.h"
#include <memory>

int main()
{
	printf("��������ģʽ\n");
	
	//���幤�������Ͳ�Ʒ�����
	
	std::shared_ptr<AbstractFactory> fac = make_shared<BasketballFactory>();
	std::shared_ptr<AbstractSportProduct> product = std::shared_ptr<AbstractSportProduct>(fac->getSportProduct());

	fac = make_shared<FootballFactory>();
	// product = std::shared_ptr<AbstractSportProduct>(fac->getSportProduct());
	product = std::shared_ptr<AbstractSportProduct>(fac->getSportProduct());
	
	fac = make_shared<VolleyballFactory>();
	product = std::shared_ptr<AbstractSportProduct>(fac->getSportProduct());	
	
	system("pause");
	return 0;
}