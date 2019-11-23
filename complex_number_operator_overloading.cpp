#include <iostream>

using namespace std;

class complex
{
	private :
		int re;
		int im;
	
	public :
		complex(int a, int b)
		{
			re = a;
			im = b;
		}
		
		complex operator + (complex &s)
		{
			this->re = re + s.re;
			this->im = im + s.im;
			
			return *this;
		}
		
		void disp()
		{
		
			cout << re << " + " << im << "i"<<endl;
		}
	
};

int main ()
{
	complex c1(4, 5), c2(5, 6);
	c1.disp();
	c2.disp();
	
	complex c3 = c1 + c2;
	cout << endl;
	c3.disp(); 
}
