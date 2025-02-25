#include <iostream>
#include <memory>
#include "SimpleFactory.h"

int main()
{
	printf("简单工厂模式\n");

	//! AbstractSportProduct 作为父类，派生多个子类。
	//! Factory 用于根据输入参数，返回不同的子类实例
	
	//定义工厂类对象
	std::shared_ptr<Factory> fac = std::make_shared<Factory>();
	// std::shared_ptr<AbstractSportProduct> product = std::shared_ptr<AbstractSportProduct>(fac->getSportProduct("Basketball"));
	std::shared_ptr<AbstractSportProduct> product = fac->getSportProduct("Basketball");
	
	fac = std::make_shared<Factory>();
	product = fac->getSportProduct("Football");
	// product = std::shared_ptr<AbstractSportProduct>(fac->getSportProduct("Football"));

	fac = std::make_shared<Factory>();
	product = fac->getSportProduct("Volleyball");	
	// product = std::shared_ptr<AbstractSportProduct>(fac->getSportProduct("Volleyball"));	
#ifdef win32
	system("pause");
#endif
	return 0;
}