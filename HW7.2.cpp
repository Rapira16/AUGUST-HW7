#include <iostream>
using namespace std;

class Date
{
private:
    int m_day, m_month, m_year;

public:
    Date(int d=4, int m=8, int y=2021): m_day(d), m_month(m), m_year(y)
    { }

    friend ostream& operator<< (ostream &out, const Date &date1);
    friend ostream& operator<< (ostream &out, const Date &date2);
};

ostream& operator<< (ostream &out, const Date &date1)
{
    out << "Date: " << date1.m_day << ". " << date1.m_month << ". " << date1.m_year << "\n";
    return out;
}

ostream& operator<< (ostream &out, const Date &date2)
{
    out << "Date: " << date2.m_day << ". " << date2.m_month << ". " << date2.m_year << "\n";
    return out;
}

int main()
{
    if ((date1.m_year > date2.m_year) || (date1.m_month > date2.m_month) || (date1.m_day > date2.m_day)){
        cout << "date1 > date2";
    } else {
        cout << "date1 < date2";
    }
    Date date1(4, 8, 2021);
    Date date2(5, 9, 2022);

    cout << date1;
    cout << date2;
    return 0;
}