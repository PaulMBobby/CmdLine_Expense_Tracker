#include<iostream>
#include<string>
#include<C:\Codes\Project Work related\expense_manager\expense_functions.cpp>
using namespace std;

int main(){

    ExpenseTracker T;

    int option;
    
    while(1){
        cout << "1. Add Expense\n2. Delete Expense\n3. Highest Expense\n4. Total Expense\n5. Modify Amount\n6. Modify Category\n7. Modify Description\n8. Show all Expense\n9. Exit\nEnter an Option: ";
        cin >> option;

        switch(option){
            case 1:
            {
                float amt; string cat; string des;

                cout << "Enter Amount: ";
                cin >> amt;
                
                cout << "Enter Category: ";
                cin >> ws;
                getline(cin,cat);

                cout << "Enter Description: ";
                cin >> ws;
                getline(cin,des);

                T.add_expense(amt,cat,des);

                break;
            }

            case 2:
            {
                T.delete_expense();

                break;
            }

            case 3:
            {
                T.find_max();

                break;
            }

            case 4:
            {
                T.cal_total();

                break;
            }

            case 5:
            {
                T.modify_amt();

                break;
            }

            case 6:
            {
                T.modify_category();

                break;
            }

            case 7:
            {
                T.modify_description();

                break;
            }

            case 8:
            {
                T.print_expense();

                break;
            }

            case 9:
            {
                return 0;
            }
        }
    
    }


return 0;
}