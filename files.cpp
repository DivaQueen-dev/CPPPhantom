#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // WRITING TO FILE
    ofstream outfile("data.txt");  // Direct string literal works
    
    if(!outfile) {
        cout << "Error in creating file\n";
        return 1;
    }
    
    outfile << "C++ Programming\n";
    outfile << "File Handling Operations\n";
    outfile << "Input and Output Streams\n";
    
    outfile.close();
    cout << "Data written successfully\n\n";
    
    // READING FROM FILE
    ifstream infile("data.txt");  // Direct string literal works
    
    if(!infile) {
        cout << "Error in opening file\n";
        return 1;
    }
    
    string content;
    cout << "File Contents:\n";
    
    while(getline(infile, content)) {
        cout << content << endl;
    }
    
    infile.close();
    cout << "File operations completed\n";
    
    return 0;
}
