// 924-DataStructures-Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <stack>

int main()
{
    // --------------------------------------------------
    std::cout << "\n\QUEUE EXAMPLE";
    std::queue<std::string> callQueue;

    callQueue.push("Benjamin");
    callQueue.push("Omar");
    callQueue.push("Maximilien");
    callQueue.push("Yanis");
    callQueue.push("Anthony");
    callQueue.push("Alex");
    callQueue.push("Hugo");
    callQueue.push("Jemoel");
    callQueue.push("Matteo");

    do
    {
        std::cout << "Student in class : " << callQueue.front() << '\n';
        std::cout << "Remaining students : " << callQueue.size() << '\n';
        callQueue.pop();
    } while (!callQueue.empty());

    // ---------------------------------------------------------
    std::cout << "\n\nSTACK EXAMPLE";
    std::stack<std::string> myStack;

    myStack.push("Benjamin");
    myStack.push("Omar");
    myStack.push("Maximilien");
    myStack.push("Yanis");
    myStack.push("Anthony");
    myStack.push("Alex");
    myStack.push("Hugo");
    myStack.push("Jemoel");
    myStack.push("Matteo");

    do
    {
        std::cout << "Student in class : " << myStack.top() << '\n';
        std::cout << "Remaining students : " << myStack.size() << '\n';
        myStack.pop();
    } while (!myStack.empty());

}
