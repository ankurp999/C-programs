#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class SLL
{
    node *start;

public:
    SLL() : start(NULL) {}
    void seggregate(SLL &n)
    {

        node *temp = start;
        while (temp->next)
        {
            if (temp->data % 2 == 0)
                n.inesrtAtLast(temp->data);
            temp = temp->next;
        }
        temp = start;
        while (temp->next)
        {
            if (temp->data % 2 != 0)
                n.inesrtAtLast(temp->data);
            temp = temp->next;
        }
    }

    void reverseloop()
    {
        node *current = start;
        node *prev = NULL;
        while (current != NULL)
        {
            node *next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        start = prev;
    }

    void insertAtStart(int data)
    {
        // creat a node
        node *n = new node;
        n->data = data;
        n->next = start;
        start = n;
    }
    void middile()
    {
        node *fast = start;
        node *slow = start;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << slow->data;
    }
    void docylic(int a)
    {
        node *temp = start;
        node *temp1 = start;
        int cnta = 0;
        while (temp->next)
        {
            temp = temp->next;
        }
        while (cnta++ < a)
        {
            temp1 = temp1->next;
        }
        temp->next = temp1;
    }
    bool detectcycle()
    {
        node *fast = start;
        node *slow = start;
        if (start == NULL)
            return false;
        while (fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
                return true;
        }
        return false;
    }
    int returnnode()
    {
        node *fast = start;
        node *slow = start;
        while (fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
                break;
        }
        node *temp = start;
        int count = 0;
        while (temp != slow)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
    void display()
    {
        node *temp = start;
        cout << "\nDisplay ---->\n";
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int lenghtOfLoop()
    {
        node *slow = start;
        node *fast = start;
        while (true)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow)
                break;
        }
        int count = 0;
        while (slow->next != fast)
        {
            count++;
            slow = slow->next;
        }
        return count;
    }
    bool palindrome(SLL &n)
    {
        node *temp = this->start;
        node *temp1 = n.start;
        while (temp->next && temp1->next)
        {
            if (temp->data != temp1->data)
                return false;
            temp = temp->next;
            temp1 = temp1->next;
        }
        return true;
    }

    void sort()
    {
        node *temp = start;
        while (temp != NULL)
        {
            node *temp1 = temp->next;
            while (temp1 != NULL)
            {
                if (temp->data > temp1->data)
                {
                    swap(temp->data, temp1->data);
                }
                temp1 = temp1->next;
            }
            temp = temp->next;
        }
    }
    int IsIntersect(SLL &n)
    {

        node *temp1 = this->start;
        while (temp1->next)
        {
            node *temp = n.start;
            while (temp->next)
            {
                if (temp == temp1)
                    return temp->data;
                temp = temp->next;
            }
            temp1 = temp1->next;
        }
        return 0;
    }

    void MakeIntersection(SLL &n)
    {
        node *temp = n.start;
        while (temp->next)
            temp = temp->next;
        cout << "\nIn which no. of node the list intersect\n";
        int s;
        cin >> s;
        int count = 1;

        // ye travers krke bada wala list hai
        node *temp1 = start;
        while (count < s)
        {
            temp1 = temp1->next;
            count++;
        }
        temp->next = temp1->next;
    }
    void inesrtAtLast(int data)
    {
        // creat a node
        node *n = new node;
        if (start == NULL)
        {
            insertAtStart(data);
            return;
        }
        n->data = data;
        n->next = NULL;

        node *temp = start; // for traversing till last Node
        while (temp->next)
            temp = temp->next;
        temp->next = n;
    }
    int lenght()
    {
        node *temp = start;
        int size = 0;
        while (temp)
        {
            size++;
            temp = temp->next;
        }
        return size;
    }
    SLL(SLL &n)
    {
        node *t;
        t = n.start;
        this->start = NULL;
        while (t)
        {
            this->inesrtAtLast(t->data);
            t = t->next;
        }
    }
    void AddOneLinkedList(SLL &n, int lenght, int carry)
    {
        node *temp = n.start;
        int count = 0;
        while (count < lenght - 1)
        {
            temp = temp->next;
            count++;
        }
        if (lenght == 1)
        {
            temp->data = (temp->data + carry);
            return;
        }
        int data = (temp->data + carry);
        temp->data = (temp->data + carry) % 10;
        carry = data / 10;
        AddOneLinkedList(n, lenght - 1, carry);
    }
    void AddTwoList(SLL &n, int len1, int len2, int carry )
    {
    node* temp =  start;
    node* temp1 = n.start;
    int cnt = 1 ,cnt1 = 1;

    if(len1 == 1){
        temp1 -> data = temp1 ->data % 10;
        AddOneLinkedList(n,len1,carry);
        return ;
    }
    while(cnt++ < len2){
        temp = temp -> next ;
     }

    while(cnt1++ < len1){
        temp1 = temp1 -> next ;
     }
      
    int data = temp -> data + temp1 -> data + carry;
    temp1 -> data = data % 10;
    carry = data / 10;

    AddTwoList(n,len1-1,len2-1,carry);  
    }
    void reversekgroup(int k){
         if(start == NULL)
         return ;
         int cnt = 1;
        node* temp = start;
        while(cnt < k){
          temp = temp -> next;
        }
        while()

    }
};

int main()
{
    SLL s,s1;
    s.inesrtAtLast(9);
    s.inesrtAtLast(9);
    s.inesrtAtLast(9);
    s.inesrtAtLast(9);
    s.inesrtAtLast(9);

    s1.inesrtAtLast(9);
    s1.inesrtAtLast(7);
    s1.inesrtAtLast(1);
    s1.inesrtAtLast(7);
    s1.inesrtAtLast(7);

    s1.display();
    s1.sort();
    s1.display();
    

    // s.MakeIntersection(s1);

    // s.docylic(0);
    // if (s.detectcycle())
    //     cout << "Cycle exist";
    // else
    //     cout << "Cycle not exist";
    // cout << endl
    //      << "Tail is connect to node:" << s.returnnode();
    //      cout << endl << s.lenghtOfLoop();
    // SLL s1(s);
    // s1.reverseloop();
    // s.MakeIntersection(s1);
    // s1.AddOneLinkedList(s1,s1.lenght(),1);
   
}