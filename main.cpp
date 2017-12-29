#include "common.h"
#include "sort/heap/heap.h"
#include "sort/bubble/bubble.h"
#include "sort/quick/quick.h"
void generate_sort_data(int* generate_data,int n);
void select_sort(int* generate_data,int n);
void insert_sort(int* generate_data,int n);
int main() {
//    int generate_data[25];
//    generate_sort_data(generate_data,25)
// ;
//    FOR bubble test
//    BubbleSort bubbleSort;
//    bubbleSort.bubble_sort(generate_data,25);

//    FOR select sort
//    select_sort(generate_data,25);

//    FOR insert sort
//    insert_sort(generate_data,25);

//    FOR heap sort
//    Heap heap;
//    heap.heap_sort();

//    FOR quick sort
    QuickSort quickSort;
    quickSort.quick_sort(0,24);
    return 0;
}

void generate_sort_data(int* generate_data,int n){
    for(int i=0;i<n;i++){
        generate_data[i]=rand()%50;
    }
    cout<<"general data sequence"<<endl;
    for(int i=0;i<n;i++)
        cout<<generate_data[i]<<" ";
    cout<<endl;
}

void select_sort(int* generate_data,int n){
    generate_sort_data(generate_data,n);
    cout<<"####### SELESCT SORT #######"<<endl;
    int max,index,temp=0;
    for(int i=0;i<n;i++) {
        max=0;
        for (int j = i; j < n; j++) {
            if (generate_data[j]>max){
                max=generate_data[j];
                index=j;
            }
        }
        temp=generate_data[index];
        generate_data[index]=generate_data[i];
        generate_data[i]=temp;

        cout<<"NO."<<i+1<<" ";
        for(int k=0;k<n;k++)
            cout<<generate_data[k]<<" ";
        cout<<endl;
    }
}

void insert_sort(int* generate_data,int n){
    generate_sort_data(generate_data,n);
    cout<<"####### INSERT SORT #######"<<endl;
    for(int i=2;i<n;i++) {
        for (int j = 0; j < i-1; j++) {
            if (generate_data[j+1]<generate_data[j]){
                generate_data[j+1]^=generate_data[j]^=generate_data[j+1]^=generate_data[j];
            }
        }

        cout<<"NO."<<i+1<<" ";
        for(int k=0;k<n;k++)
            cout<<generate_data[k]<<" ";
        cout<<endl;
    }
}
