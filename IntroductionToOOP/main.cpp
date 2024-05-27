#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define delimiter "\n-------------------------------\n"

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

	// Constructors

	Point()
	{
		x = y = 0;
		cout << "DefaultConstructor:\t" << this << endl;
	}
	Point(double x)
	{
		this->x = x;
		this->y = 0;
		cout << "1ArgConstructor:\t" << this << endl;
	}
	Point( double x, double y)
	{
		this->x = x;
		this->y = y;
		cout << "Constructor:\t\t" << this << endl;

	}
	Point(const Point& other)
	{
		this-> x = other.x;
		this-> y= other.y;
		cout << "CopyConstructor:\t" << this<<endl;

	}
	~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}
	// Operators:
	Point& operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyAssignment:\t\t" << this << endl;
		return *this;
	}
	//Methods
	double distance(const Point& other)const
		//this - эта точка
		//other - та точка
	{
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
		return distance;
	}
	void print()const
	{
		cout <<this<< ":x= " << x << "\tY= " << y << endl;
	}
};

double distance(const Point& A,const Point& B)
{
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	return sqrt(x_distance * x_distance + y_distance * y_distance);
}

//#define STRUCT_POINT
//#define DISTANCE_CHECK
//#define CONSTRUCTOR_CHECK
#define ASSIGNMENT_CHECK
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
#ifdef DISTANCE_CHECK

	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;
	
	Point B;
	B.set_x(7);
	B.set_y(8);
	cout << B.get_x() << "\t" << B.get_y() << endl;
	cout << delimiter << endl;
	cout << "Растояние от точки 'А' до точки 'В': " << A.distance(B) << endl;
	cout << delimiter << endl;
	cout << "Растояние от точки 'B' до точки 'A': " << B.distance(A) << endl;
	cout << delimiter << endl;
	cout << "Расстояние между точками 'A' и 'B': " << distance(A, B) << endl;
	cout << delimiter << endl;
	cout << "Расстояние между точками 'B' и 'A': " << distance(B, A) << endl;
	cout << delimiter << endl;

#endif // DISTANCE_CHECK
#ifdef CONSTRUCTOR_CHECK
	Point A;//Default constructor
	A.print();

	Point B = 5;
	B.print();

	Point C(2, 3);
	C.print();

	Point D = C;
	D.print();
#endif // CONSTRUCTOR_CHECK

#ifdef ASSIGNMENT_CHECK
	//Point A(2, 3);	//Constructor
//Point B;		//Default constructor
//B = A;			//Copy assignment
//B.print();

	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;

	Point A, B, C;
	A = B = C = Point(2, 3);
	A.print();
	B.print();
	C.print();
#endif // ASSIGNMENT_CHECK


}
