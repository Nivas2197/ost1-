#include <iostream>
using namespace std;

int main() {
    int marks,i=1;
    char choice;

    do {
        cout << "Enter marks for the subject "<< i <<" :";
        cin >> marks;
        if (marks < 0 || marks > 100) {
            cout << "Invalid marks! Please enter between 0 and 100." << endl;
        } else {
            switch (marks) {
                case 91 ... 100:  // for 100
                    cout << "Grade: A -Excellent Grade" << endl;
                    break;
                case 81 ... 90:
                    cout << "Grade: B -Very Good Grade" << endl;
                    break;
                case 66 ... 75:
                    cout << "Grade: C -Good Grade" << endl;
                    break;
                case 51 ... 65:
                    cout << "Grade: D -Needs Improvement in Grade" << endl;
                    break;
                case 35 ... 50:
                    cout << "Grade: E -Poor Grade" << endl;
                    break;
                default:
                    cout << "Grade: F -Failed" << endl;
            }
        }

        cout << "Do you want to enter marks for another subject? (y/n): ";
        cin >> choice;
        i+=1;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you! Program ended." << endl;
    return 0;
}

