#include "header.h"

int inArray(string arr[], string obj, int size){
    for(int i = 0; i < size; i++)
        if (arr[i] == obj)
            return i;
    return -1;
}

void getOperand(int first, int second) 
{
    string operation; 

    cout << "Please enter your operand: ";
    cin >> operation;

    if (operation == "+" || operation == "plus")
        cout << "The sum of " << first << " and " << second << " is " << first+second << ".\n";
    else if (operation == "-" || operation == "minus")
        cout << "The difference of " << first << " and " << second << " is " << first-second << ".\n";
    else if (operation == "*" || operation == "mult")
        cout << "The product of " << first << " and " << second << " is " << first*second << ".\n";
    else if (operation == "/" || operation == "div")
        cout << "The quotient of " << first << " and " << second << " is " << first/second << ".\n";
    else 
        cout << "So sorry. That was an invalid operand.";
}

int main(){
    string words[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string digits[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    string a;
    string b;
    int indexDigit;
    int indexWord;
    int first;
    int second;

    cout << "Please enter your first digit: ";
    cin >> a;

    indexDigit = inArray(digits, a, 10);
    indexWord = inArray(words, a, 10);

    // first is digit
    if (indexDigit != -1)
    {
        first = indexDigit;
        
        cout << "Please enter your second digit: ";
        cin >> b;

        indexDigit = inArray(digits, b, 10);
        indexWord = inArray(words, b, 10);

        // second is digit
        if (indexDigit != -1)  
        {
            second = indexDigit;
            getOperand(first, second);
        }

        // second is word
        else if (indexWord != -1)
        {
            second = indexWord;
            getOperand(first, second);
        }

        else{
            cout << "Whoops! The second number was not a digit.";
        }
    }
    
    // first is word
    else if (indexWord != -1)
    {
        first = indexWord;

        cout << "Please enter your second digit: ";
        cin >> b;

        indexDigit = inArray(digits, b, 10);
        indexWord = inArray(words, b, 10);

        // second is digit
        if (indexDigit != -1)  
        {
            second = indexDigit;
            getOperand(first, second);
        }

        // second is word
        else if (indexWord -1)
        {
            second = indexWord;
            getOperand(first, second);
        }
        else{
            cout << "Whoops! The second number was not a digit.";
        }
    }

    else {
            cout << "Whoops! The first number was not a digit.";
        }
    }

