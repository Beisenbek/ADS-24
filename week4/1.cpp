#include <iostream>
#include <algorithm>
using namespace std;


struct node{
    node * left;
    node * right;
    int val;
    node(int x){
        val = x;
        left = right = NULL;
    }
};

struct bst{
    public:
        bst(){
            root = NULL;
        }
        void add(int x){
            root = add(root, x);
        }
        void print(){
           print(root);
        }
        bool search(int x){
            return search(root, x) != NULL;
        }

    private:
        node * root;
        node * add(node * cur, int x){
            if(cur == NULL){
                cur = new node(x);
            }else if(cur->val > x){
                cur->left = add(cur->left, x);
            }else if(cur->val < x){
                cur->right = add(cur->right, x);
            }
            return cur;
        }

        void print(node * cur){
            if(cur != NULL){
                print(cur->left);
                cout << cur->val << " ";
                print(cur->right);
            }
        }

        node * search(node * cur, int x){
            if(cur == NULL) return NULL;
            if(cur->val == x) return cur;
            if(cur->val > x) return search(cur->left, x);
            return search(cur->right, x);
        }

};

int main(){

    int a[] = {4,5,6,1,2,9,10,3,7,8};
    int n = sizeof(a) / sizeof(int);

    bst * b = new bst();

    for(int i = 0; i < n; ++i){
        b->add(a[i]);
    }

    b->print();

    while(1){
        int x;
        cin >> x;
        if(x == 0) break;
        cout << " " << b->search(x) << endl;
    }
    
    return 0;
}