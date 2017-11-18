#include "../../std_lib_facilities.h"

int main()
{
	string value1 = " ";
	string value2 = " ";
	int converted1 = 0;
	int converted2 = 0;
	char oper = ' ';
	double result = 0;
	bool check = false;
	vector<string> string_value_list = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
	vector<string> int_value_list = { "0","1","2","3","4","5","6","7","8","9" };

	while (cin >> value1 >> oper >> value2)
	{

		check = false;

			for (int i = 0; i < 10; i++)
			{

				if (value1 == string_value_list[i])
				{
					converted1 = i;
					check = true;
				}
			
				if (value2 == string_value_list[i])
				{
					converted2 = i;
					check = true;
				}
				if (value1 == int_value_list[i])
				{
					converted1 = i;
					check = true;
				}
				if (value2 == int_value_list[i])
				{
					converted2 = i;
					check = true;
				}

			}
				if (check == false)
				{
					cout << "Only words describing digits from 0 to 9 with capitalized first letters or digits from 0 to 9 can be accepted. \n";
				}

				if (oper == '+' && check == true)
				{
					result = converted1 + converted2;
					cout << "The sum of " << converted1 << " and " << converted2 << " is " << result << ".\n";
				}
				else if (oper == '-' && check == true)
				{
					result = converted1 - converted2;
					cout << "The difference of " << value1 << " and " << value2 << " is " << result << ".\n";
				}
				else if (oper == '*' && check == true)
				{
					result = converted1 * converted2;
					cout << "The product of multiplication of " << value1 << " and " << value2 << " is " << result << ".\n";
				}
				else if (oper == '/' && check == true)
				{
					result = converted1 / converted2;
					cout << "The product of division of " << value1 << " and " << value2 << " is " << result << ".\n";
				}
				else
				{
					cout << "Wrong operator has been entered, please try again." << '\n';
				}
		}
}