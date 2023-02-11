#include "BuilderPattern.h"

//! 隔离客户与对象的生产过程，并负责控制产品对象的生产过程
//! 客户端只需指定具体建造者，并作为参数传递给指挥者，
//! 通过指挥者即可得到结果。客户端无需关心House的建造方法和具体流程。如果要更换建造风格，只需更换具体建造者即可，不同建造者之间并无任何关联，方便替换

int main()
{
	// 抽象建造者
	AbstractBuilder *builder;
	// 指挥者
	Director *director = new Director();
	// 产品：House
	House *house;

	// 指定具体建造者A
	builder = new ConcreteBuilderA();
	director->setBuilder(builder);
	house = director->construct();
	house->printfHouseInfo();
	delete builder;

	// 指定具体建造者A
	builder = new ConcreteBuilderB();
	director->setBuilder(builder);
	house = director->construct();
	house->printfHouseInfo();

	system("pause");

	delete director;
	delete builder;

	return 0;
}