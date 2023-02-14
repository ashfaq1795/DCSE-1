#include <iostream>

using namespace std;

// class template
template <typename h>

class Compute
{
	private:
		h a , b;
	public:
		// empty exception class
		class div_den
		{
		};
		
		Compute(h aa , h bb)
			{
				a = aa;
				b = bb;
			}
			
		void div()	
			{
				if (b==0)
					{
						// throw exception
						throw div_den();
					}
				else{
						cout<<"The Division Is = "<<a/b<<endl;
				}	
			}
		void Show()	
			{
				cout<<"A: "<<a<<" , B: "<<b<<endl;
			}	
};
int main()
{
	Compute<int> c1(4,0);
	c1.Show();
	
	try{
		c1.div();
		
	}
	catch(Compute<int>::div_den)
		{
			cout<<"Exception: b is Zero."<<endl;
		}
	
	return 0;
}
