#include<iostream>
using namespace std;
double cen(double F )
{
	double C = (F- 32) * 5.0 / 9;
	return C;
}
int main()
{
	double F;
	cout<<"�����뻪���¶�"<<endl;
	cin>>F;
	cout<<"�����¶���"<<cen(F)<<endl;
	return 0;
}
