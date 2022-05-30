#include<iostream>
#define pigreco 3.14
using namespace std;
class cerchio
{
	private:
		float raggio;
	public:
	void setraggio(float r)
	{
		raggio=r;
	}
	float getraggio()
	{
		return raggio;
	}
	cerchio(float r)
	{
		setraggio(r);
	}
	~cerchio ()
	{
		cout<<endl<<"oggetto distrutto";
	}
	float diametro ();	
	float area ();
	float perimetro ();
	void stampa ();
};
float cerchio::area (){
	return raggio*raggio*pigreco;
}
float cerchio::diametro (){
	return raggio*2;
}
float cerchio::perimetro (){
	return 2*pigreco*raggio;
}
void cerchio::stampa(){
	cout<<endl<<"raggio: "<<getraggio()<<"cm";
	cout<<endl<<"diametro: "<<diametro()<<"cm";
	cout<<endl<<"area: "<<area()<<"cm^2";
	cout<<endl<<"perimetro"<<perimetro()<<"cm";
	cout<<endl<<"indirizzo di memoria"<<this;
}
int main (){
	float r1,r2;
	do{
		cin>>r1;	
	}
	while(r1<0);
	do{
		cin>>r2;	
	}
	while(r2<0);
	cerchio c1(r1);
	c1.stampa();
	cerchio c2(r2);
	c2.stampa();
	return 0;
}
