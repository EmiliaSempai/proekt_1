#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	float a;
	float b;
	float c;
	float dis;
	float x1, x2, x;

	cout << "ax^2 + bx + c = 0" << endl;

	cout << "Введите коэффицент 'a': ";
	cin >> a;
	cout << "Введите коэффицент 'b': ";
	cin >> b;
	cout << "Введите коэффицент 'c': ";
	cin >> c;



	if (a == 0) 
		cout << "Коэффицент 'a' не может быть равен нулю!"<< endl;
	

		if (b != 0 & c != 0 & a != 0) {
			{
				dis = pow(b, 2);
				dis = dis - (4 * a * c);
			}
			if (dis < 0)
			cout << "Уравнение не имеет действительных корней." << endl;
			else if (dis > 0) {
				cout << "Уравнение имеет два корня: " << endl;
				{
					x1 = b * -1;
					x1 = x1 + sqrt(dis);
					x1 = x1 / (2 * a);
				}

				{
					x2 = b * -1;
					x2 = x2 - sqrt(dis);
					x2 = x2 / (2 * a);
				}
				cout << "x1 = " << x1 << "\n" << "x2 = " << x2 << endl;
			}
			else if (dis == 0) {
				cout << "Дескриминант равен нулю, значит уравнение имеет один корень:" << endl;
				x = -b;
					x = x / 2 * a;
					cout << "x = " << x;
			}
		}
		else if (b == 0 & c != 0 & a != 0) {
			c = -1 * c;
			if (c < 0)
				cout << "Уравнение не имеет действительных корней." << endl;
			else
				cout << "Уравнение имеет два корня:" << endl;    
				x1 = sqrt(c);
				x2 = x1 * -1;
				cout << "x1 = " << x1 << "\n" << "x2 = " << x2 << endl;
		}
		else if (c == 0 & b != 0 & a != 0) {
			cout << "Уравнение имеет два корня:" << endl;
			x1 = 0;
			x2 = b * -1;
			cout << "x1 = " << x1 << "\n" << "x2 = " << x2 << endl;
		}
	 
	



}

