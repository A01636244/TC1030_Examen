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
			if (grad < 0 || grad > 359)
			{
				grados = grad;
			}else
			{
				grados = 0;
			}

			if (min < 0 || min > 59)
			{
				minutos = min;
			}else
			{
				minutos = 0;
			}

			if (seg < 0 || seg > 59)
			{
				segundos = seg;
			}else
			{
				segundos = 0;
			}
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