#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int data;
    struct Student * prev;
    struct Student * next;
};

struct Student *stdList, *head, *tail, *allocStd;

int numOfStudent = 5;

int input(){

    allocStd = (Student * )malloc(sizeof(Student));
    head = allocStd;
    head->data = 1;
    head->prev = NULL;
    head->next = NULL;



//    allocStd = head;
    for(int i = 0; i < numOfStudent; ++i){
        Student *newNode = (Student *)malloc(sizeof(Student));
        newNode->data = i + 2;
        newNode->prev = allocStd;
        newNode->next = NULL;
        allocStd->next = newNode;
        allocStd = newNode;
    }

    tail = allocStd;

    allocStd = head;
    while(allocStd != NULL){
        printf("%d ", allocStd->data);
        allocStd = allocStd->next;
    }


    return 0;
}

int main()
{
    input();

    return 0;
}
