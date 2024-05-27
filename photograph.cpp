#include "photograph.hpp"
#include <regex>

Photograph::Photograph(const string& name, int year, const string& subject)
    : Exhibit(name, year)
{
    try
    {
        if (!subject_validator(subject))
        {
            throw invalid_argument("Неверное имя объекта!");
        }

        this->subject = subject;
    }
    catch (const invalid_argument& e) {
        this->subject = "Неверное имя объекта";
        cout << "Ошибка создания статуэтки: " << e.what() << endl;
    }
}

Photograph::~Photograph(void)
{

}

void Photograph::Print() const
{
    cout << "Тип экспоната: Фотография" << endl;
    cout << "Наименование: " << this->name << endl;
    cout << "Время создания: " << this->year << endl;
    cout << "Что изображено: " << this->subject << endl;
}

void Photograph::set_subject(string subject)
{
    this->subject = subject;
}

string Photograph::get_subject(void)
{
    return this->subject;
}

bool Photograph::subject_validator(string subject)
{
    return !subject.empty();
}