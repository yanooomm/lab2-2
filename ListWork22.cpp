/* ListWork22  ��� ����������� ������ � ��������� �� ������ ������ �1
���������� �������� �������� � ����� ������� ������� �������� ������
� ������� ������ �� ��������� ������� ����������� ������*/

#include "pt4.h"
using namespace std;

void Solve()
{
    Task("ListWork22");
    PNode p1;
    int M, i = 1;
    pt >> M >> p1;
    PNode p2 = p1;
    while (p2 != NULL)
    {
        i++;
        if (i % 2 == 1)
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
