#include "rectangle.h"
#include "circle.h"
#include "trapeze.h"
#include "triangle.h"
#include "main.h"

using namespace std;

int main() {

	const int arraySize = 4;
	square* shapes[arraySize] = { nullptr };

    int choice;

    do {
        mainmenu();
        cin >> choice;

        switch (choice) {
        case 1: {
			double width;
			double height;

			do {
				cout << "Enter the width: " << endl;
				cin >> width;
				if (width < 0)
					cout << "Try again" << endl;
			} while (width < 0);

			do {
				cout << "Enter the height: " << endl;
				cin >> height;
				if (height < 0)
					cout << "Try again" << endl;
			} while (height < 0);

			rectangle* rect = new rectangle(width, height);
			shapes[0] = rect;

			cout << "Rectangle square: " << rect->calcsquare() << endl;

            break;
        }
		case 2: {
			double radius;

			do {
				cout << "Enter the radius: " << endl;
				cin >> radius;
				if (radius < 0)
					cout << "Try again" << endl;
			} while (radius < 0);

			circle* circ = new circle(radius);
			shapes[1] = circ;

			cout << "Circle square: " << circ->calcsquare() << endl;
			break;
		}
        case 3: {
			double small;
			double big;
			double height;

			do {
				cout << "Enter the first side: " << endl;
				cin >> small;
				if (small < 0)
					cout << "Try again" << endl;
			} while (small < 0);

			do {
				cout << "Enter the second side: " << endl;
				cin >> big;
				if (big < 0)
					cout << "Try again" << endl;
			} while (big < 0);

			do {
				cout << "Enter the height: " << endl;
				cin >> height;
				if (height < 0)
					cout << "Try again" << endl;
			} while (height < 0);

			trapeze* trap = new trapeze(small, big, height);
			shapes[2] = trap;

			cout << "Trapeze square: " << trap->calcsquare() << endl;
            break;
        }
		case 4: {
			double cateta;
			double catetb;

			do {
				cout << "Enter the first catet: " << endl;
				cin >> cateta;
				if (cateta < 0)
					cout << "Try again" << endl;
			} while (cateta < 0);

			do {
				cout << "Enter the second catet: " << endl;
				cin >> catetb;
				if (catetb < 0)
					cout << "Try again" << endl;
			} while (catetb < 0);

			triangle* tri = new triangle(cateta, catetb);
			shapes[3] = tri;

			cout << "Triangle square: " << tri->calcsquare() << endl;

			break;
		}
		case 5: {
			writefile("squares.txt", shapes, arraySize);
			break;
		}
		case 6: {
			readfile("squares.txt");
			break;
		}
		case 7: {
			break;
		}
        default:
            cout << "Try again" << endl;
        }
    } while (choice != 7);

	return 0;
}