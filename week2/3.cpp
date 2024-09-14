#include <iostream>

using namespace std;

struct node{
    int val;
    node * next;
    node * prev;
    node(int x){
        val = x;
        prev = next = NULL;
    }
};

struct dll{
    private:
        node * head;
        node * tail;
        int len;
    
    public:
        dll(){
            head = tail = NULL;
            len = 0;
        }
        void push_back(int x){
            node * n = new node(x);
            len++;
            if(tail == NULL){
                head = tail = n;
            }else{
                tail->next = n;
                n->prev = tail;
                tail = n;
            }
        }
        void push_front(int x){
            node * n = new node(x);
            len++;
            if(head == NULL){
                head = tail = n;
            }else{
                head->prev = n;
                n->next = head;
                head = n;
            }
        }
        void print(){
            node * cur = head;
            while(cur != NULL){
                cout << cur->val << " ";
                cur = cur->next;
            }
        }
};

int main(){

    dll d1;
    int a[] = {1, 20, 10, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);

    for(int i = 0; i < n; ++i){
        if(i%2==0)
            d1.push_back(a[i]);
        else 
            d1.push_front(a[i]);
    }
    d1.print();
    return 0;
}