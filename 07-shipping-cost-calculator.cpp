/*
    Shipping Cost Calculator

    Ask the user for the package dimensions in inches:
    length, width, and height.
    These values should be integers.

    All dimensions must be 10 inches or less.
    If any dimension is greater than 10 inches, the package cannot be shipped.

    Base shipping cost: $2.50

    If the package volume is greater than 100 cubic inches,
    there is a 10% surcharge.

    If the package volume is greater than 500 cubic inches,
    there is a 25% surcharge.

    Calculate and display the shipping cost.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int length {};
    int width {};
    int height {};

    const double first_surcharge {0.10};
    const double second_surcharge {0.25};

    const double base_cost {2.50};

    cout << fixed << setprecision(2);  // prints dollars nicely

    cout << "Welcome to the shipping cost calculator!" << endl;
    cout << "Please enter the length, width, and height of the package (maximum value is 10): ";
    cin >> length >> width >> height;

    cout << "You entered: " << length << ", "
         << width << ", " << height << endl;

    if (length <= 10 && width <= 10 && height <= 10) {

        int volume {};
        volume = length * width * height;

        cout << "The package volume is: " << volume << " cubic inches" << endl;

        double final_cost {base_cost};

        if (volume > 500) {
            final_cost = base_cost + (base_cost * second_surcharge);
        }
        else if (volume > 100) {
            final_cost = base_cost + (base_cost * first_surcharge);
        }

        cout << "The shipping cost is: $" << final_cost << endl;

    } else {

        cout << "Sorry, the package cannot be shipped!" << endl;
    }

    return 0;
}