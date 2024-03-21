//
//  main.cpp
//  Atomic_Composition
//
//  Created by Beza Nigatu on 2/3/23.
//

#include <iostream>

using namespace std;



int main() {

    int userInput;
    int atomicNum;
    int proton, neutron, electron;
    int charge;
    double atomicMass;
    double avgAtomicMass;
    double abundance;

    cout << "Enter the number of what you would like to find:" << endl;
    cout << "1 = Atomic Composition (proton/neutron/electron)\n"
         << "2 = Average Atomic Mass & Isotopic Abundance\n"
         << "3 = Ion # of Proton/Electron\n";


    do{
        cout << "Please enter a valid number: ";
        cin >> userInput;
    } while(!(userInput == 1) & !(userInput == 2) & !(userInput == 3));

    

    switch(userInput){
        case 1:
            cout << "Atomic Composition of elements:\n" << "(Find # of Proton, Neutron & Electron)\n"; //For neutral atom*
            cout << "What is the element's superscript? (upper; atomic #)\n";
                cin >> atomicNum;
            cout << "What is the element's subscript? (lower; atomic weight)\n";
                cin >> atomicMass;

            proton = atomicNum;
            neutron = atomicMass - proton;
            electron = atomicNum;

            cout << "# of Proton(s): " << proton << endl;
            cout << "# of Neutron(s): " << neutron << endl;
            cout << "# of Electron(s): " << electron << endl;
        break;

            
            
        case 2:
            cout << "AVERAGE Atomic Mass:\n"
                 << "What's the atomic mass? ";
                cin >> atomicMass;
            cout << "What's the abundance fraction (decimal)? ";
                cin >> abundance;
            

            avgAtomicMass = atomicMass * abundance;
            cout << "Average atomic mass = " << avgAtomicMass
                 << " amu per isotope" << endl;
        break;

            

        case 3:
            cout << "# of Proton/Electron in Ion\n";
            cout << "What is the element's superscript? (upper; charge) ";
                cin >> charge;
            cout << "What is the element's atomic number? ";
                cin >> atomicNum;
            cout << "Enter 1 = metal (cation)\n" << "or Enter 2 = nonmetal (anion)\n";

            proton = atomicNum;

            do{ //executes once before checking condition
                cout << "Please enter a valid number: ";
                cin >> userInput;
            } while ( !(userInput == 1) & !(userInput == 2) );



            if (userInput == 1){
                electron = proton - charge;
            }
                else if (userInput == 2){
                    electron = proton + charge;
                }
                    else {
                        cout << "Enter 1 or 2";
                        break;
                    }
            
            cout << "Proton # of ion: " << proton << endl;
            cout << "Electron # of ion: " << electron << endl;
        break;
    }

    return 0;
}
