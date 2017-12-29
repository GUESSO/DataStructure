//
// Created by Lenovo on 2017/12/29.
//

#ifndef DATASTRUCTURE_QUICK_H
#define DATASTRUCTURE_QUICK_H

#endif //DATASTRUCTURE_QUICK_H

#include "../../common.h"
class QuickSort{
public:
    int generate_data[25];

    void swap(int* a,int* b);
    int iteration(int left,int right);
    void quick_sort(int left,int right);

   QuickSort(){
        for(int i=0;i<25;i++){
            generate_data[i]=rand()%100;
        }
        cout<<"general data sequence"<<endl;
        for(int i=0;i<25;i++)
            cout<<generate_data[i]<<" ";
        cout<<endl;
    }
};