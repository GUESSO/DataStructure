//
// Created by Lenovo on 2017/12/29.
//
#include "bubble.h"

void BubbleSort::bubble_sort(int* data, int n) {
    for(int i=n;i>=1;i--){
        for(int j=0;j<i-1;j++){
            if(data[j]>data[j+1])
            this->swap(&data[j+1],&data[j]);
        }
        cout<<"NO."<<i<<" ";
        for(int k=0;k<25;k++) cout<<data[k]<<" ";
        cout<<endl;
    }
}

void BubbleSort::swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}