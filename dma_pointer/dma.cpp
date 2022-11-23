#include <bits/stdc++.h>
using namespace std;

int *create_array(size_t size, int init_value = 0) 
{
   int *new_storage {nullptr};
   new_storage = new int[size];   
   for (size_t i{0}; i < size; ++i)
      *(new_storage + i) = init_value;
   return new_storage;
}

void display(const int *const array, size_t size) 
{
    for (size_t i{0}; i < size; ++i)
        cout << array[i] << " ";
    cout << endl;
}
int main()
{
    int *temp_arr{nullptr}, s{12};
    temp_arr = new int[s];
    /*
     *an array is created of size 12 in heap.
     */
    delete[] temp_arr;
    /*
     *that array is deleted now.
     */

    int scores[]{100, 95, 89};

    cout << "Value of scores: " << scores << endl;

    int *score_ptr{scores};
    cout << "Value of score_ptr: " << score_ptr << endl;

    cout << "\nPointer offset notation" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;

    cout << "\nArray offset notation" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;

    int a{1},b{3},c{45};
    /**
     **We can not change the data pointed 
     **by the pointer but the address.
     **"*ptra=2"//!Not ok
     **"ptra=&b"//!Ok
     */
    const int *ptra{&a};
    /**
     **We can change the data pointed 
     **by the pointer but not the address. 
     **"*ptrb=2"//!Ok
     **"ptrb=&a"//!Not Ok
     */
    int *const ptrm{&b};
    /**
     **We can not change the data pointed by
     **the pointer and also the address.
     **"*ptrs=2"//!Not ok
     **"ptrs=&b"//!Not ok
     */
    const int *const ptrs{&c};

    int *my_array {nullptr};
    size_t size;
    int init_value {};
    
    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them initialized to? ";
    cin >> init_value;
    
    my_array = create_array(size, init_value);
    cout << endl;

    display(my_array, size);
    delete [] my_array;

    return 0;
}