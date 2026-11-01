/*This challenge is about using a collection (list) of integers and allowing the user to select options from a menu to perform operations on the list.

Your program should display a menu with the following options:
- P – Print numbers
- A – Add a number
- M – Display mean of the numbers
- S – Display the smallest number
- L – Display the largest number
- Q – Quit
Enter your choice:

The program should only accept valid choices from the user. Both uppercase and lowercase selections should be allowed.

If an invalid choice is made, display:

Unknown selection, please try again

Then display the menu options again.

P / p – Print numbers
- If the list is empty, display: [] - the list is empty
- Otherwise, display all elements in square brackets, separated by spaces.
Example: [ 1 2 3 4 5 ]

A / a – Add a number

Prompt the user to enter an integer and add it to the list.

Example: 5 added

Duplicate entries are allowed.

M / m – Display the mean

Calculate and display the mean (average) of all elements in the list.

If the list is empty, display:

Unable to calculate the mean - no data

S / s – Display the smallest number

Display the smallest element in the list.

Example: The smallest number is 1

If the list is empty, display:

Unable to determine the smallest number - list is empty

L / l – Display the largest number

Display the largest element in the list.

Example: The largest number is 5

If the list is empty, display:

Unable to determine the largest number - list is empty

Q / q – Quit

Display Goodbye and terminate the program.

Before you begin: Write down the steps you need to take and decide in what order they should be performed. Think about which loops you should use and how you will implement the selection logic.

Additional functionality (optional):
- Search for a number in the list and, if found, display how many times it occurs.
- Clear the list using the vector class's .clear() method.
- Prevent duplicate entries.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> numbers{};
    char selection{};

    do
    {
        // Display menu
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: " << endl;
        cin >> selection;

        if (selection == 'P' || selection == 'p')
        {
            if (numbers.size() == 0)
                cout << "[] - the list is empty" << endl;
            else
            {
                cout << "[ ";
                for (auto num : numbers)
                    cout << num << " ";

                cout << "]" << endl;
            }
        }
        else if (selection == 'A' || selection == 'a')
        {
            int num_to_add{};

            cout << "Enter an integer to add to the list: ";
            cin >> num_to_add;

            numbers.push_back(num_to_add);

            cout << num_to_add << " added" << endl;
        }
        else if (selection == 'M' || selection == 'm')
        {
            if (numbers.size() == 0)
                cout << "Unable to calculate mean - no data" << endl;
            else
            {
                int total{};
                for (auto num : numbers)
                    total += num;
                cout << "The mean is: " << static_cast<double>(total) / numbers.size() << endl;
            }
        }
        else if (selection == 'S' || selection == 's')
        {
            if (numbers.size() == 0)
                cout << "Unable to determine the smallest - list is empty" << endl;
            else
            {
                int smallest = numbers.at(0);
                for (auto num : numbers)
                    if (num < smallest)
                        smallest = num;
                cout << "The smallest number is: " << smallest << endl;
            }
        }
        else if (selection == 'L' || selection == 'l')
        {
            if (numbers.size() == 0)
                cout << "Unable to determine the largest - list is empty" << endl;
            else
            {
                int largest = numbers.at(0);
                for (auto num : numbers)
                    if (num > largest)
                        largest = num;
                cout << "The largest number is: " << largest << endl;
            }
        }
        else if (selection == 'Q' || selection == 'q')
        {
            cout << "Goodbye" << endl;
        }
        else
        {
            cout << "Unknown selection, please try again" << endl;
        }
    } while (selection != 'q' && selection != 'Q');
}