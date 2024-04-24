#include <iostream>

using namespace std;

int add(int f, int g);
int subtract(int f, int g);
int multiply(int f, int g);
double divide(int f, int g);
double modulus_num(int f,int g);
int main()
{
    do {
            char continueCharacter;
            int num1,num2,choice;
        cout<< "==========================" << endl;
        cout << "Menu:" << endl;
        cout << "======================" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5.Modulus" << endl;
        cout << "Enter your choice (1-5)";
        cin >> choice;

        cout << "Enter two integers: ";
        cin >> num1 >> num2;

    if(choice == 1){
        cout << "Result:"<<add(num1,num2) << endl;
    }
    else if(choice == 2){
        cout << "Result:"<< subtract(num1,num2) << endl;
    }
    else if(choice == 3){
        cout << "Result:" <<multiply(num1,num2) << endl;
    }
        else if (choice == 4 && num2 != 0){
                cout << "Result: " << divide(num1, num2) << endl;
        }
        else if(choice==5) {
            cout << "Result:"<<modulus_num(num1,num2)<< endl;
            cout << "Press y or Y to continue:" << endl;
                cin>> continueCharacter;
        }
            else{
               cout << "please enter the correct choice" << endl;
               cout << "Press y or Y to continue:" << endl;
               cin>> continueCharacter;
            }
}
  while(continueCharacter=='y' || continueCharacter=='Y');

}
return 0;
int add(int f, int g) {
    return f + g;
}

int subtract(int f, int g) {
    return f - g;
}

int multiply(int f, int g) {
    return f * g;
}

double divide(int f, int g) {
    return static_cast<double>(f) /g ;
}
double modulus_num(int f,int g){
return modulus_num f%g;
}
