#include<iostream>
using namespace std;

//class Base {
//public:
//	void fun(int a) {
//		cout << "A�еĺ���" << endl;
//	};
//};
//
//void fun(int a) {
//	cout << "����֮��ĺ���" << endl;
//}
//
//class son : public Base {
//public:
//	//���ظ����fun����  ����д���������ڸ��ຯ���Ƿ�Ϊ�麯��
//	void fun(int a) {
//		cout << "B�еĺ���" << endl;
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
//	//Ĭ�Ϲ��캯��  �޲���
//	Student() {
//		this->age = 20;
//		this->num = 1000;
//	};
//	
//	//��ʼ�����캯�����в����Ͳ����б�
//	Student(int a, int n) :age(a), num(n) {};
//    
//	//�������캯�����˴�����������ɵ�һ��
//	Student(const Student& s)
//	{
//		this->age = s.age;
//		this->num = s.num;
//	};
//
//	//ת�����캯�����βξ����������ͱ�������ֻ��һ������  ���ڽ��������͵ı�����ʽ��ת��Ϊ�������
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
 
//���� �ӷ�+ �����

class A {

};

int main()
{
    A a, b;
    A c;
    c = a + b;
}


