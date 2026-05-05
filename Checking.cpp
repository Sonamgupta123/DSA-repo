#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
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

int main(){
   
    return 0;
}