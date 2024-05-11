//#include <stdio.h>
//
//namespace man// man是命名空间的名字，可以自定义，前面namespace是关键字
//{
//    struct MyStruct
//    {
//    };
//    void function(struct MyStruct* pms)
//    {
//        printf("命名空间\n");
//    }// 函数声明
//}
//
//namespace m = man;
//
//struct MyStruct
//{};
//void function(struct MyStruct* pms)
//{
//    printf("命名空间\n");
//}// 函数声明
//
//int main()
//{
//    struct MyStruct ms1;// 全局定义
//
//	return 0;
//}

//namespace ms
//{
//	int age;
//	void function();  // 函数声明
//}
//
//// 流插入 流输出
//#include <iostream>
//
//using std::cout;
//using std::endl;
//using std::cin;
//// 下面指定展开是错误的，展开指定标识符只需要使用using
////using namespace std::cout;
////using namespace std::endl;
//
//int main()
//{
//	int x = 8;
//	int y = 5;
//	std::cout << x << " + " << y << " = " << x + y << std::endl;
//
//	// 流提取
//	cin >> x >> y;// 自动识别变量而且不需要传递变量（C++叫对象）的地址。
//	cout << "x is " << x << endl << "y is " << y << endl;
//
//	return 0;
//}

//// 缺省参数
//#include <iostream>
//
//using std::cout;
//using std::endl;
//
//void Fun(int a = 1)// int a = 1就是缺省参数，当调用这个函数不传递实参的时候就会使用缺省参数来调用函数
//{
//	cout << a << endl;
//}
//
//void Fun1(int b, int a = 1)// 半缺省
//{
//	cout << a << endl;
//}
//
//void Fun2(int b = 1, int a)// 错误的，缺省参数应该从右向左依次，不可以跳跃
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	Fun();// 输出1
//	Fun(2);// 输出2
//
//	return 0;
//}


// 函数重载

#include <iostream>

// 重载函数
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

// 下面两个函数也构成重载，但是调用的时候会产生歧义
//void print()
//{
//    
//}
//
//void print(int a = 10)
//{
//
//}

//float print(float num) // 错误不构成函数重载
//{
//    std::cout << "Float: " << num << std::endl;
//}

//int main()
//{
//    print(5);      // 调用第一个重载函数
//    print(3.14);   // 调用第二个重载函数
//    print(3.14f);  // 调用第三个重载函数
//
//    return 0;
//}



//// 引用
//
//#include <iostream>
//
//int main()
//{
//    int a = 10;
//    int& ref = a;// 引用本质是给一个对象取别名，也就是相当于操作ref就等于操作a
//    int& b = ref;// 可以引用 引用。这样b操作的是a，而不是ref。引用不占用内存空间
//
//    const int c = 0;
//    //int& d = c;// 错误的，这里别名d将变量c的权限放大了，因为上面说过了引用本质是取别名，操作d也就是操作c但是c是只读的，d却可以读写，所以权限被放大
//
//    int f = 12;
//    const int& xf = f;// 权限的缩小
//
//    const int h = 50;
//    int p = h;// 正确的，赋值是值的拷贝，这里只是把h的值50，赋值给p。
//
//    return 0;
//}

//// 引用做参数
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
//    // 现在 x 的值变为 6
//    return 0;
//}

//// 引用做参数，传递一个常量
//void increment(int& num)
//{
//    num++;
//}
//
//int main()
//{
//    const int x = 5;
//    increment(x);// 错误的，这里是权限的放大，应该在函数参数哪里同样改为接收常引用void increment(const int& num)
//    return 0;
//}

//// 类型转换
//
//
//int main()
//{
//    double d = 123.45;
//    int& b = d;// 错误，权限的放大
//    const int& c = d;// 正确，临时变量是常量，所以要用常引用来引用
//
//    return 0;
//}

//// 临时变量的其他场景
//int add(int a, int b)
//{
//    return a + b;
//}
//
//int main()
//{
//    int& ret = add(3 , 5);// 错误的，函数返回值是类型而非引用时会产生临时变量
//    const int& ret = add(3, 5);// 正确的
//
//    int& sum = 3 + 5;// 错误的，表达式求值也会产生临时变量
//
//    // 函数传值调用会产生临时变量暂时没有能力举出例子
//
//    int a = 10;
//    int& b = a;
//    int* p1 = &b;
//
//    return 0;
//}

//// 内联函数
//inline int add(int a, int b)
//{
//    return a + b;
//}
//
//int main()
//{
//    int c = add(3, 5);// add函数体会在这里展开
//
//    return 0;
//}

//// auto
//using std::cout;
//using std::endl;
//
//int main()
//{
//    auto a = 0;// 推导a是int类型
//    cout << a << endl;// 0
//    a = 1.34;// 无法改变变量a的类型，因为auto关键字是在声明的时候就自动推导确定类型了
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
//    const std::type_info& type = typeid(a);// 引用typeid的返回值，typeid返回的是变量的类型信息
//    std::cout << type.name() << std::endl; // 输出int，使用其name方法查看其类型
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
        std::cout << "a和b是同一类型" << std::endl;
    }
    else
    {
        std::cout << "a和b不是同一类型" << std::endl;
    }
    return 0;
}

