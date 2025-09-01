#include "Array.h"

void Init(struct Array* ptr){
    ptr->data = (datatype*)malloc(INIT_CAPACITY*sizeof(datatype));
    ptr->CAPACITY = INIT_CAPACITY;
    ptr->size = 0;
}

int GetLength(struct Array* ptr){
    printf("Length:");
    printf("%d\n",ptr->size);
    return ptr->size;
}

bool Insert(struct Array* ptr, datatype x, int i){
    if(i<1 || i>ptr->size+1){
        printf("illegal input!!!\n");
        return false;
    }
    else if(IsFull(ptr)){
        printf("Array is full!!!\n");
        return false;
    }
    else{
        for(int temp = ptr->size; temp>=i; temp--){
            ptr->data[temp] = ptr->data[temp-1];
        }
        ptr->data[i-1] = x;
        ptr->size++;
        printf("Successfully Insert......" "%d\n",x);
        return true;
    }
}

int GetValueX(struct Array* ptr, datatype x){
    for(int i = 0; i<ptr->size; i++){
        if(ptr->data[i] == x){
            printf("Successfully GetValue......""%d\n",x);
            printf("\t""It's NO.""%d\n",i+1);
            return i+1;
        }
        if(i == ptr->size-1){
            printf("GetValueX failed!!!\n");
            return -1;
        }
    }
}

datatype GetLocationI(struct Array* ptr, int i) {
    if (i < 1 || i > ptr->size) {
        printf("GetLocationI Failed!!! Illegal Input!!!\n");
        return -1;
    } else {
        printf("The number at position..."" %d ""...is...""%d\n", i, ptr->data[i-1]);
        return ptr->data[i - 1];
    }
}

bool Delete(struct Array* ptr, int i){
    if(i<1 || i>ptr->size){
        printf("illegal input!!!");
        return  false;
    }
    else{
        for(int temp = i-1; temp<ptr->size-1; temp++){
            ptr->data[temp] = ptr->data[temp+1];
        }
        ptr->size--;
        printf("Successfully Delete NO.""%d"" Number!!!\n",i);
        return true;
    }
}

void PrintList(struct Array* ptr){
    if(IsEmpty(ptr))
        printf("Empty Array!!!");
    else {
        printf("Array: ");
        for (int i = 0; i < ptr->size; i++) {
            printf("%d ", ptr->data[i]);
        }
        printf("\n");
    }
}

bool IsEmpty(struct Array* ptr){
    if(ptr->size==0)
        return true;
    else
        return false;
}

bool IsFull(struct Array* ptr){
    if(ptr->size==ptr->CAPACITY)
        return true;
    else
        return false;
}

void DestroyList(struct Array* ptr){
    //free(ptr);
    free(ptr->data);
    ptr->data = NULL;
    ptr->size = ptr->CAPACITY = 0;
    printf("Successfully Destroy!!!");
}































