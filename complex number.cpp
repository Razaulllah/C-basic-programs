#include <iostream>
#include <cmath>
using namespace std;
struct complexnumber
{
	int Rnum;
	int Inum;
	void take()
	{
		cout << "\nEnter number :" << endl;
		cin >> Rnum;
		cin >> Inum;
	}
	bool iszero()
	{
		if (Rnum == 0 && Inum == 0)
			return 1;
		else
			return 0;
	}
	bool isgreaterthan(complexnumber cn1, complexnumber cn2)
	{
		double d = pow(cn1.Rnum, 2);
		double e = pow(cn1.Inum, 2);
		double f = pow(cn2.Rnum, 2);
		double g = pow(cn2.Inum, 2);
		double h = sqrt(d + e);
		double i = sqrt(g + f);

		if (h > i)
			return 1;
		else
			return 0;
	}
	void add(complexnumber c1, complexnumber c2)
	{
		Rnum = c1.Rnum + c2.Rnum;
		Inum = c1.Inum + c2.Inum;
		cout << Rnum << " + " << Inum << "i" << endl;
	}
};
int main()
{
	complexnumber cn1, cn2, cn3;
	cn1.take();
	cout << "\niszero for first called" << endl;
	cout << cn1.iszero();
	cn2.take();
	cout << "\niszero for second called" << endl;
	cout << cn2.iszero();
	cout << "\nisgreaterthan called" << endl;
	cout << cn3.isgreaterthan(cn1, cn2);
	cout << "\nThe sum of two complex number is " << endl;
	cn3.add(cn1, cn2);

	system("pause");
}
