#include "painting.hpp"
#include <regex>

Painting::Painting(const string& name, int year, const string& subject, const string& author)
    : Exhibit(name, year)
{
    try
    {
        if (!subject_validator(subject))
        {
            throw invalid_argument("Неверное имя объекта!");
        }
        else if (!author_validator(author))
        {
            throw invalid_argument("Неверный автор!");
        }

        this->subject = subject;
        this->author = author;
    }
    catch (const invalid_argument& e) {
        this->subject = "Неверное имя объекта";
        this->author = "Неверный автор";
        cout << "Ошибка создания картины: " << e.what() << endl;
    }
}

Painting::~Painting(void)
{

}

void Painting::Print() const
{
    cout << "Тип экспоната: Картина" << endl;
    cout << "Наименование: " << this->name << endl;
    cout << "Время создания: " << this->year << endl;
    cout << "Что изображено: " << this->subject << endl;
    cout << "Автор: " << this->author << endl;
}

void Painting::set_subject(string subject)
{
    this->subject = subject;
}

string Painting::get_subject(void)
{
    return subject;
}

void Painting::set_author(string author)
{
    this->author = author;
}

string Painting::get_author(void)
{
    return author;
}

bool Painting::subject_validator(string subject)
{
    return !subject.empty();
}
            
bool Painting::author_validator(string author)  
{
    regex pattern("^[A-Za-zА-Яа-я\\s]+$");

    if (regex_match(author, pattern))
    {
        return true;
    }
    else
    {
        return false;
    }
}