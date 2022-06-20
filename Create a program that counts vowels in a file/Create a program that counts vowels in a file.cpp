// Create a program that counts vowels in a file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

// making the file a constant variable so its not hard to change later.
const string Filename = "Constitution.txt";

int main()
{

    cout << " ************************************************************ " << endl;
    cout << " ************ Welcome to my Letter Count Program ************ " << endl;
    cout << " ************************************************************ " << endl << endl;

    cout << "Analyzing file 'Constitution_of_the_United_States.html'..." << endl << endl;
    

    // making the variable to add all the vowels.
    int sum = 0;
    ifstream fs;

    // Opening the file.
    fs.open(Filename);

    // only works if the file is open.
    if (fs.is_open()) 
    {
       // declaring vowels to count.
        char letter;
        int a = 0;
        int e = 0;
        int s = 0;
        int n = 0;
        int l = 0;

        // making a while loop to count the amount of vowels.
        while (fs.get(letter)) 
        {
            if (letter == 'a'&&'A')
                a++;
            else if (letter == 'e')
                e++;
            else if (letter == 's')
                s++;
            else if (letter == 'n')
                n++;
            else if (letter == 'l')
                l++;
        }
        // printing the vowels
        cout << "The number of A's: ........................................" << a << endl;
        cout << "The number of E's: ........................................" << e << endl;
        cout << "The number of S's: ........................................" << s << endl;
        cout << "The number of N's: ........................................" << n << endl;
        cout << "The number of L's: ........................................" << l << endl;
        
        sum = a + e + s + n + l;

        cout << "The Letter count is: ......................................." << sum << endl;

    }


        
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
