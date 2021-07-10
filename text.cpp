#include<iostream>
using namespace std;

//class Base {
//public:
//	void fun(int a) {
//		cout << "A中的函数" << endl;
//	};
//};
//
//void fun(int a) {
//	cout << "三界之外的函数" << endl;
//}
//
//class son : public Base {
//public:
//	//隐藏父类的fun函数  与重写的区别在于父类函数是否为虚函数
//	void fun(int a) {
//		cout << "B中的函数" << endl;
//	}
//};
//
//int main()
//{
//	fun(2);
//	son s;
//	s.fun(2);
//	s.Base::fun(2);
//	return 0;
//}


//class Student {
//public:
//	//默认构造函数  无参数
//	Student() {
//		this->age = 20;
//		this->num = 1000;
//	};
//	
//	//初始化构造函数，有参数和参数列表
//	Student(int a, int n) :age(a), num(n) {};
//    
//	//拷贝构造函数，此处与编译器生成的一致
//	Student(const Student& s)
//	{
//		this->age = s.age;
//		this->num = s.num;
//	};
//
//	//转换构造函数，形参就是其他类型变量，且只有一个参数  用于将其他类型的变量隐式的转化为本类对象
//	/*Student(int r)
//	{
//		this->age = r;
//		this->num = 1202;
//	};*/
//
//	~Student(){}
//public:
//	int age;
//	int num;
//};
//
//int main()
//{
//	Student S1;
//	Student S2(21,1);
//	int a = 23;
//	int b = 1000;
//	Student S3(a,b);
//	Student S4(S3);
//	printf("S1 age:%d,num:%d\n", S1.age, S1.num);
//	printf("S2 age:%d,num:%d\n", S2.age, S2.num);
//	printf("S3 age:%d,num:%d\n", S3.age, S3.num);
//	printf("S4 age:%d,num:%d\n", S4.age, S4.num);
//	return 0;
//}
 
//重载 加法+ 运算符

class A {

};

int main()
{
    A a, b;
    A c;
    c = a + b;
}


