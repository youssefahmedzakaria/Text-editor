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
    int wordsCnt = 1;
    char pointer;
    ifstream dataFile;
    dataFile.open(fileName);
    dataFile.seekg(0, ios::beg);
    while (dataFile) {

        dataFile.get(pointer);
        if (pointer == ' ' || pointer == '\n')
            wordsCnt += 1;
    }
    dataFile.close();
    cout << "Number of words in the given file =  " << wordsCnt << "\n";
}

void cntChar() {
    int charCnt = 0;
    char pointer;
    ifstream dataFile;
    dataFile.open(fileName);
    dataFile.seekg(0, ios::beg);
    while (dataFile.get(pointer)) {
        if (pointer == EOF) {
            break;
        }
        charCnt += 1;
    }
    dataFile.close();
    cout << "Number of characters in the given file =  " << charCnt << "\n";
}

void cntLines() {
    int linesCnt = 1;
    char pointer;
    ifstream dataFile;
    dataFile.open(fileName);
    dataFile.seekg(0, ios::beg);
    while (dataFile) {

        dataFile.get(pointer);
        if (pointer == '\n')
            linesCnt += 1;
    }
    dataFile.close();
    cout << "Number of lines in the given file =  " << linesCnt << "\n";
}



void searchWord() {
    string search; string temp;
    int cnt = 0;
    ifstream dataFile(fileName);
    cout << " Enter the word you want to want to check it's existence.\n>> ";
    cin >> search;

    while (dataFile >> temp) {
        if (temp == search) {
            ++cnt;
        }
    }
    if (cnt > 0) {
        cout << "Word is found in the file.";
    }
    else {
        cout << "The word doesn't exist.";
    }
}

void cntExistence() {

}

void upperCase() {
    vector<char> container; char ch;
    fstream dataFile;

    dataFile.open(fileName,ios::in);
    while(!dataFile.eof() && !dataFile.fail()){
        dataFile.get(ch);
        container.push_back(toupper(ch));
    }
    dataFile.close();

    dataFile.open(fileName,ios::out);
    for(int i=0 ; i<container.size()-1 ; ++i){
        dataFile.put(container[i]);
    }
    dataFile.close();

    cout<<"All characters are now in upper case. \n";
}

void lowerCase() {
    vector<char> container; char ch;
    fstream dataFile;

    dataFile.open(fileName,ios::in);
    while(!dataFile.eof() && !dataFile.fail()){
        dataFile.get(ch);
        container.push_back(tolower(ch));
    }
    dataFile.close();

    dataFile.open(fileName,ios::out);
    for(int i=0 ; i<container.size()-1 ; ++i){
        dataFile.put(container[i]);
    }
    dataFile.close();

    cout<<"All characters are now in lower case. \n";

}

void firstCaps() {
    string str;
    ifstream inFile;
    ofstream outFile;
    stringstream str_stream;
    char filename[30];
    int i = 0, temp = 0;

    inFile.open(fileName);
    str_stream << inFile.rdbuf();
    inFile.close();
    str = str_stream.str();
    while (str[i]) {
        if (temp == 0) {
            str[i] = toupper(str[i]);
            temp = 1;
        } else if (isspace(str[i]))
            temp = 0;
        i++;
    }
    outFile.open(filename);
    outFile << str;
    cout << "File is now in First Caps. \n";
}

void save(){
    char choice;
    cout << "Progress saved successfully, Enter (0) to save in same file or any key to save to a new file. \n>> ";
    cin>>choice;

    if (choice == '0') return;
    else {
        string text;
        ofstream newFile; ifstream dataFile;
        dataFile.open(fileName);
        newFile.open("New Saved File.txt");
        newFile.close();

        newFile.open("New Saved File.txt");

        if (newFile && dataFile) {
            while(getline(dataFile,text)){
                newFile << text << "\n";
            }
        }

        dataFile.close();
        newFile.close();
        cout<<"File saved successfully !\n";

    }
}






