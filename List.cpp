#include "List.hpp"

template <class T>
void List<T>::add(T word, T description)
{
    Node<T>* pNode = new Node<T>;
    pNode->wordCommand = word;
    pNode->wordDescription = description;
    pNode->next = pHead;
    pHead = pNode;
}

template <class T>
void List<T>::remove(T word)
{
    Node<T>* pCur = pHead;
    Node<T>* pPrev = NULL;
    while (pCur != NULL)
    {
        if (pCur->Word == word)
        {
            if(pCur == pHead)
            {
                pHead = pCur->pNext;
            }
            else
            {
                pPrev->pNext = pCur->pNext;
            }
            free(pCur);
            return;
        }
        pPrev = pCur;
        pCur = pCur->pNext;
    }
}

template <class T>
void List<T>::Display(int num)
{
    int counter = 1;
    Node<T>* pCur = pHead;
while(counter != num)
{
    cout << counter << ")" << pCur->word << endl;
    cout << pCur->Description << endl;
    ++counter;
    pCur->pNext;
}
}
