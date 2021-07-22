#include <iostream>

using namespace std;

class Base 
{
	protected:

		int grados;
		int minutos;
		int segundos;
	
	public:

		Base(int grad, int min, int seg)
		{
			grados = grad;
			minutos = min;
			segundos = seg;
		}

		Base operator+(Base b)
		{
			int grad, min, seg;



			return Base(grad,min,seg);
		}
		virtual void bienvenida()
		{
			cout << "Bienvenido a la clase Base"<< endl;
		}

};

int main()
{

	return 0;
}