//#include <stdio.h>
//
//namespace man// man�������ռ�����֣������Զ��壬ǰ��namespace�ǹؼ���
//{
//    struct MyStruct
//    {
//    };
//    void function(struct MyStruct* pms)
//    {
//        printf("�����ռ�\n");
//    }// ��������
//}
//
//namespace m = man;
//
//struct MyStruct
//{};
//void function(struct MyStruct* pms)
//{
//    printf("�����ռ�\n");
//}// ��������
//
//int main()
//{
//    struct MyStruct ms1;// ȫ�ֶ���
//
//	return 0;
//}

//namespace ms
//{
//	int age;
//	void function();  // ��������
//}
//
//// ������ �����
//#include <iostream>
//
//using std::cout;
//using std::endl;
//using std::cin;
//// ����ָ��չ���Ǵ���ģ�չ��ָ����ʶ��ֻ��Ҫʹ��using
////using namespace std::cout;
////using namespace std::endl;
//
//int main()
//{
//	int x = 8;
//	int y = 5;
//	std::cout << x << " + " << y << " = " << x + y << std::endl;
//
//	// ����ȡ
//	cin >> x >> y;// �Զ�ʶ��������Ҳ���Ҫ���ݱ�����C++�ж��󣩵ĵ�ַ��
//	cout << "x is " << x << endl << "y is " << y << endl;
//
//	return 0;
//}

//// ȱʡ����
//#include <iostream>
//
//using std::cout;
//using std::endl;
//
//void Fun(int a = 1)// int a = 1����ȱʡ�������������������������ʵ�ε�ʱ��ͻ�ʹ��ȱʡ���������ú���
//{
//	cout << a << endl;
//}
//
//void Fun1(int b, int a = 1)// ��ȱʡ
//{
//	cout << a << endl;
//}
//
//void Fun2(int b = 1, int a)// ����ģ�ȱʡ����Ӧ�ô����������Σ���������Ծ
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	Fun();// ���1
//	Fun(2);// ���2
//
//	return 0;
//}


// ��������

#include <iostream>

// ���غ���
void print(int num)
{
    std::cout << "Integer: " << num << std::endl;
}

void print(double num)
{
    std::cout << "Double: " << num << std::endl;
}

//int print(float num)
//{
//    std::cout << "Float: " << num << std::endl;
//}

// ������������Ҳ�������أ����ǵ��õ�ʱ����������
//void print()
//{
//    
//}
//
//void print(int a = 10)
//{
//
//}

//float print(float num) // ���󲻹��ɺ�������
//{
//    std::cout << "Float: " << num << std::endl;
//}

//int main()
//{
//    print(5);      // ���õ�һ�����غ���
//    print(3.14);   // ���õڶ������غ���
//    print(3.14f);  // ���õ��������غ���
//
//    return 0;
//}



//// ����
//
//#include <iostream>
//
//int main()
//{
//    int a = 10;
//    int& ref = a;// ���ñ����Ǹ�һ������ȡ������Ҳ�����൱�ڲ���ref�͵��ڲ���a
//    int& b = ref;// �������� ���á�����b��������a��������ref�����ò�ռ���ڴ�ռ�
//
//    const int c = 0;
//    //int& d = c;// ����ģ��������d������c��Ȩ�޷Ŵ��ˣ���Ϊ����˵�������ñ�����ȡ����������dҲ���ǲ���c����c��ֻ���ģ�dȴ���Զ�д������Ȩ�ޱ��Ŵ�
//
//    int f = 12;
//    const int& xf = f;// Ȩ�޵���С
//
//    const int h = 50;
//    int p = h;// ��ȷ�ģ���ֵ��ֵ�Ŀ���������ֻ�ǰ�h��ֵ50����ֵ��p��
//
//    return 0;
//}

//// ����������
//
//void increment(int& num)
//{
//    num++;
//}
//
//int main()
//{
//    int x = 5;
//    increment(x);
//    // ���� x ��ֵ��Ϊ 6
//    return 0;
//}

//// ����������������һ������
//void increment(int& num)
//{
//    num++;
//}
//
//int main()
//{
//    const int x = 5;
//    increment(x);// ����ģ�������Ȩ�޵ķŴ�Ӧ���ں�����������ͬ����Ϊ���ճ�����void increment(const int& num)
//    return 0;
//}

//// ����ת��
//
//
//int main()
//{
//    double d = 123.45;
//    int& b = d;// ����Ȩ�޵ķŴ�
//    const int& c = d;// ��ȷ����ʱ�����ǳ���������Ҫ�ó�����������
//
//    return 0;
//}

//// ��ʱ��������������
//int add(int a, int b)
//{
//    return a + b;
//}
//
//int main()
//{
//    int& ret = add(3 , 5);// ����ģ���������ֵ�����Ͷ�������ʱ�������ʱ����
//    const int& ret = add(3, 5);// ��ȷ��
//
//    int& sum = 3 + 5;// ����ģ����ʽ��ֵҲ�������ʱ����
//
//    // ������ֵ���û������ʱ������ʱû�������ٳ�����
//
//    int a = 10;
//    int& b = a;
//    int* p1 = &b;
//
//    return 0;
//}

//// ��������
//inline int add(int a, int b)
//{
//    return a + b;
//}
//
//int main()
//{
//    int c = add(3, 5);// add�������������չ��
//
//    return 0;
//}

//// auto
//using std::cout;
//using std::endl;
//
//int main()
//{
//    auto a = 0;// �Ƶ�a��int����
//    cout << a << endl;// 0
//    a = 1.34;// �޷��ı����a�����ͣ���Ϊauto�ؼ�������������ʱ����Զ��Ƶ�ȷ��������
//    cout << a << endl;// 1
//
//    return 0;
//}

// typeid

//#include <iostream>
//#include <typeinfo>
//
//int main()
//{
//    int a = 10;
//    const std::type_info& type = typeid(a);// ����typeid�ķ���ֵ��typeid���ص��Ǳ�����������Ϣ
//    std::cout << type.name() << std::endl; // ���int��ʹ����name�����鿴������
//    return 0;
//}

#include <iostream>
#include <typeinfo>

int main()
{
    int a = 10;
    double b = 10.5;
    if (typeid(a) == typeid(b))
    {
        std::cout << "a��b��ͬһ����" << std::endl;
    }
    else
    {
        std::cout << "a��b����ͬһ����" << std::endl;
    }
    return 0;
}

