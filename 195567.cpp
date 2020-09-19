#include <iostream>
#include <cmath>
using namespace std;

int factorial(int a){
	int b =1;
	for(int i=1;i<=a;i++){
		b=b*i;
	}
	return b;
}

// class definition
class SINX{
	int N,x;


	public:

		float sinx=0;
		SINX(int i, int j){
			// x=(float)i*3.1415/180;
			x=i;
			N=j;
		}
		void Evaluate();
};


int main()
{
	SINX obt(8,18);
	obt.Evaluate();
	cout<<"sin(8) = "<<obt.sinx<<endl;
	
	return 0;
}

void SINX::Evaluate(){
	for (int i = 0; i < N; i++)
	{

		sinx = sinx + (pow(-1,i))*double(pow(x,2*i+1))/double(factorial(2*i+1));

	}
}