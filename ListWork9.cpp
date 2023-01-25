// ListWork9 Дан односвязный список и указатель на голову списка Р1. 
// Необходимо вывести указатель на последний элемент этого списка Рх

#include "pt4.h"

using namespace std;

void Solve()
{
    Task("ListWork9");
    PNode cur, next;
    pt >> cur;
    next = cur->Next;
    while (next != NULL)
    {
        cur = next;
        next = cur->Next;
    }
    pt << cur;
}
