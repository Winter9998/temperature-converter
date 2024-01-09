#include <iostream>
using std::string;

int main() {
    using std::cout;

    char value;
    double input_temp;
    char convert_to;

    cout << "Choose your Temp Value °C, °F, °K (C/F/K) : " << std::endl;
    std::cin >> value;
    if (value == 'C' || value == 'c'){
        cout << "Choose the Temperature you wish to convert to : °F, °K (F/K) : ";
        std::cin >> convert_to;
        cout << "Enter your value : ";
        std::cin >> input_temp;
        
        if (convert_to == 'F' || convert_to == 'f'){
            input_temp = input_temp * 1.8 + 32;
        
        } else if (convert_to == 'K' || convert_to == 'k') {
            input_temp += 273.15;

        } else {
            cout << "Error While getting value\n";
            return 1;
        }

    } else if (value == 'F' || value == 'f'){
         cout << "Choose the Temperature you wish to convert to : °C, °K (C/K) : ";
        std::cin >> convert_to;
        cout << "Enter your value : ";
        std::cin >> input_temp;

        if (convert_to == 'C'){
            input_temp = input_temp / 1.8 - 32;
        
        } else if (convert_to == 'K' || convert_to == 'k') {
            input_temp = (input_temp - 32) * 5/9 + 273.15;
        } else {
            cout << "Error While getting value\n";

        }
    } else if (value == 'K' || value == 'k'){
         cout << "Choose the Temperature you wish to convert to : °F, °C (F/C) : ";
        std::cin >> convert_to;
        cout << "Enter your value : ";
        std::cin >> input_temp;

        if (convert_to == 'C' || convert_to == 'c'){
            input_temp -= 273.15;
        
        } else if (convert_to == 'F' || convert_to == 'f') {
            input_temp = (input_temp / 9/5) + 459.67;
        } else {
            cout << "Error While getting value" << std::endl;

        }
    }

     cout << "Converted temperature: " << input_temp << std::endl;
    return 0;
}