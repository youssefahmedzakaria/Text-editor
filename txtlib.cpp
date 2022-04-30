#include "txtheader.h"

void getName(){
    cout << "Enter The  Name Of  The Text File You Need To Apply Edits On .\nBe Sure File Extension is included .\n"
            ">> ";
    cin >> fileName;
    fstream dataFile;
    dataFile.open(fileName);
    while (dataFile.fail()) {
        cout <<"Can't Open File Wrong Data Given \nEnter Correct File Name.\n"
               ">> ";
        cin >> fileName;
        dataFile.open(fileName);
        dataFile.close();
    }
}

void addTxt() {

}

void displayContent() {

}


void emptyFile() {
  
}

void encryptFile() {

}

void decryptFile() {

}

void mergeFile() {
    ofstream dataFile;
    ifstream secondFile;
    dataFile.open(fileName, ios::app);
    cout << "Enter The Name Of The Second File You Need To Merge Please. \n>> ";
    cin >> secondName;
    secondFile.open(secondName);

    while (secondFile.fail()) {
        cout << "Can't Open File Wrong Data Given \nEnter Correct File Name.\n"
                ">> ";
        cin >> fileName;
        dataFile.open(fileName);
    }

    if (!dataFile.eof()) {
        string txt;
        secondFile >> txt;
        dataFile << ' ' << txt;
    }

    dataFile.close();
    secondFile.close();
    cout<<"Files Successfully Merged !\n";

}


void cntWords() {

}

void cntChar() {

}

void cntLines() {

}

void searchWord() {

}

void cntExistence() {

}

void upperCase() {

}

void lowerCase() {

}

void firstCaps() {

}







