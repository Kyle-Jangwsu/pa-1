using namespace std;
#include <fstream>
#include <string>
#include <iostream>
//#include "resources.hpp"
template <class T>
struct Node
{
    T Word;
    T Description;
    Node* pNext;
};

template <class T>
class List
{
public:

void add(T word,T description); //function to add a command and its descriptions
void remove (T word); // function to remove a word from the word bank
//int search(T found); // function to search for a word
void Display(int num); // function to display all the commands


private:
Node<T>* pHead;
};
