#include <iostream>
using namespace std;

class Date
{
private:
    int m_day, m_month, m_year;

public:
    Date(int d=4, int m=8, int y=2021): m_day(d), m_month(m), m_year(y)
    { }

    friend ostream& operator<< (ostream &out, const Date &today);
};

ostream& operator<< (ostream &out, const Date &today)
{
    out << "Date: " << today.m_day << ". " << today.m_month << ". " << today.m_year << "\n";
    return out;
}

int main()
{
    Date today(4, 8, 2021);
    Date *date;
    date =& today;
    cout << *date;
    return 0;
}