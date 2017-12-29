//
// Created by Lenovo on 2017/12/29.
//
#include "quick.h"

void QuickSort::swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int QuickSort::iteration(int left, int right) {
    int* ptr = this->generate_data;
    int low = left;
    int high = right+1;
    int key = ptr[low];
//    Wrong method
//    while(low<high){
//        while((ptr[low]<key)&&(low<high)) low++;
//        while((ptr[high]>key)&&(high>low)) high--;
//        if(low>=high) break;
//        swap(&ptr[low],&ptr[high]);
//    }
    while(true){
        while(ptr[++low]<key) if(low==right) break;
        while(ptr[--high]>key) if(high==left) break;
        if(low>=high) break;
        swap(&ptr[low],&ptr[high]);
    }
    swap(&ptr[left],&ptr[high]);
    for(int i=0;i<25;i++) cout<<this->generate_data[i]<<" ";
    cout<<endl;
    return high;
}

void QuickSort::quick_sort(int left,int right) {
//    int index = this->iteration(left,right);
    if(left>=right) return;
    int index = this->iteration(left,right);
    cout<<left<<" "<<index<<" "<<right<<endl;
    this->quick_sort(left,index-1);
    this->quick_sort(index+1,right);
}
