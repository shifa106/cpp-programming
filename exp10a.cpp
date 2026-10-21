#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream file1;
    string data;

    // Open file for writing
    file1.open("stud.txt",ios::app);
    file1<< "Welcome to cpp programming\n welcome to DYPCET\n Thank you for all";
    cout<<"File created successfully";
 
    file1.close();

    // Open file for reading
    ifstream file2;
    file2.open("stud.txt");

    while(getline(file2, data))
    {
        cout << data << endl;
    }

    file2.close();

    return 0;
}

//Welcome to cpp programming