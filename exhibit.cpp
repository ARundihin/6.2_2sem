#include "exhibit.hpp"

Exhibit::Exhibit(const string& name, int year)
{
    try
    {
        if (!name_validator(name))
        {
            throw invalid_argument("Имя не может быть пустым");
        }
        if (!year_validator(year))
        {
            throw invalid_argument("Некорректный год");
        }

        this->name = name;
        this->year = year;
    }
    catch (const invalid_argument& e) {
        cout << "Ошибка создания экспоната: " << e.what() << endl;
        this->year = -1;
        this->name = "Неверный экспонат";
    }
}

Exhibit::~Exhibit(void)
{

}

void Exhibit::Print() const
{
    cout << "Тип экспоната: Неизвестно" << endl;
    cout << "Наименование: " << this->name << endl;
    cout << "Время создания: " << this->year << endl;
}

void Exhibit::set_name(const string& name)
{
    this->name = name;
}

const string& Exhibit::get_name(void)
{
    return this->name;
}

void Exhibit::set_year(int year)
{
    this->year = year;
}

int Exhibit::get_year(void)
{
    return this->year;
}

bool Exhibit::name_validator(const string& name)
{
    return !name.empty();
}

bool Exhibit::year_validator(int year)
{
    return year <= 2024;
}