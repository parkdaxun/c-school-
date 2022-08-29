#include<iostream>
#include<cstring>
using namespace std;

class FruitSeller
{
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    void InitMembers(int price, int num, int money)
    {
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }
    int TellApplePrice()
    {
        return APPLE_PRICE;
    }
    void ShowSalesResult()
    {
        cout << "���� ���: " << numOfApples << endl;
        cout << "�Ǹ� ����: " << myMoney << endl;
    }
    int SaleApples(int money)
    {
    	int num = money/APPLE_PRICE;
    	
		numOfApples -= num;
    	myMoney+= money;
    	
    	return num;
	}
};

class FruitBuyer
{
private:
    int myMoney;
    int numOfApples;
public:
    void InitMembers(int money)
    {
        myMoney = money;
        numOfApples = 0;
    }
    void ShowBuyResult()
    {
        cout << "���� �ܾ�: " << myMoney << endl;
        cout << "��� ����: " << numOfApples << endl;
    }
    void BuyApples(FruitSeller& seller, int num)
    {
    	int price = seller.TellApplePrice();
    	int pay = price * num;
    	numOfApples += seller.SaleApples(pay);
    	myMoney -= pay;
    	
	}
};

int main(void)
{
	FruitSeller seller;
	FruitBuyer me;
	seller.InitMembers(1000, 20, 0);
	me.InitMembers(5000);
	
	me.BuyApples(seller, 2);
	cout<< "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout<< "���� �������� ��Ȳ" << endl;
	me.ShowBuyResult();
	
	return 0;
}


