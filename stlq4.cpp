#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* link;
};

Node* insertAtLast(Node* head, int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->link = NULL;
    if(head==NULL){
        head = newNode;
        return NULL;
    }
    Node* tempNode = head;
    while(tempNode->link!=NULL) {
        tempNode = tempNode->link;
    }
    tempNode->link = newNode;
    return head;
}

Node* splitlist(Node* a, int k) {
    Node* q = NULL;
    Node* p = a;
    int c = 0;
    while(p->link!=NULL && c<=k) {
        if(p->data%2==0) {
            insertAtLast(q, p->data);
            c++;
        }
        p = p->link;
    }
    while(p->link!=NULL) {
        if(p->data%2==1) {
            insertAtLast(q,p->data);
        }
        p = p->link;
    }
    if(c==k) {
        while(c>=0) {
            if(p->data%2==0) {
                c--;
            }
            p = p->link;
        }
        while(p->link!=NULL) {
            insertAtLast(q,p->data);
            p = p->link;
        }
    }
    return a;
}

int main() {
    Node* a = NULL;
    int n, x, k;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        a = insertAtLast(a, x);
    }
    cin >> k;
    a = splitlist(a, k);
    Node *temp;
    temp = a;
    while(a!=NULL){
        cout<<a->data<<" ";
    }
    return 0;
}
