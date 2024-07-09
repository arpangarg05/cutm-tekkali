#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{   
    string name;
    string output;
    cout<<"enter name and roll number: ";
    getline(cin,name);
    //cout<<name<<endl;;

    ofstream fileout("Fstream_oop.txt");
    fileout<<name;
    fileout.close();

    ifstream filein("Fstream_oop.txt");
    getline(filein,output);
    cout<<output<<endl;

    return 0;
}
