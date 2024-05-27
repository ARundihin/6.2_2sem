#include "painting.hpp"
#include <regex>

Painting::Painting(const string& name, int year, const string& subject, const string& author)
    : Exhibit(name, year)
{
    try
    {
        if (!subject_validator(subject))
        {
            throw invalid_argument("�������� ��� �������!");
        }
        else if (!author_validator(author))
        {
            throw invalid_argument("�������� �����!");
        }

        this->subject = subject;
        this->author = author;
    }
    catch (const invalid_argument& e) {
        this->subject = "�������� ��� �������";
        this->author = "�������� �����";
        cout << "������ �������� �������: " << e.what() << endl;
    }
}

Painting::~Painting(void)
{

}

void Painting::Print() const
{
    cout << "��� ���������: �������" << endl;
    cout << "������������: " << this->name << endl;
    cout << "����� ��������: " << this->year << endl;
    cout << "��� ����������: " << this->subject << endl;
    cout << "�����: " << this->author << endl;
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
    regex pattern("^[A-Za-z�-��-�\\s]+$");

    if (regex_match(author, pattern))
    {
        return true;
    }
    else
    {
        return false;
    }
}