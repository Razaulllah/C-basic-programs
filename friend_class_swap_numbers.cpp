#include <iostream>

using namespace std;

class class_1
{
	private:
		int num1;
	
	public:
		int getvalue()
		{
			cout << "Enter value of first class : ";
			cin >> num1;
		}
		
	friend class class_2;
};

class class_2
{
	private:
		int num2;
		
	public:
		int getvalue()
		{
			cout << "Enter value of second class : ";
			cin >> num2;
		}
		
		int swap(class_1 a)
		{
			int temp;
			
			temp   = a.num1;
			a.num1 = num2;
			num2   = temp;
			
			cout << "\nValue after swapping "<<endl;
			cout << "Value value of class_1 is : " << a.num1 <<endl;
			cout << "Value value of class_2 is : " << num2 <<endl;
		}
			
};

int main ()
{
	class_1 a;
	a.getvalue();
	
	class_2 b ;
	b.getvalue();
	
	b.swap(a);
	
}
