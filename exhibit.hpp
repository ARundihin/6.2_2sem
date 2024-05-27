#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Exhibit
{
    private:
        bool name_validator(const string& name);
        bool year_validator(int year);

    protected:
        string name;
        int year;

    public:
        Exhibit(const string& name, int year);
        ~Exhibit(void);

        virtual void Print() const;

        void set_name(const string& name);
        const string& get_name(void);
        void set_year(int year);
        int get_year(void);
};
