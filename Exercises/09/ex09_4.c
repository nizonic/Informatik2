/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 9 - Task 4                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 06.05.2022                                                         *
 ****************************************************************************/

struct node{
    struct node* parent;
    struct node* lft;
    struct node* rgt;
};

void rightRotate(struct node* temp){
    struct node* g = temp->parent;
    struct node* left = temp->lft;
    temp->lft = left->rgt;
    if (left->rgt){
        left->rgt->parent = temp;
    }
    left->parent = g;
    if (temp == g->lft){
        g->lft = left;
    }
    else{
        g->rgt = left;
    }
    left->rgt = temp;
    temp->parent = left;
}