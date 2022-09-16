// UnitConversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int convertFrom, convertTo;
    double value, answer;
    cout << "Type the number for the unit you'd like to convert from: \n1 - fl \n2 - gal \n3 - oz \n4 - lb \n5 - in \n6 - ft \n7 - mi \n";
    cin >> convertFrom;
    cout << "\nType the number for the unit you'd like to convert to: \n8  - ml \n9  - l \n10 - g \n11 - kg \n12 - mm \n13 - cm \n14 - m \n15 - km \n";
    cin >> convertTo;
    cout << "\nType the value you'd like to convert: \n";
    cin >> value;
    if (convertFrom == 1 && convertTo == 8) {               //fl to ml
        answer = value * 29.57;
        cout << "\n" << answer << " ml";
    }
    else if (convertFrom == 1 && convertTo == 9) {          //fl to l
        answer = value * 0.02957;
        cout << "\n" << answer << " l";
    }
    else if (convertFrom == 2 && convertTo == 8) {          //gal to ml
        answer = value * 3785;
        cout << "\n" << answer << " ml";
    }
    else if (convertFrom == 2 && convertTo == 9) {          //gal to l
        answer = value * 3.785;
        cout << "\n" << answer << " l";
    }
    else if (convertFrom == 3 && convertTo == 10) {         //oz to g
        answer = value * 28.34952;
        cout << "\n" << answer << " g";
    }
    else if (convertFrom == 3 && convertTo == 11) {         //oz to kg
        answer = value * 0.02834952;
        cout << "\n" << answer << " kg";
    }
    else if (convertFrom == 4 && convertTo == 10) {         //lb to g
        answer = value * 453.5924;
        cout << "\n" << answer << " g";
    }
    else if (convertFrom == 4 && convertTo == 11) {         //lb to kg
        answer = value * 0.4535924;
        cout << "\n" << answer << " kg";
    }
    else if (convertFrom == 5 && convertTo == 12) {         //in to mm
        answer = value*25.4;
        cout << "\n" << answer << " mm";
    }
    else if (convertFrom == 5 && convertTo == 13) {         //in to cm
        answer = value*2.54;
        cout << "\n" << answer << " cm";
    }
    else if (convertFrom == 5 && convertTo == 14) {         //in to m
        answer = value*0.0254;
        cout << "\n" << answer << " m";
    }
    else if (convertFrom == 5 && convertTo == 15) {         //in to km
        answer = value*0.0000254;
        cout << "\n" << answer << " km";
    }
    else if (convertFrom == 6 && convertTo == 12) {         //ft to mm
        answer = value*304.8;
        cout << "\n" << answer << " mm";
    }
    else if (convertFrom == 6 && convertTo == 13) {         //ft to cm
        answer = value*30.48;
        cout << "\n" << answer << " cm";
    }
    else if (convertFrom == 6 && convertTo == 14) {         //ft to m
        answer = value*0.3048;
        cout << "\n" << answer << " m";
    }
    else if (convertFrom == 6 && convertTo == 15) {         //ft to km
        answer = value*0.0003048;
        cout << "\n" << answer << " km";
    }
    else if (convertFrom == 7 && convertTo == 12) {         //mi to mm
        answer = value*1609344;
        cout << "\n" << answer << " mm";
    }
    else if (convertFrom == 7 && convertTo == 13) {         //mi to cm
        answer = value*160934.4;
        cout << "\n" << answer << " cm";
    }
    else if (convertFrom == 7 && convertTo == 14) {         //mi to m
        answer = value*1609.344;
        cout << "\n" << answer << " m";
    }
    else if (convertFrom == 7 && convertTo == 15) {         //mi to km
        answer = value*1.609344;
        cout << "\n" << answer << " km";
    }
    else {
        cout << "Conversion doesn't work.";
    }
    return 0;
}
