//
// pointers lecture 01.04.2022
//


int ain(){
    struct node {
        int val;
        struct node* next;
    };
    struct node* root;
    int cnt;
    void p;
    cnt = 0;
    p = root;
    while (p != NULL){
        if (p->val == x) {cnt++;}
        p = p->next;
    }
}


void inc(int* i){
    *i++;
}
int main(){
    int x;
    x = 7;
    inc(&x);
}