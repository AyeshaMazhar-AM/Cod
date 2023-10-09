
#include <iostream>
#include<windows.h>
using namespace std;

void setcolor(int colorcode){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorcode);
}

int main() 
{
	char c, C;
    char op, answer;
    int result;
    int num1, num2;
    setcolor(500);
    cout<<"*** Simple Calculator ***"<<endl<<endl;
    {
    {
    top:
    setcolor(3);
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /) : ";
    cin >> op;

        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                    result = num1 / num2;
                else
                    cout << "Division by zero is not allowed." << endl;
                break;
            default:
                cout << "Invalid operator. Please try again." << endl;
                    }
    setcolor(6);
    cout << "Result is : " << result << endl<<endl;
}
    setcolor(500);
    cout<<"Press 1 to continue or 2 to exit : "<<endl;
    int in;
	cin>>in;
	
	if(in == 1)
	{
	goto top;
	}
}
    return 0;
}











