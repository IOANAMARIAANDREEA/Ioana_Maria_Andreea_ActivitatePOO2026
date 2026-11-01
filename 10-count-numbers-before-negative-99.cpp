#include <iostream>
#include <vector>

using namespace std;

/*
Exercise: Count Numbers Before -99

Given the following vector of integers:

{10, 20, 30, 40, -99, 50, 60}

Use a loop to determine how many integers are present
before you encounter the value -99.

- Do not count -99.
- Do not count any elements appearing after -99.
- If -99 is not present in the vector, count all elements.
- Store the final result in an integer variable named count.

*/

int main()
{

    vector<int> vec{10, 20, 30, 40, -99, 50, 60};
    int count{};

    for (auto valoare : vec)
    {

        if (valoare != -99)
            count++;
        else {
        break;


        }
    }
        cout << count << endl;


    return 0;
}


#include <iostream>
#include <vector>

using namespace std;

/*
Exercise: Count Numbers Before -99

Given a vector of integers, determine how many integers
are present before you encounter the value -99.

- Do not count -99.
- Do not count any elements appearing after -99.
- If -99 is not present, count all elements.
- Store the final result in an integer variable named count.

*/

int main()
{
    vector<int> vec{10, 20, 30, 40, -99, 50, 60};

    int count{0};
    size_t index{0};

    while (index < vec.size() && vec.at(index) != -99)
    {
        ++count;
        ++index;
    }

    cout << "Count: " << count << endl;

    return 0;
}