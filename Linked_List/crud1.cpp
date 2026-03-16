#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = next;
    }
};
class LinkedList
{
public:
    Node *head = NULL;
    int count;

    LinkedList()
    {
        head = NULL;
        count = 0;
    }

    void create(int data)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
        }
        count++;
    }
    void viewdata()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
};
main()
{

    LinkedList list;
    int ch, element;
    while (1)
    {
        cout << "Press 1 for insert " << endl;
        cout << "Press 2 for view " << endl;
        cout << "Press 3 for update " << endl;
        cout << "Press 4 for delete " << endl;
        cout << "Press 5 for exits  " << endl;

        cout << "enter your choice :-";
        cin >> ch;

        if (ch == 5)
        {
            cout << "--------- Thank You ----------" << endl;
            break;
        }

        switch (ch)
        {
        case 1:
            cout << "Enter the element :- " << endl;
            cin >> element;
            list.create(element);

            break;
        case 2:
            list.viewdata();

            break;
        }
    }
}