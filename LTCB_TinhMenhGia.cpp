#include <iostream>
using namespace std;
int main() {
	int so, soto500, soto200, soto100, soto50, soto20, soto10, soto5, soto1;
	cout << "Nhap menh gia:";
	cin >> so;
	while (so > 0)
	{
		soto500 = so / 500;
		so = so % 500;
		cout << "soto500la" << soto500 << endl;
		soto200 = so / 200;
		so = so % 200;
		cout << "soto200la" << soto200 << endl;
		soto100 = so / 100;
		so = so % 100;
		cout << "soto100la" << soto100 << endl;
		soto50 = so / 50;
		so = so % 50;
		cout << "soto50la" << soto50 << endl;
		soto20 = so / 20;
		so = so % 20;
		cout << "soto20la" << soto20 << endl;
		soto10 = so / 10;
		so = so % 10;
		cout << "soto10la" << soto10 << endl;
		soto5 = so / 5;
		so = so % 5;
		cout << "soto5la" << soto5 << endl;
		soto1 = so / 1;
		so = so % 1;
		cout << "soto1la" << soto1 << endl;
	}
}