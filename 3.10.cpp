#include<iostream>
#include<string>
using namespace std;
class invoice{
	public:
	string parts,description_part;
	int quantity,price;
	double vat,discount;
	
	invoice(string p1,string d,int q,int p2,double v,double d1){
		parts=p1;
		description_part=d;
		quantity=q;
		price=p2;
		vat=v;
		discount=d1;
		
		cout<<"|Part no|\t"<<"|Parts Description|\t"<<"|Quantity of item|\t"<<"|Price|\t"<<"|VAT|\t"<<"|Discount|\t"<<endl;
		
	}
	void getparts()
	{
		cout<<"\t"<<parts<< "\t\t\t" <<description_part<< "\t\t\t" <<quantity<<"\t\t\t\t"<< price<<"\t\t"<<vat<<"\t\t\t"<<discount<<"\t"<<endl<<endl;
	}
	void setparts(string a)
	{
		parts=a;
	}
};
int main()
{
	invoice a("Bulb","Light",5,550,0.2,0);
	a.getparts();
	return 0;
}
