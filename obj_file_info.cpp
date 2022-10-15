#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;


int main()
{
        //making a command to get all the information about a given ELF file
        string strcommand1 = "readelf -a ";
        string filename = "";
        cout << "Enter the object file name here: ";
        cin >> filename;
        strcommand1 = strcommand1 + filename + " >> header";
        const char* command1 = strcommand1.c_str();


        //creating a file to store our output

        fstream header;
        header.open("header", ios::out | ios::in);
        system(command1);

        //reading from the file and printing what we need
        string res;
        while (1) {
            header >> res;
            if (res == "Data:") {
                    header >> res;
                    header >> res;
                    header >> res;
                    cout << "Endianness: " << res << " endian" << endl;
            }
            if (res == "Machine:") {
                    header >> res;
                    cout << "Platform: " << res << " ";
                    header >> res;
                    cout << res << " ";
                    header >> res;
                    cout << res << " ";
                    header >> res;
                    cout << res << endl;
            }
            if (res == "'.symtab'") {
                    header >> res;
                    header >> res;
                    cout << "The number of symbols: " << res << endl;

            }
            if(header.eof())
                break;

         }
         header.close();

}

