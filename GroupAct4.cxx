#include <iostream>
using namespace std;
int main(){
    // ito yong for loop
    for (int j = 10;  j < 25 ; j++){        
        cout << "No:" << j << endl;
        }
        //ito nmn yong while loop 
    int i =10;
    while (i > 5 ) {
        cout << i << "\n"; i--;
    }
    // do while nmn ito
    int k = 15;
     do{
         cout << "tama batong ginagawa mo" << endl;
         // so if ni lessthan mo ito(<)condition false na aga if greaterthan namn(>) magiging infinite loop sya walang katapusan
         }while (k < 5); 
    return 0;
    }