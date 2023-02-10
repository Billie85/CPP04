#include "../Animal.hpp"
#include "../Dog.hpp"
#include "../Cat.hpp"
#include "../Brain.hpp"

int main() 
{
	std::cout << "=========== Create ===========" << std::endl;
	Animal *test1[8]; //defaultが呼ばれるべき...
	for (size_t i = 0; i < 8; i++)
	{
		if (i < 8 / 2)
			test1[i] = new Cat;
		else
			test1[i] = new Dog;
	}

	std::cout << std::endl;
	std::cout << "=========== Sound test ===========" << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		std::cout << "Array-> " << i;
		test1[i]->makeSound();
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "=========== deep copy test 1(Cat) ===========" << std::endl;
	Cat *cat_1 = new Cat;
	std::cout << cat_1 << std::endl;
	std::cout << cat_1->getBrain() << std::endl;
	std::cout << std::endl;

	std::cout << "=========== deep copy test 2(Cat) ===========" << std::endl;
	Cat *cat = new Cat(*cat_1);//<-here
	std::cout << cat << std::endl;
	std::cout << cat->getBrain() << std::endl;
	std::cout << std::endl;


	std::cout << "=========== shallow copy test 1(cat) ===========" << std::endl;
	Cat *cat_2 = new Cat; //コピーコンストラクタが呼ばれない。
	Cat *cat_3 = cat_2;
	std::cout << cat_2 << std::endl;
	std::cout << cat_3 << std::endl;

	std::cout << "=========== shallow copy test 2(Cat) ===========" << std::endl;
	Cat *cat_4;
	cat_4 = new Cat; //operator=が呼ばれない。
	Cat *cat_5 = cat_4;
	std::cout << cat_4 << std::endl;
	std::cout << cat_5 << std::endl;


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "=========== deep copy test 1(Dog) ===========" << std::endl;
	Dog *Dog_1 = new Dog;
	std::cout << Dog_1 << std::endl;
	std::cout << Dog_1->getBrain() << std::endl;
	std::cout << std::endl;

	std::cout << "=========== deep copy test 2(Dog) ===========" << std::endl;
	Dog *Dog_ = new Dog(*Dog_1);//<-here
	std::cout << Dog_ << std::endl;
	std::cout << Dog_->getBrain() << std::endl;
	std::cout << std::endl;


	std::cout << "=========== shallow copy test 1(Dog) ===========" << std::endl;
	Dog *Dog_2 = new Dog;
	Dog *Dog_3 = Dog_2;
	std::cout << Dog_2 << std::endl;
	std::cout << Dog_3 << std::endl;

	std::cout << "=========== shallow copy test 2(Dog) ===========" << std::endl;
	Dog *Dog_4;
	Dog_4 = new Dog;
	Dog *Dog_5 = Dog_4;
	std::cout << Dog_4 << std::endl;
	std::cout << Dog_5 << std::endl;

	std::cout << std::endl;
	std::cout << "=========== Delete ===========" << std::endl;
	delete(cat_1);
	delete(cat);
	delete(cat_2);
	delete(cat_4);
	delete(Dog_1);
	delete(Dog_);
	delete(Dog_2);
	delete(Dog_4);
	for (size_t i = 0; i < 8; i++)
	{
		delete(test1[i]);
	}
	return 0;
}
