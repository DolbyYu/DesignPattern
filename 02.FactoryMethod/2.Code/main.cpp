#include <iostream>
#include "FactoryMethod.h"
#include <memory>

int main()
{
	printf("工厂方法模式\n");

	//! 简单工厂模式存在最大的问题是违背了“开闭原则”，每当增加新的产品时，需要修改工厂类的逻辑。
	//! 为了不修改工厂类，遵循开闭原则，工厂方法模式中不再使用工厂类统一创建所有的具体产品，而是针对不同的产品设计了不同的工厂，每一个工厂只生产特定的产品
	
	// 定义工厂类对象和产品类对象

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