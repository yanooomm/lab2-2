// ListWork9 ��� ����������� ������ � ��������� �� ������ ������ �1. 
// ���������� ������� ��������� �� ��������� ������� ����� ������ ��

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
