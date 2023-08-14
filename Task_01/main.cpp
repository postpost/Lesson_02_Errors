#include <iostream>
using namespace std;

//find mistakes

struct point {
	double m_x;
	double m_y;

	point(double x, double y) 
	{
		m_x = x;
		m_y = y; //2nd (semantic)
	}
}; //1st (sintax)

void print_point(const point& point_object) {
	std::cout << "x:" << point_object.m_x << ", y: "
		<< point_object.m_y << std::endl;
}

int main()
{
	for (int i = 0; i < 5; i++) { //3d (sintax)
		point my_point(i, 2 * i); 
		print_point(my_point);
	}
	return 0;
}
