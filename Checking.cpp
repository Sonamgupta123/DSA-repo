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


int main(){
   
    return 0;
}