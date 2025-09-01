#define INIT_CAPACITY 10
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef int datatype;
struct Array{
    datatype* data;
    int size;
    int CAPACITY;
};

//初始化
void Init(struct Array* ptr);

//求表长
int GetLength(struct Array* ptr);

//插入操作
bool Insert(struct Array* ptr, datatype x, int i);

//按值查找操作
int GetValueX(struct Array* ptr, datatype x);

//按位查找操作
datatype GetLocationI(struct Array* ptr, int i);

//删除操作(只按位)
bool Delete(struct Array* ptr, int i);

//输出操作
void PrintList(struct Array* ptr);

//判空操作
bool IsEmpty(struct Array* ptr);

//判满操作
bool IsFull(struct Array* ptr);

//销毁操作
void DestroyList(struct Array* ptr);