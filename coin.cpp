#include "coin.hpp"

Coin::Coin(const string& name, int year, double denomination, int startYear, int endYear)
    : Exhibit(name, year)
{
    try
    {
        if (!denomination_validator(denomination))
        {
            throw invalid_argument("������ �������� �������!");
        }
        else if (!year_validator(startYear, endYear))
        {
            throw invalid_argument("������ �������� ������ ������������!");
        }

        this->denomination = denomination;
        this->startYear = startYear;
        this->endYear = endYear;
        
    }
    catch (const invalid_argument& e)
    {
        this->denomination = -1;
        this->startYear = -1;
        this->endYear = -1;
        cout << "������ �������� ������: " << e.what() << endl;
    }
}

Coin::~Coin(void)
{

}

void Coin::Print() const
{
    cout << "��� ���������: ������" << endl;
    cout << "������������: " << this->name << endl;
    cout << "����� ��������: " << this->year << endl;
    cout << "�������: " << this->denomination << endl;
    cout << "���� �������������: " << this->startYear << " - " << this->endYear << endl;
}

void Coin::set_denomination(double denomination)
{
    this->denomination = denomination;
}

double Coin::get_denomination(void)
{
    return this->denomination;
}

void Coin::set_startYear(int startYear)
{
    this->startYear = startYear;
}

int Coin::get_startYear(void)
{
    return startYear;
}

void Coin::set_endYear(int endYear)
{
    this->endYear = endYear;
}

int Coin::get_endYear(void)
{
    return endYear;
}

bool Coin::denomination_validator(double denomination)
{
    return denomination > 0;
}

bool Coin::year_validator(int startYear, int endYear)
{
    return (startYear < endYear) && (endYear <= 2024) && (startYear <= 2024);
}
