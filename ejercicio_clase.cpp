#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int d, m, y;

	cout << "Dia: ";
	cin >> d;
	cout << "mes: ";
	cin >> m;
	cout << "anio: ";
	cin >> y;

	cout << setfill('0') << setw(2) << d << "/" << setw(2) << m << "/" << y << endl;
	cout << d + m + y << endl;
}
