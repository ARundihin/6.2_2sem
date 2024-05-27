#include "coldWeapon.hpp"
#include <regex>

ColdWeapon::ColdWeapon(const string& name, int year, const string& approximateDating)
    : Exhibit(name, year)
{
    try
    {
        if (!approximateDating_validator(approximateDating))
        {
            throw invalid_argument("�������� ���������");
        }

        this->approximateDating = approximateDating;
    }
    catch (const invalid_argument& e) {
        this->approximateDating = "�������� ���������!";
        cout << "������ �������� ��������� ������: " << e.what() << endl;
    }
}

ColdWeapon::~ColdWeapon(void)
{

}

void ColdWeapon::Print() const
{
    cout << "��� ���������: �������� ������" << endl;
    cout << "������������: " << this->name << endl;
    cout << "����� ��������: " << this->year << endl;
    cout << "��������������� ���������: " << this->approximateDating << endl;
}

void ColdWeapon::set_approximateDating(string approximateDating)
{
    this->approximateDating = approximateDating;
}

string ColdWeapon::get_approximateDating(void)
{
    return this->approximateDating;
}

bool ColdWeapon::approximateDating_validator(string approximateDating)
{
    regex pattern("^X{0,2}I{0,3}X{0,1}-X{0,2}I{0,3}X{0,2} ���$");

    if (regex_match(approximateDating, pattern))
    {
        return true;
    }
    else
    {
        return false;
    }
}