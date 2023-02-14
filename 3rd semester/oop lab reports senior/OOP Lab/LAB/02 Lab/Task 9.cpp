#include<iostream>
#include<string>
using namespace std;

class invoice
{
	private:
		int partNumber;
		string partDiscription;
		int quantityPurchased;
		int pricePerItem;
	public:
		invoice()
		{
			partNumber=0;
			partDiscription=" ";
			quantityPurchased=0;
			pricePerItem=0;
		}
		void setInvoice(long pN,string pD,int qp,int ppi)
		{
			partNumber=pN;
			partDiscription=pD;
			quantityPurchased=qp;
			pricePerItem=ppi;
		}
		long getPartNumber()
		{
			return partNumber;
		}
		string getPartDiscription()
		{
			return partDiscription;
		}
		int getquantity()
		{
			return quantityPurchased;
		}
		int price()
		{
			return pricePerItem;
		}
		int getInvoiceAmount()
		{
			return pricePerItem*quantityPurchased;
		}
};

int main()
{
    long pN;
	string pD;
	int qp,ppi;
	invoice inv;
	cout<<"Enter Part Number: ";
	cin>>pN;
	cout<<"Enter Part Description: ";
	cin>>pD;
	cout<<"Enter Part Quantity: ";
	cin>>qp;
	cout<<"Enter Price Per Item: ";
	cin>>ppi;
	inv.setInvoice(pN,pD,qp,ppi);
	
	cout<<"\nThe Totle Amount: "<<inv.getInvoiceAmount()<<endl;
	return 0;
}
