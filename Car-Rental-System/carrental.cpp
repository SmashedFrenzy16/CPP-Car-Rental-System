#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;
    double price;
};

int main()
{

    srand(time(0));

    int randomInvoiceNum = rand() % 10000000;

    string username;
    string attemptuser;
    string pass;
    string attemptpass;
    bool isLoggedIn;
    Car car1;
    Car car2;
    Car car3;
    int cchoice;
    double cardBalance;
    string proceedPayment;
    string playAgain;

    cout << "\n\t\tWelcome to SmashedFrenzy16's Car Rental Service!";

    cout << "\n\nPlease register your details below:" << endl;

    cout << "\nEnter Username: ";
    cin >> username;

    cout << "\nEnter Password: ";
    cin >> pass;

    isLoggedIn = true;

    cout << "Please enter in your credit card balance (£s): ";
    cin >> cardBalance;

    do
    {

        if (isLoggedIn == true)
        {

            cout << "Just to double check, enter in your details below:" << endl;

            cout << "\nEnter Username: ";
            cin >> attemptuser;

            cout << "\nEnter Password: ";
            cin >> attemptpass;

            if (attemptuser == username && attemptpass == pass)
            {

                isLoggedIn = true;
            }
            else
            {

                cout << "Wrong details!" << endl;

                exit(0);
            }

            if (isLoggedIn == true)
            {

                cout << "Welcome (back), " << username << "!\n";

                car1.brand = "S";
                car1.model = "Model Super";
                car1.year = 2015;
                car1.price = 200000;

                car2.brand = "A";
                car2.model = "Model 5";
                car2.year = 2008;
                car2.price = 150000;

                car3.brand = "C";
                car3.model = "Model Premium";
                car3.year = 2016;
                car3.price = 45000;

                cout << "Cars available for rent now:" << endl;
                cout << "1. " << car1.brand << " " << car1.model << endl;
                cout << "2. " << car2.brand << " " << car2.model << endl;
                cout << "3. " << car3.brand << " " << car3.model << endl;
                cout << "Which car do you want? (1-3): ";
                cin >> cchoice;

                if (cchoice == 1)
                {

                    cout << "Your choice: " << car1.brand << " " << car1.model << endl;
                    cout << "Cost for 1 month: £" << car1.price << endl;
                    cout << "Would you like to proceed with this payment? (only option for rent is 30 days, type y or Y for yes and N or N for no): ";
                    cin >> proceedPayment;

                    if (proceedPayment == "Y" || proceedPayment == "y")
                    {

                        if (car1.price <= cardBalance)
                        {

                            cout << "Payment successful!" << endl;
                            cout << "Here is the invoice:" << endl;
                            cout << "##########" << endl;
                            cout << "Order ID: " << randomInvoiceNum << endl;
                            cout << "Car: " << car1.brand << endl;
                            cout << "Model: " << car1.model << endl;
                            cout << "Price: £" << car1.price << endl;
                            cout << "Rent Time: 30 Days" << endl;
                            cout << "##########";

                            cardBalance = cardBalance - car1.price;
                        }
                        else
                        {
                            cout << "Not enough funds! Program exiting.";
                            exit(0);
                        }
                    }
                }
                else if (cchoice == 2)
                {

                    cout << "Your choice: " << car2.brand << " " << car2.model << endl;
                    cout << "Cost for 1 month: £" << car2.price << endl;
                    cout << "Would you like to proceed with this payment? (only option for rent is 30 days, type y or Y for yes and N or N for no): ";
                    cin >> proceedPayment;

                    if (proceedPayment == "Y" || proceedPayment == "y")
                    {

                        if (car2.price <= cardBalance)
                        {

                            cout << "Payment successful!" << endl;
                            cout << "Here is the invoice:" << endl;
                            cout << "##########" << endl;
                            cout << "Order ID: " << randomInvoiceNum << endl;
                            cout << "Car: " << car2.brand << endl;
                            cout << "Model: " << car2.model << endl;
                            cout << "Price: £" << car2.price << endl;
                            cout << "Rent Time: 30 Days" << endl;
                            cout << "##########";

                            cardBalance = cardBalance - car2.price;
                        }
                        else
                        {
                            cout << "Not enough funds! Program exiting.";
                            exit(0);
                        }
                    }
                }
                else if (cchoice == 3)
                {

                    cout << "Your choice: " << car3.brand << " " << car3.model << endl;
                    cout << "Cost for 1 month: £" << car3.price << endl;
                    cout << "Would you like to proceed with this payment? (only option for rent is 30 days, type y or Y for yes and N or N for no): ";
                    cin >> proceedPayment;

                    if (proceedPayment == "Y" || proceedPayment == "y")
                    {

                        if (car3.price <= cardBalance)
                        {

                            cout << "Payment successful!" << endl;
                            cout << "Here is the invoice:" << endl;
                            cout << "##########" << endl;
                            cout << "Order ID: " << randomInvoiceNum << endl;
                            cout << "Car: " << car3.brand << endl;
                            cout << "Model: " << car3.model << endl;
                            cout << "Price: £" << car3.price << endl;
                            cout << "Rent Time: 30 Days" << endl;
                            cout << "##########";

                            cardBalance = cardBalance - car3.price;
                        }
                        else
                        {
                            cout << "Not enough funds! Program exiting.";
                            exit(0);
                        }
                    }
                }

                cout << "Do you want to rent another car? (y/n): ";
                cin >> playAgain;
            }
        }

    } while (playAgain == "y" || playAgain == "Y");
}
