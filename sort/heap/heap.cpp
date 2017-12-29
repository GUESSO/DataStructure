//
// Created by Lenovo on 2017/12/28.
//
#include"heap.h"
void Heap::swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//format big-endian heap
void Heap::format_heap(int n) {
    int* ptr = this->generate_data;
    for(int i=n;i>0;i--){
        int index = i/2;
        if(index>=0&&(ptr[i]>ptr[index]))
            swap(ptr+i,ptr+index);
    }
}

void Heap::heap_sort() {
    for(int i=24;i>=0;i--){
        format_heap(i);
        cout<<"NO."<<i<<" ";
        for(int j=0;j<25;j++) cout<<this->generate_data[j]<<" ";
        cout<<endl;
        swap(&this->generate_data[0],&this->generate_data[i]);
    }
}
