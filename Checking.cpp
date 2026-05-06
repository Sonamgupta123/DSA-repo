#include<iostream>
using namespace std;


// Function to rotate list
ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next || k == 0) return head;

    // Step 1: Find length
    ListNode* temp = head;
    int n = 1;
    while (temp->next) {
        temp = temp->next;
        n++;
    }

    // Step 2: Make circular
    temp->next = head;

    // Step 3: Optimize k
    k = k % n;
    int stepsToNewHead = n - k;

    // Step 4: Find new tail
    ListNode* newTail = temp;
    while (stepsToNewHead--) {
        newTail = newTail->next;
    }

    // Step 5: Break circle
    ListNode* newHead = newTail->next;
    newTail->next = NULL;

    return newHead;
}

// Function to print list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

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