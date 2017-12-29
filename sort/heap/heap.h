//
// Created by Lenovo on 2017/12/28.
//

#ifndef DATASTRUCTURE_HEAP_H
#define DATASTRUCTURE_HEAP_H

#endif //DATASTRUCTURE_HEAP_H
#include"../../common.h"
class Heap{
public:
    int generate_data[25];
    void swap(int* a,int* b);
    void format_heap(int n);
    void heap_sort();

    Heap(){
        for(int i=0;i<25;i++){
            generate_data[i]=rand()%100;
        }
        cout<<"general data sequence"<<endl;
        for(int i=0;i<25;i++)
            cout<<generate_data[i]<<" ";
        cout<<endl;
    }
};
