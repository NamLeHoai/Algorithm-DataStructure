#include <iostream>
using namespace std;

// tạo func: insert, view, deletion;

//tạo srtuct node single_linked_list
typedef struct Node
{
    //data
    int info;
    //pointer
    Node *next;
} Node;

//con trỏ *start trỏ đến node đầu danh sách
Node *start = NULL;

// hàm tạo node
Node *createNode()
{
    Node *temp = (Node *)malloc(sizeof(Node));
    return temp;
}

//insert to first location
void insert()
{
    Node *temp = createNode();
    // lấy giá trị cho p
    cout << "nhập vào gtri " << endl;
    cin >> temp->info;
    temp->next = NULL;
    // nếu chưa có node nào
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        temp->next = start;
        start = temp;
    }
}

//func delete first position
void deletion()
{
    if (start == NULL)
    {
        cout << "list is empty" << endl;
    }
    else
    {
        Node *temp;
        temp = start;
        //start sẽ lưu địa chỉ node kế tiếp
        start = start->next;
        free(temp);
    }
}

//duyệt linked_list
void traverse()
{
    Node *temp;
    temp = start;
    while (temp != NULL)
    {
        cout << temp->info << "   ";
        temp = temp->next;
    }
}

//merge
Node *merge(Node *head1, Node *head2)
{
    if (head1 == NULL)
    {
        head1 = head2;
    }
    else
    {
        Node *temp = head2;
        Node *p = head1;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
    return head1;
}

int main()
{
    int n;
    while (1)
    {
        cout << endl;
        cout << "1.nhập vào gtri cho node đầu " << endl;
        cout << "2.xoá gtri tại node đầu" << endl;
        cout << "3.view value" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            insert();
            break;
        case 2:
            deletion();
            break;
        case 3:
            traverse();
            break;
        default:
            cout << "lua chon k hop le" << endl;
            break;
        }
    }

    //merge linked_list

    return 0;
}