// Lab 12
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){

    ifstream fin;
	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program prompts for input and output filenames and prints out all lines in the input file with an @ in them." << endl;
	cout << endl;

	string defaultInputFile = "fileContainingEmails.txt";
	string inputFile;
	string defaultOutputFile = "copyPasteMyEmails.txt";
	string outputFile;

	cout << "Enter input filename [default: " << defaultInputFile << "]: ";
	getline(cin,inputFile);
	if(inputFile==""){
		inputFile = defaultInputFile;
	}
	cout << "Enter output filename [default: " << defaultOutputFile << "]: ";
	getline(cin,outputFile);
	if(outputFile==""){
			inputFile = defaultOutputFile;
	}
	fin.open(inputFile.c_str());
	ofstream fout;
    while(fin.good()){
    string line;
    getline(fin, line);
	for (int i = 0; i < line.length(); i++){
		if(line[i]=='@')
			cout << line << endl;
	}
   }
    fin.close();


}
