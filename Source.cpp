#include<iostream>
using namespace std;
int main()
{
	int main_choice = 1;
	do
	{
		char choice;
		float price, quantity, tax_rate, total = 0, net_total = 0;
		do
		{
			cout << "\nEnter The Product Price: ";
			cin >> price;
			cout << "\nEnter The Quantity: ";
			cin >> quantity;
			cout << "\nEnter Applicable Sales Tax Rate: ";
			cin >> tax_rate;
			if (price < 0 || quantity < 1 || tax_rate < 0)
			{
				cout << "\n\nINVALID INPUT.\nEnter Again!\n";
				cout << "Price Must be Greater then 0.\nQuantity Must be Greater then 1.\nTax Rate Sould be Greater then 1\n\n";
			}

		} while (price < 0 || quantity < 1 || tax_rate < 0);

		for (int i = 1; i <= quantity; i++)
		{
			total += price;
		}
		if (quantity >= 10)
		{
			net_total = total + ((tax_rate * total) / 100) - ((10 * total) / 100);
			cout << "\n\nTOTAL PRICE: " << net_total;
		}
		else
		{
			net_total = total + (tax_rate * total) / 100;
			cout << "\n\nTOTAL PRICE: " << net_total;
		}
		cout << "\n\nDo You Want to Calculate For Another Product (Y)? ";
		cin >> choice;
		if (choice != 'Y' && choice != 'y')
		{
			main_choice = 0;
		}
		else
		{
			main_choice = 1;
		}

	} while (main_choice != 0);
	cout << "\n\nGOOD BYE";
	cout << endl << endl;
	system("pause");
	return 0;
}
