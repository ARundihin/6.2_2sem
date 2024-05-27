#pragma once

#include "exhibit.hpp"

class Photograph : public Exhibit 
{
    private:
        string subject;

        bool subject_validator(string subject);

    public:
        Photograph(const string& name, int year, const string& subject);

        ~Photograph(void);

        void Print() const override;

        void set_subject(string subject);
        string get_subject(void);
};