#include <iostream>

//// �������
//class Car// ʹ�ùؼ���class������һ���࣬class ����
//{
//	/* �˴���д��Ա�����ͳ�Ա���� */
//
//	// ��Ա����
//	int colour;// ��ɫ
//	char* brand;// Ʒ��
//	double model;// �ͺ�
//
//	// ��Ա����
//	void Strat_Up(void)
//	{
//		/* ������ */
//	}
//
//	void Stop_Down(void)
//	{
//		/* ������ */
//	}
//
//	void Speed_Up(void)
//	{
//		/* ������ */
//	}
//};
//
//
//int main()
//{
//	// ͨ���ഴ������
//	Car car1;// ����һ����Ϊcar1��Car���͵Ķ���
//	Car car2;// ������һ����Ϊcar2��Car���͵Ķ���
//
//	car1.colour = 0;// ���� ��Ա�޷�����
//
//	return 0;
//}

//// �����޶���
//class MyClass
//{
//public:
//	int a;// ������
//	int c;// ������
//
//	void SetB(int x)// ������
//	{
//		b = x;
//	}
//private:
//	int b;// ˽�е�
//protected:
//	int x;// �ܱ�����
//
//	int Sum(void)// �ܱ�����
//	{
//		return b + x;// ����ڲ�����ֱ�ӷ���˽�к��ܱ����ģ������棬�������ഴ���Ķ����޷�����
//	}
//};
//
//int main()
//{
//	MyClass mc;
//
//	mc.a = 0;// ��ȷ������Ȩ�޵ĳ�Ա������������ط�����
//	//mc.b = 1;// ����˽�г�Աֻ���������ڲ�����
//	//mc.Sum();// �����ܱ�����Աֻ�������������������ڲ�����
//	mc.SetB(10);// ��ȷ�ģ���������ⲿ�޸�˽�г�Ա�ķ���
//
//	return 0;
//}


// ��������Ͷ�����룬��ϸ��class.h��class.cpp


//// thisָ��
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
//	d1.Prnt();// ��� 2024-5-11
//	d2.Prnt();// ��� 2024-5-12
//}

// ���캯��

//class MyClass
//{
//public:
//	MyClass()// Ĭ�Ϲ��캯��
//	{
//		/* ��ʼ������ */
//	}
//
//	MyClass(int val)// ���ع��캯�������ι��캯��
//	{
//		std::cout << "MyClass(int val)" << std::endl;
//	}
//
//	MyClass(int val, char val2 = 2)// ��ι��캯��������ȱʡ����
//	{
//		/* ��ʼ������ */
//		std::cout << "MyClass(int val, char val2 = 2)" << std::endl;
//	}
//
//	~MyClass()// Ĭ����������,��������ֻ������һ��������û�з������ͺͲ���
//	{
//
//	}
//};
//
//
//int main()
//{
//	MyClass mc1;// �޲ι��캯��
//	//MyClass mc2();// ����ģ�����û�а취�ͺ����������ֿ�
//
//	MyClass mc3(0, 1);// ��ι��캯��
//	// �������� MyClass mc4(10);// ���ι��캯��
//
//	return 0;
//}


//// ������Ĭ�����ɵĹ��캯������
//class MyClass
//{
//public:
//	MyClass(int val = 2)// ���ι��캯��,���������캯����ȫȱʡ�Ͳ��ᱨ��
//	{
//		std::cout << "MyClass(int val)" << std::endl;
//	}
//
//	~MyClass()// Ĭ����������,��������ֻ������һ��������û�з������ͺͲ���
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
//	MyClass2 mc1;// �޲ι��캯��
//
//	return 0;
//}

//// �������ͳ�Ա����ȱʡֵ
//
//class MyClass
//{
//public:
//	// һ���Ա������Ҫ����������룬����ֱ�Ӷ��������ڲ���
//	MyClass()// Ĭ�Ϲ��캯��
//	{
//		_c = 10;// ��_c��ʼ����10
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
//	// �����ʼ��ʱ��û�и���ֵ�ͻ�ʹ��ȱʡֵ��ʼ��
//	int _c = 0;
//	int _d = 1;
//	char _e = 2;
//};
//
//int main()
//{
//	MyClass mc;// ����Ĭ�Ϲ��캯��
//
//	std::cout << mc.GetC() << std::endl;// 10
//	std::cout << mc.GetD() << std::endl;// 1
//	std::cout << mc.GetE() << std::endl;// 2
//
//	return 0;
//}

//// �������캯��
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
//MyClass::MyClass()// Ĭ�Ϲ��캯��
//{
//	_val1 = 10;
//	_val2 = 10;
//}
//
//MyClass::~MyClass()// Ĭ����������
//{
//
//}
//
//MyClass::MyClass(const MyClass& other)// �������캯��
//{
//	// ��ʽ���忽�����캯��,�����ǿ������캯��ִ�еĲ���
//	_val1 = other._val1;
//	_val2 = other._val2;
//}
//
//int MyClass::GetVal(int x)
//{
//	if (x > 2 || x < 1)
//	{
//		std::cout << "��������" << std::endl;
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
//	// ���������������ö���
//	MyClass mc2(mc1);// ���ÿ������캯��
//	MyClass mc3 = mc1;// ���ÿ������캯��
//
//	std::cout << mc1.GetVal(1) << std::endl;
//	std::cout << mc1.GetVal(2) << std::endl;
//
//	std::cout << mc2.GetVal(1) << std::endl;
//	std::cout << mc2.GetVal(2) << std::endl;
//
//	return 0;
//}

//// ���������
//
//class MyClass
//{
//public:
//
//	int operator+(const MyClass& mc);// ��Ա���������������
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
//	// ��Ա��������һ��Ĭ�ϵ����ز�����this����һ����������thisָ�룬�㴫�ݵ�ʵ���е�һ���ͻᴫ�ݸ�thisָ�롣
//	return _a + mc._a;
//}
//
//// ȫ��+�����������
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
//	std::cout << mc1 + mc2 << std::endl;// ���ó�Ա��������ʱ���mc1���ݸ�this����mc2���ݸ���ʽ�ĵ�һ������
//	std::cout << mc1.operator+(mc2) << std::endl;// ������д��������������ǵ������������һ�㲻����д.������mc1�������Ա����operator+�������ǽ�mc1���ݸ�this
//	std::cout << 1 + 2 << std::endl;// ��������������͵�Ч������ԭ���������Ч��
//	return 0;
//}

// ������ֵ�����

class MyClass
{
public:
	MyClass& operator=(const MyClass& mc);// ������ֵ�����

private:

};

MyClass& MyClass::operator=(const MyClass& mc)
{
	/* ִ�и�ֵ���� */
	if (this != &mc)// �������Ҹ�ֵ�����
	{
		/* ִ�и�ֵ���� */
	}

	return *this;// ���ؽ�����thisָ��
}
