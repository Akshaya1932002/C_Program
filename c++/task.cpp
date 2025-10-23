#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username, password;
    int choice, tickets;
    double total = 0.0;

    cout << "Welcome to BOOK MY SHOW\n";
    cout << "Enter Username: ";
    cin >> username;

    if (username == "A123")
    {
        cout << "Enter Password: ";
        cin >> password;

        if (password == "1234")
        {
            cout << "Login Successfully\n";

            do
            {
                cout <<"\n Today Shows:- \n";
                cout << "1.Dude - $10 per ticket\n";
                cout << "2.Bison - $9 per ticket\n";
                cout << "3.Kantara - $8 per ticket\n";
                cout << "4.Total Bill\n";
                cout << "5.Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                if (choice >= 1 && choice <= 3)
                {
                    cout << "Enter number of tickets: ";
                    cin >> tickets;

                    if (tickets > 0)
                    {
                        double price;
                        if (choice == 1)
                            price = 10;
                        else if (choice == 2)
                            price = 9;
                        else
                            price = 8;

                        total += tickets * price;
                        cout << "Tickets booked successfully \n";
                    }
                    else
                    {
                        cout << "Invalid number of tickets\n";
                    }
                }
                else if (choice == 4)
                {
                    cout << "Total Bill: $" << total << endl;
                }
                else if (choice == 5)
                {
                    cout << "Thank you for using BOOK MY SHOW \n";
                }
                else
                {
                    cout << "\nInvalid Choice \n";
                }

            } while (choice != 5);
        }
        else
        {
            cout << "\nIncorrect Password \n";
        }
    }
    else
    {
        cout << "\nUsername not found \n";
    }

    return 0;
}
