#include <iostream>

using namespace std;

int main() {
  
    int numbers[] = {1, 2, 3, 4, 5};

    
    cout << "Array Elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    cout << "Sum of Array Elements: " << sum << endl;

    return 0;
}

//String Operations
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string greeting = "Hello, C++!";

    cout << "String: " << greeting << endl;

    cout << "Individual Characters: ";
    for (char ch : greeting) {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}


//File Operations
#include <iostream>
#include <fstream>

using namespace std;

int main() {
   
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, C++ File I/O!";
        outFile.close();
        cout << "Data written to file successfully.\n";
    } else {
        cout << "Unable to open file for writing.\n";
    }

    ifstream inFile("example.txt");
    if (inFile.is_open()) {
        string content;
        getline(inFile, content);
        inFile.close();
        cout << "File Content: " << content << endl;
    } else {
        cout << "Unable to open file for reading.\n";
    }

    return 0;
}







