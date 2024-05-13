#include <iostream>

//// 类的声明
//class Car// 使用关键字class来声明一个类，class 类名
//{
//	/* 此处填写成员变量和成员函数 */
//
//	// 成员变量
//	int colour;// 颜色
//	char* brand;// 品牌
//	double model;// 型号
//
//	// 成员函数
//	void Strat_Up(void)
//	{
//		/* 函数体 */
//	}
//
//	void Stop_Down(void)
//	{
//		/* 函数体 */
//	}
//
//	void Speed_Up(void)
//	{
//		/* 函数体 */
//	}
//};
//
//
//int main()
//{
//	// 通过类创建对象
//	Car car1;// 创建一个名为car1的Car类型的对象
//	Car car2;// 创建另一个名为car2的Car类型的对象
//
//	car1.colour = 0;// 错误 成员无法访问
//
//	return 0;
//}

//// 访问限定符
//class MyClass
//{
//public:
//	int a;// 公开的
//	int c;// 公开的
//
//	void SetB(int x)// 公开的
//	{
//		b = x;
//	}
//private:
//	int b;// 私有的
//protected:
//	int x;// 受保护的
//
//	int Sum(void)// 受保护的
//	{
//		return b + x;// 类的内部可以直接访问私有和受保护的，类外面，包括用类创建的对象都无法访问
//	}
//};
//
//int main()
//{
//	MyClass mc;
//
//	mc.a = 0;// 正确，公开权限的成员变量可以任意地方访问
//	//mc.b = 1;// 错误，私有成员只可以在类内部访问
//	//mc.Sum();// 错误，受保护成员只可以在派生类或者类的内部访问
//	mc.SetB(10);// 正确的，这个就是外部修改私有成员的方法
//
//	return 0;
//}


// 类的声明和定义分离，详细见class.h和class.cpp


//// this指针
//
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//
//	void Prnt(void)
//	{
//		std::cout << this->_year << "-" << this->_month << "-" << this->_day << std::endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2;
//
//	d1.Init(2024, 5, 11);
//	d2.Init(2024, 5, 12);
//
//	d1.Prnt();// 输出 2024-5-11
//	d2.Prnt();// 输出 2024-5-12
//}

// 构造函数

//class MyClass
//{
//public:
//	MyClass()// 默认构造函数
//	{
//		/* 初始化代码 */
//	}
//
//	MyClass(int val)// 重载构造函数，带参构造函数
//	{
//		std::cout << "MyClass(int val)" << std::endl;
//	}
//
//	MyClass(int val, char val2 = 2)// 多参构造函数，带有缺省参数
//	{
//		/* 初始化代码 */
//		std::cout << "MyClass(int val, char val2 = 2)" << std::endl;
//	}
//
//	~MyClass()// 默认析构函数,析构函数只可以有一个，而且没有返回类型和参数
//	{
//
//	}
//};
//
//
//int main()
//{
//	MyClass mc1;// 无参构造函数
//	//MyClass mc2();// 错误的，这样没有办法和函数声明区分开
//
//	MyClass mc3(0, 1);// 多参构造函数
//	// 调用歧义 MyClass mc4(10);// 带参构造函数
//
//	return 0;
//}


//// 编译器默认生成的构造函数分析
//class MyClass
//{
//public:
//	MyClass(int val = 2)// 带参构造函数,如果这个构造函数是全缺省就不会报错
//	{
//		std::cout << "MyClass(int val)" << std::endl;
//	}
//
//	~MyClass()// 默认析构函数,析构函数只可以有一个，而且没有返回类型和参数
//	{
//
//	}
//};
//
//class MyClass2
//{
//public:
//
//private:
//	MyClass _mc1;
//};
//
//int main()
//{
//	MyClass2 mc1;// 无参构造函数
//
//	return 0;
//}

//// 内置类型成员变量缺省值
//
//class MyClass
//{
//public:
//	// 一般成员函数需要声明定义分离，这里直接定义在类内部了
//	MyClass()// 默认构造函数
//	{
//		_c = 10;// 将_c初始化成10
//	}
//
//	int GetC(void)
//	{
//		return _c;
//	}
//
//	int GetD(void)
//	{
//		return _d;
//	}
//
//	int GetE(void)
//	{
//		return _e;
//	}
//
//private:
//	// 如果初始化时候没有给定值就会使用缺省值初始化
//	int _c = 0;
//	int _d = 1;
//	char _e = 2;
//};
//
//int main()
//{
//	MyClass mc;// 调用默认构造函数
//
//	std::cout << mc.GetC() << std::endl;// 10
//	std::cout << mc.GetD() << std::endl;// 1
//	std::cout << mc.GetE() << std::endl;// 2
//
//	return 0;
//}

//// 拷贝构造函数
//
//class MyClass
//{
//public:
//	MyClass();
//	MyClass(const MyClass& other);
//	~MyClass();
//
//	int GetVal(int x);
//
//private:
//	int _val1 = 0;
//	int _val2 = 5;
//
//};
//
//MyClass::MyClass()// 默认构造函数
//{
//	_val1 = 10;
//	_val2 = 10;
//}
//
//MyClass::~MyClass()// 默认析构函数
//{
//
//}
//
//MyClass::MyClass(const MyClass& other)// 拷贝构造函数
//{
//	// 显式定义拷贝构造函数,下面是拷贝构造函数执行的操作
//	_val1 = other._val1;
//	_val2 = other._val2;
//}
//
//int MyClass::GetVal(int x)
//{
//	if (x > 2 || x < 1)
//	{
//		std::cout << "参数错误" << std::endl;
//		return 0;
//	}
//	else if (x == 1)
//	{
//		return _val1;
//	}
//	else
//	{
//		return _val2;
//	}
//}
//
//int main()
//{
//	MyClass mc1;
//	// 下面两个方法调用都对
//	MyClass mc2(mc1);// 调用拷贝构造函数
//	MyClass mc3 = mc1;// 调用拷贝构造函数
//
//	std::cout << mc1.GetVal(1) << std::endl;
//	std::cout << mc1.GetVal(2) << std::endl;
//
//	std::cout << mc2.GetVal(1) << std::endl;
//	std::cout << mc2.GetVal(2) << std::endl;
//
//	return 0;
//}

//// 运算符重载
//
//class MyClass
//{
//public:
//
//	int operator+(const MyClass& mc);// 成员函数，运算符重载
//	
//	int GetA(void)
//	{
//		return _a;
//	}
//
//	int GetB(void)
//	{
//		return _b;
//	}
//
//private:
//	int _a = 10;
//	int _b = 0;
//};
//
//int MyClass::operator+(const MyClass& mc)
//{
//	// 成员函数都有一个默认的隐藏参数，this。第一个参数就是this指针，你传递的实参中第一个就会传递给this指针。
//	return _a + mc._a;
//}
//
//// 全局+号运算符重载
////int operator+(const MyClass& mc1, MyClass& mc2)
////{
////	return mc1.GetA() + mc2.GetA();
////}
//
//int main()
//{
//	MyClass mc1;
//	MyClass mc2;
//
//	std::cout << mc1 + mc2 << std::endl;// 调用成员函数，此时会把mc1传递给this，把mc2传递给显式的第一个参数
//	std::cout << mc1.operator+(mc2) << std::endl;// 还可以写成这样，这个就是调用这个函数，一般不这样写.这里是mc1调用其成员函数operator+，这里是将mc1传递给this
//	std::cout << 1 + 2 << std::endl;// 运算符对内置类型的效果还是原来运算符的效果
//	return 0;
//}

// 拷贝赋值运算符

class MyClass
{
public:
	MyClass& operator=(const MyClass& mc);// 拷贝赋值运算符

private:

};

MyClass& MyClass::operator=(const MyClass& mc)
{
	/* 执行赋值操作 */
	if (this != &mc)// 避免自我赋值的情况
	{
		/* 执行赋值操作 */
	}

	return *this;// 返回解引用this指针
}
