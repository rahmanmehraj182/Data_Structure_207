#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct DataStructureStd{
        uint8_t std;
        struct DataStructureStd *prev;
        struct DataStructureStd *next;
};

struct DataStructureStd *stdlist, *head, *tail, *newStudent, *curr;

int c = 0,l;
void input(){


    while(c<l){
        newStudent =  malloc(sizeof(struct DataStructureStd));
        uint8_t val;
        printf("Enter Student Id: ");
        scanf("%d", &val);
        newStudent->std = val;
        newStudent->next = NULL;
        newStudent->prev = NULL;

        if(c == 0){
            head = newStudent;
            curr = newStudent;
        }else{
            curr->next = newStudent;
            newStudent->prev = curr;
            curr =newStudent;
            tail = newStudent;
        }
        c++;
    }
}

void display(){
    curr = head;
    c= 1;
    while(curr != NULL){
        printf("Node %d's value is %d\n", c, curr->std);
        curr = curr->next;
        c++;

    }
}


void displayReverse(){
    curr = tail;
    c= 1;
    while(curr != NULL){
        printf("Node %d's value is %d\n", c, curr->std);
        curr = curr->prev;
        c++;

    }
}
int main(){

    printf("Enter the length of the Linked list\n");
    scanf("%d", &l);
    input();

    displayReverse();
    return 0;
}
