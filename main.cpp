/* ---------------------------
Laboratoire : 02
Auteur(s) : Eliott Deriaz
Date : 23.09.2026
But : Calcul du temps de trajet 
Remarque(s) : 
--------------------------- */
#include <cmath>
#include <iostream>
#include <cstdlib>

int main()
{
    //distances in km
    const int dx = 3;
    const int dy = 10;
    int l1 = 6;
    //speeds in km/h
    const int s1 = 5;
    const int s2 = 2;

    //calculating distance on rocks
    double l2 = std::sqrt(std::pow(dx, 2) + std::pow(dy-l1, 2));
    double t1 = static_cast<double>(l1)/s1;
    double t2 = l2 / s2;
    double t3 = t1 + t2;

    std::cout << "le temps total est : " << t3 << std::endl << " heures.";
}
