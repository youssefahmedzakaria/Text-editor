#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;
using std::cout; using std::ofstream;
using std::endl; using std::string;

void getchoice();
void addtext();
void display();
void emptyTheFile();
void encrypt();
void decrypt();
void merge();
void countNwords();
void countNcharacters();
void countNlines();
void search();
void countNrepeatedWord();
void upperCase();
void lowerCase();
void firstCaps();
void save();
void exit();


void getchoice() {
	int choice;

	while (true) {
        cout << "WELCOME ! \n";
        cout << "Choose what you want to apply : \n";

        cout << "1. Add new text to the end of the file \n";
        cout << "2. Display the content of the file \n";
        cout << "3. Empty the file \n";
        cout << "4. Encrypt the file content \n";
        cout << "5. Decrypt the file content \n";
        cout << "6. Merge another file \n";
        cout << "7. Count the number of words in the file \n";
        cout << "8. Count the number of characters in the file \n";
        cout << "9. Count the number of lines in the file \n";
        cout << "10. Search for a word in the file \n";
        cout << "11. Count the number of times a word exists in the file \n";
        cout << "12. Turn the file content to upper case \n";
        cout << "13. Turn the file content to lower case \n";
        cout << "14. Turn file content to 1st caps (1st character of each word is capital) \n";
        cout << "15. Save \n";
        cout << "16. Exit \n";

        cin >> choice;
        if (choice == 1) {
            addtext();
        }
        else if (choice == 2) {
            display();
        }
        else if (choice == 3) {
            emptyTheFile();
        }
        else if (choice == 4) {
            encrypt();
        }
        else if (choice == 5) {
            decrypt();
        }
        else if (choice == 6) {
            merge();
        }
        else if (choice == 7) {
            countNwords();
        }
        else if (choice == 8) {
            countNcharacters();
        }
        else if (choice == 9) {
            countNlines();
        }
        else if (choice == 10) {
            search();
        }
        else if (choice == 11) {
            countNrepeatedWord();
        }
        else if (choice == 12) {
            upperCase();
        }
        else if (choice == 13) {
            lowerCase();
        }
        else if (choice == 14) {
            firstCaps();
        }
        else if (choice == 15) {
            save();
        }
        else if (choice == 16) {
            exit();
        }
        else {
            cout << "Invalid Input! \n \a";
        }
    }

}


void addtext() {
    string fileName("test.txt");
    ofstream file_out;
    string str;
    cin.ignore();
    getline(cin, str);
    file_out.open(fileName, std::ios_base::app);
    file_out << "" << str << endl;
    cout << "Done ! \n \n" << endl;

}

void display() {
    string myText;
    ifstream fileName("test.txt");

    while (getline (fileName, myText)) {
        cout << myText <<"\n \n";
    }

fileName.close();

}

void emptyTheFile() {

    std::ofstream fileName;
fileName.open("test.txt", std::ofstream::out | std::ofstream::trunc);
fileName.close();

}

void encrypt() {

}

void decrypt() {

}

void merge() {

}

void countNwords() {

}

void countNcharacters() {

}

void countNlines() {

}

void search() {

}

void countNrepeatedWord() {

}

void upperCase() {

}

void lowerCase() {

}

void firstCaps() {

}
void save() {

}

void exit() {
    cout << "Thank You for using Our program, GoodBye \n";
    exit(0);
}

	
