#include "Array.h"

int main(){
    struct Array array1;
    printf("\n初始化\n");
    Init(&array1);
    GetLength(&array1);


    printf("\n尾插\n");
    Insert(&array1,1,1);
    Insert(&array1,2,2);
    Insert(&array1,3,3);
    Insert(&array1,4,4);
    PrintList(&array1);

    printf("\n头插\n");
    Insert(&array1,99,1);
    Insert(&array1,98,1);
    Insert(&array1,97,1);
    Insert(&array1,96,1);
    Insert(&array1,95,1);
    PrintList(&array1);

    printf("\n头删\n");
    Delete(&array1,1);
    printf("\n尾删\n");
    Delete(&array1,array1.size);
    PrintList(&array1);

    printf("\n按值查找操作\n");
    GetValueX(&array1,1);
    GetValueX(&array1,99);
    printf("\n按位查找操作\n");
    GetLocationI(&array1,2);
    GetLocationI(&array1,3);
    GetLocationI(&array1,4);

    DestroyList(&array1);
    return 0;
}
