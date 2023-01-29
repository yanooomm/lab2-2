/*Дан односвязный линейный список и указатель на голову р1.
Необходимо вставить значение М после каждого К-го элемента
списка и вывести ссылку на последний элемент полученного списка р2*/
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("ListWork59");
    PNode p1;
    int M, i = 1, K;
    pt >> M >> K >> p1;
    PNode p2 = p1;
    while (p2 != NULL)
    {
        i++;
        if (i % K == 1)
        {
            PNode Node;
            Node = new TNode;
            Node->Data = M;
            Node->Next = p2->Next;
            p2->Next = Node;
            p2 = p2->Next;
        }
        if (p2->Next == NULL)
            pt << p2;
        p2 = p2->Next;
    }

}
