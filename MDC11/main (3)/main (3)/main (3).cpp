#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Introduceti coeficientii a, b si c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Coeficientul a nu poate fi zero." << endl;
        return 1; 
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Solutiile sunt: x1 = " << x1 << " si x2 = " << x2 << endl;
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "Exista o solutie dubla: x = " << x << endl;
    }
    else {
        double partReal = -b / (2 * a);
        double partImg = sqrt(-discriminant) / (2 * a);
        cout << "Solutiile sunt: x1 = " << partReal << " + " << partImg << "i si x2 = "
            << partReal << " - " << partImg << "i" << endl;
    }

    return 0;
}
