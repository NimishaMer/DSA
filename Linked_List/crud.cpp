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
        this->next = NULL;
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

    void update(int element, int pos)
    {
        if (pos < 0 || pos >= count)
        {
            cout << "Invalid position" << endl;
            return;
        }
        Node *ptr = head;
        for (int i = 0; i < pos; i++)
        {
            ptr = ptr->next;
        }
        ptr->data = element;
    }
    void deleted(int pos)
    {
        if (pos < 0 || pos >= count)
        {
            cout << "Invalid position" << endl;
            return;
        }
        Node *ptr;
        if (pos == 0)
        {
            ptr = head;
            head = head->next;
        }
        else
        {
            Node *prev = head;
            for (int i = 0; i < pos - 1; i++)
            {
                prev = prev->next;
            }
            ptr = prev->next;
            prev->next = ptr->next;
        }
        delete ptr;
        count--;
        cout << "delete success..." << endl;
    }
};
int main()
{
    LinkedList list;
    int ch, element, pos;
    while (1)
    {
        cout << "Press 1 for Create Node " << endl;
        cout << "Press 2 for View Node " << endl;
        cout << "Press 3 for Update Node " << endl;
        cout << "Press 4 for Delete Node " << endl;
        cout << "Press 0 for Exit " << endl;

        cout << "Enter Your Choice :- ";
        cin >> ch;

        if (ch == 0)
        {
            cout << "--Thank You---" << endl;
            break;
        }

        switch (ch)
        {
        case 1:
            cout << "Enter the Element :- ";
            cin >> element;
            list.create(element);

            cout << "Succesfully create..." << endl;

            break;

        case 2:
            list.viewdata();
            break;

        case 3:
            cout << "Enter the element to be updated" << endl;
            cin >> element;
            cout << "Enter the position to be updated" << endl;
            cin >> pos;

            list.update(element, pos);
            cout << "updated succssfully ..." << endl;
            break;

        case 4:
            cout << "Enter the position to be deleted" << endl;
            cin >> pos;
            list.deleted(pos);
            break;
        }
    }

    return 0;
}