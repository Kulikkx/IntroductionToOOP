#include<iostream>
using namespace std;

class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
};

//#define STRUCT_POINT
void main()
{
	setlocale(LC_ALL, "");
#ifdef STRUCT_POINT

	cout<<"Hello OOP"<<endl;
	int a;   //Объявление переменной "а" типа "int"
	Point A; //Объявление переменной "А" структуры "Point"
			 //Создание объекта "А" структуры "Point"
			 //Создание экземпляра "А" структуры "Point"
	cout << sizeof(A);
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A; //Pointer to 'A'
	cout << pA->x << "\t" << pA->y << endl;
#endif // STRUC_POINT
	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;
}
