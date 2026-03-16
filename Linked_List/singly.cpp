#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    Node *HEAD = NULL;
    HEAD = new Node();

    HEAD->data = 25;
    HEAD->next = NULL;

    Node *n2 = new Node();
    n2->data = 55;
    n2->next = NULL;
    HEAD->next = n2;

    Node *n3 = new Node();
    n3->data = 66;
    n3->next = NULL;
    n2->next = n3;

    cout << "First Node :- " << HEAD->data << "Address :- " << HEAD->next << endl;
    cout << "Second Node :- " << n2->data << "Address :- " << n2->next << endl;
    cout << "Third Node :- " << n3->data << "Address :- " << n3->next << endl;

    return 0;
}