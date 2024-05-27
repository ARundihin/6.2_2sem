#pragma once

#include "exhibit.hpp"

class Statuette : public Exhibit
{
    private:
        string subject;
        string author;
        bool subject_validator(string subject);
        bool author_validator(string author);

    public:
        Statuette(const string& name, int year, const string& subject, const string& author);

        ~Statuette(void);

        void Print() const override;

        void set_subject(string subject);
        string get_subject(void);
        void set_author(string author);
        string get_author(void);
};