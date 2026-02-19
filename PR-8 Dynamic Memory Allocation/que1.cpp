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
    void createElement(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            newNode->data = data;
            newNode->next = head;
            head = newNode;
        }
        count++;
    }
    void display()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }

    void serachElement(int index)
    {

        if (index < 0 || index >= count)
        {
            cout << "Invalid Index" << endl;
        }
        else
        {
            Node *ptr = head;
            for (int i = 0; i < index; i++)
            {
                ptr = ptr->next;
            }

            cout << ptr->data << endl;
        }
    }
    void deleteElement(int index)
    {

        if (index < 0 || index >= count)
        {
            cout << "Invalid Index" << endl;
        }

        Node *ptr;
        if (index == 0)
        {
            ptr = head;
            head = head->next;
        }
        else
        {
            Node *prev = head;
            for (int i = 0; i < index - 1; i++)
            {
                prev = prev->next;
            }
            ptr = prev->next;
            prev->next = ptr->next;
        }

        delete ptr;
        count--;
    }
    void reverse()
    {
        Node *prev = NULL;
        Node *current = head;
        Node *next = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
};
int main()
{

    LinkedList list;
    int ch, element, index;
    while (1)
    {
        cout << "Press 1 for insert at beggining " << endl;
        cout << "Press 2 for display  " << endl;
        cout << "Press 3 for search  " << endl;
        cout << "Press 4 for Delete " << endl;
        cout << "Press 5 for reverse " << endl;
        cout << "Press 0 exits " << endl;

        cout << "Enter the choice :- " << endl;
        cin >> ch;

        if (ch == 0)
        {
            cout << "--------- Thank You -------" << endl;
            break;
        }

        switch (ch)
        {
        case 1:
            cout << "Enter the element to be inserted at beggining :- ";
            cin >> element;
            list.createElement(element);
            cout << "-------------- Insert Sucessfully ----------------" << endl;
            break;

        case 2:
            list.display();
            break;

        case 3:
            cout << "Enter the Index to search :- ";
            cin >> index;
            list.serachElement(index);
            break;

        case 4:
            cout << "Enter the element to be delete :-  ";
            cin >> index;
            list.deleteElement(index);
            break;
        case 5:
            list.reverse();
            break;

        default:
            cout << "Invalid Choice !!!!";
        }
    }

    return 0;
}