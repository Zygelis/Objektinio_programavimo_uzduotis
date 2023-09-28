#include "my_lib.h"

double medianos_skaiciavimas(vector<int> vektorius)
{
    int vektoriaus_ilgis = vektorius.size();

    if (vektoriaus_ilgis == 0)
    {
        return 0; // jei vektoriaus dydis lygus 0, grazinamas 0
    }

    std::sort(vektorius.begin(), vektorius.end()); // vektoriaus elementai surusiuojami didejimo tvarka

    if (vektoriaus_ilgis % 2 == 0)
    {
        // jei vektoriaus dydis lyginis, grazinamas vidurkis tarp dvieju viduriniu elementu
        return (vektorius[vektoriaus_ilgis / 2 - 1] + vektorius[vektoriaus_ilgis / 2]) / 2.0;
    }
    else
    {
        // jei vektoriaus dydis nelyginis, grazinamas vidurinis elementas
        return (vektorius[vektoriaus_ilgis / 2]);
    }
}

vector<int> random_skaicius(int n)
{
    // vektorius, kuriame bus saugomi random skaiciai
    vector<int> random_skaiciai;

    // pasirenkam random skaičių generatoriaus seed kaip laiką, nes laikas nuolat keičiasi, todel skaičiai bus vis kitokie kiekviena karta paleidus programą
    srand((unsigned)time(NULL));

    // generuojam n random skaiciu
    for (int i = 1; i <= n; i++)
    {
        // generuojam random skaiciu nuo 1 iki 10
        int random = 1 + (rand() % 10);
        // pridedam random_skaicius i vektoriu
        random_skaiciai.push_back(random);
    }
    // grazinam vektoriu
    return random_skaiciai;
}