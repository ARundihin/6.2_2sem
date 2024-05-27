#pragma once

#include "exhibit.hpp"

class ColdWeapon : public Exhibit
{
    private:
        string approximateDating;

        bool approximateDating_validator(string approximateDating);

    public:
        ColdWeapon(const string& name, int year, const string& approximateDating);

        ~ColdWeapon(void);

        void Print() const override;

        void set_approximateDating(string approximateDating);
        string get_approximateDating(void);
};