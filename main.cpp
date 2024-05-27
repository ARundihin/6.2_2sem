#include <iostream>
#include <string>
#include "coin.hpp"
#include "coldWeapon.hpp"
#include "painting.hpp"
#include "statuette.hpp"
#include "photograph.hpp"
#include "dynamic_arr.hpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    DynamicArray exhibits;

    Exhibit* coin = new Coin("Монета", 2019, 1.0, 2000, 2020);
    exhibits.addElement(coin);

    Exhibit* weapon = new ColdWeapon("Холодное оружие", 1800, "XIX-XX век");
    exhibits.addElement(weapon);

    Exhibit* painting = new Painting("Картина", 1900, "Пейзаж", "Иван Иванов");
    exhibits.addElement(painting);

    Exhibit* statuette = new Statuette("Статуэтка", 1700, "Богиня", "Петр Петров");
    exhibits.addElement(statuette);

    Exhibit* photograph = new Photograph("Фотография", 2005, "Портрет");
    exhibits.addElement(photograph);

    exhibits.printElements();

    exhibits.removeElement(coin);
    exhibits.removeElement(painting);

    exhibits.printElements();

    return 0;
}