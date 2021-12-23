#include <iostream>
#include <stack>
using namespace std;

// Stack implementation 
int main()
{
    stack<string> stack;
    stack.push("A");    
    stack.push("B");    
    stack.push("C");    
    stack.push("D");    

    // returns the total number of elements present in the stack
    cout << "The stack size is " << stack.size() << endl;

    // prints the top of the stack (`D`)
    cout << "The top element is " << stack.top() << endl;

    stack.pop();        // removing the top element (D)
    stack.pop();        // removing the next top (C)

    cout << "The stack size is " << stack.size() << endl;

    // check if the stack is empty
    if (stack.empty()) {
        cout << "The stack is empty\n";
    }
    else {
        cout << "The stack is not empty\n";
    }


    while (!stack.empty())
    {
        cout << stack.top() ;
        cout << "The Stack Element\n";
        stack.pop();
    }


    return 0;
}