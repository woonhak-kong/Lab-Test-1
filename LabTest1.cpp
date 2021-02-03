#include <iostream>
#include <iomanip>

using namespace std;

int main() // Entry point for every C++ program.
{
	const float ITEMS[5] = { 299.99, 89.75, 189.95, 150.89, 429.45 };
	// basic pay $200
	int const BASIC_PAY = 200;
	// sale rate that salespeople will get. 9%
	float const COMMISSION_RATE = 0.09;

	float totalPay = 0;
	float middleCal = 0;

	int numOfSales = 0;
	int amountOfSales = 0;

	bool isCalculatingDone = false;

	cout << "======== SalesPeople's Salary Calculator ========\n\n";

	while (!isCalculatingDone)
	{
		cout << "|=================|" << endl;
		cout << "| ITEM |     VALUE|" << endl;
		cout << "|-----------------|" << endl;
		cout << "| 1    |  $ 299.99|" << endl;
		cout << "| 2    |  $  89.75|" << endl;
		cout << "| 3    |  $ 189.95|" << endl;
		cout << "| 4    |  $ 150.89|" << endl;
		cout << "| 5    |  $ 429.45|" << endl;
		cout << "|-----------------|" << endl;
		cout << "| 6 .        DONE |" << endl;
		cout << "|=================|" << endl;
		cout << "What number (1-5) of Items did salesman sold??" << endl;
		cout << "If you want to calculate PAY you input, type number 6 please." << endl;
		cout << "Type Number   :   ";
		cin >> numOfSales;

		// if input is vaild.
		if (numOfSales >= 1 && numOfSales <= 5)
		{
			cout << "How many did salesman sold it?" << endl;
			cout << "Type please  :  ";
			cin >> amountOfSales;

			// calculating commission.
			middleCal = middleCal + (ITEMS[numOfSales - 1] * amountOfSales * COMMISSION_RATE);
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		}
		else if (numOfSales == 6)
		{
			isCalculatingDone = true;
			// calculating total pay.
			totalPay = middleCal + BASIC_PAY;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			// To show like 0000.00. It will raise fraction.
			cout << fixed << showpoint << setprecision(2);
			cout << "|=================|" << endl;
			cout << "|    TotalPay     |" << endl;
			cout << "|-----------------|" << endl;
			cout << "| $" << setw(14) << right << totalPay << " |" << endl;
			cout << "|=================|" << endl;
		}
		else
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "!!!!!!!!!!!  TYPE CORRECT NUMBER PLEASE!!!!!!!!!!!!" << endl;
		}
	}
	return 0;
}