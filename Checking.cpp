#include<iostream>
using namespace std;



int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2;

    cout << "Original List: ";
    printList(head);

    head = rotateRight(head, k);

    cout << "Rotated List: ";
    printList(head);

    return 0;
}