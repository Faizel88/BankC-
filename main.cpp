#include <iostream>
#include <string.h>

using namespace std;

class bank_statement
{
    private:
    int bank_code;
    int interest_rate;


    public:
    char bank_name [30], customer_name [30];
    int principal, period;
    float interest;

    int get_items_data()
    {
        cout << "HELLO! eNTER THE FOLLOWING DETAILS please!!.." << endl;
        cout << "BANK CODE: " << endl;
        cin >> bank_code;
        cout << "BANK NAME: " << endl;
        cin >> bank_name;
        cout << "CUSTOMER NAME: " << endl;
        cin >> customer_name;
        cout << "PRINCIPAL: " << endl;
        cin >> principal;
        cout << "INTEREST RATE: " << endl;
        cin >> interest_rate;
        cout << "PERIOD: " << endl;
        cin >> period;
    }

    int calc_data()
    {
        interest = ((principal * period * interest_rate) / 100);
        return 0;
    }

    int display_items_data()
    {

        cout << bank_code <<"\t"<<"\t"<< bank_name <<"\t"<< customer_name <<"\t"<<"\t"<< principal <<"\t"<<"\t"<< interest_rate <<"\t"<< period <<"\t"<< interest<<endl;

    return 0;
    }
};

int main()
{
    bank_statement a [1000];
    int n,i;
    cout << "eNTER THE NUMBER OF CUSTOMERS please!!" << endl;
    cin >> n;

for (i=0; i<n; i++)
{
    a[i].get_items_data();
}
        cout << "       thank you valued customer :D " << endl;
        cout << "BANK CODE   BANK NAME   CUSTOMER NAME   PRINCIPAL   INT RATE   PERIOD  INTEREST" << endl;
for (i=0; i<n; i++)
{
    a[i].calc_data();
    a[i].display_items_data();
}
    return 0;
}
