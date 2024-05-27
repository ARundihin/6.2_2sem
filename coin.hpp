#pragma once

#include "exhibit.hpp"

using namespace std;

class Coin : public Exhibit
{
    private:
        double denomination;
        int startYear;
        int endYear;

        bool denomination_validator(double denomination);
        bool year_validator(int startYear, int endYear);

    public:
        Coin(const string& name, int year, double denomination, int startYear, int endYear);
        ~Coin(void);

        void Print() const override;

        void set_denomination(double denomination);
        double get_denomination(void);
        void set_startYear(int startYear);
        int get_startYear(void);
        void set_endYear(int endYear);
        int get_endYear(void);
};