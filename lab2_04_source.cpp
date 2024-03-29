#include<iostream>
#include<ctime>
using namespace std;

void swap(int& a, int& b);
void bubble_sort(int* array, unsigned int size);
void insertion_sort(int* array, unsigned int size);
void selection_sort(int* array, unsigned int size);
void max_heapify(int*array, int index, int heap_size);
void heap_sort(int*array, unsigned int size);


int main()
{   
    srand(time(0));
    int size;
    int type;
    int array[100];
    
    cout <<"Give me the size (max=100) : ";
    cin >> size ;

    for (int i=0; i<size; i++) 
        array[i] = rand() % size ;

    for (int i=0; i<size; i++) 
        cout << array[i] << ' ';
    cout << endl;

    cout <<"Give me the type of algorithm (0:Bubble, 1:Insertion, 2:Selection) : ";
    cin >> type;

    if (type == 0) 
        bubble_sort(array, size);
    else if (type == 1) 
        insertion_sort(array, size);
    else if (type == 2) 
        selection_sort(array, size);
  

    for (int i=0; i<size; i++) 
        cout << array[i] << ' ';
    
}

void swap(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int* array, unsigned int size){
  
}

void insertion_sort(int* array, unsigned int size){
  
}

void selection_sort(int* array, unsigned int size){
   
}


void max_heapify(int*array, int index, int heap_size){
    
}


void heap_sort(int*array, unsigned int size){
    int heap_size = size;
    for (int i = size/2-1; i>=0; i--)
        max_heapify(array,i,heap_size);
    for (int i = size - 1; i>0; i--)
    {
        swap(array[0], array[i]);
        max_heapify(array, 0, --heap_size);
    }
}