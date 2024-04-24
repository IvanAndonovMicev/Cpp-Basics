#include <iostream>

using namespace std;

int main()
{
    const double PACKAGE_OF_PENS = 5.80;
    const double PACKAGE_OF_MARKERS = 7.20;
    const double DETERGENT_PER_LITER = 1.20;

    int packagesOfPensNeeded;
    cin >> packagesOfPensNeeded;

    int packagesOfMarkersNeeded;
    cin >> packagesOfMarkersNeeded;

    int litersOfDetergentNeeded;
    cin >> litersOfDetergentNeeded;

    double percentOff;
    cin >> percentOff;

    double priceForPackageOfPens = packagesOfPensNeeded * PACKAGE_OF_PENS;
    double priceForPackageOfMarkers = packagesOfMarkersNeeded * PACKAGE_OF_MARKERS;
    double priceForDetergent = litersOfDetergentNeeded * DETERGENT_PER_LITER;

    double sumPrice = priceForPackageOfPens + priceForPackageOfMarkers + priceForDetergent;

    double percentOffPrice = percentOff / 100;

    double finalePrice = sumPrice - (sumPrice * percentOffPrice);

    cout << finalePrice << endl; 

    return 0;
}