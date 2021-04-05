// Задание 2

#include <iostream>
#define SPAN(x, y, z) (z > x && z < y ? cout << "True "<< z << " ONO VHODIT OT "<< x << " DO " << y : cout << "False " << z << " ONO NE VHODIT OT " << x << " DO " << y)

using namespace std;

int main()
{
	int a, b, c;
	cout << "VVEDITE DIAPOZOM CHISEL " << "OT: ";
	cin >> a;
	cout << "DO: ";
	cin >> b;
	cout << "VASHE CHISLO: ";
	cin >> c;
	SPAN(a, b, c);

	return 0;
}