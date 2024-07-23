#include <iostream>
#include "array.hpp"

using namespace std;

Array::Array(int n): size(n), length(0) 
{
    items = new int[size];
}
Array::~Array()
{
    delete [] items;
}

void Array::fill(int N_Items)
{
    if (N_Items > size)
    {
        cout << "You can't exeed the array siez \n";
        return;
    }
    else
    {
        for( int i=0; i< N_Items; i++)
        {
            cout << "Enter item no ["<<i<<"]:   ";
            cin  >> items[i];
            length++;                   
        }
    }
}

void Array::display()
{
    cout << "\n**Display Array Content**\n";
    for( int i=0; i<length; i++)
    {
        cout << items[i] << "\t";
    }
    cout <<"\n";
}

int Array::getSize()
{
    return size;
}
int Array::getLength()
{
    return length;
}

int Array::search(int key)
{
    int index = -1;
    for (int i=0; i<length; i++ )
    {   
        if (items[i] == key)
        {
            index = i;
            break;
        }
    }
    return index;
}

void Array::append(int newItem)
{
    if ( length < size ) 
    {
        items[length] = newItem;
        length++;
    }
    else
    {
        cout  << "The array is Full, Can't append new items\n";
    }

}


void Array::insert(int index,int value)
{
    if (index >=0 && index < size)
    {
        for( int i=length; i>index; i-- )
        {
            items[i] = items[i-1];
        }
        items[index]= value;
        length++;
    }
    else 
        cout << "Error, the index is out of range \n";
}

void Array::remove(int index)
{
    if(index >=0 && index < size)
    {
        for( int i = index; i< length-1; i++  )
        {
            items[i] =items[i+1];
        }
        length--;
    }
    else
        cout << "Error!! out of range\n";
}

void Array::enlarge(int newSize)
{
    if (newSize > 0 && newSize > size)
    {
        
        size=newSize;
        int *temp = items;
        items = new int[newSize];

        for (int i=0; i< length; i++ )
        {
            items[i] = temp[i];
        }
        delete [] temp;
    }
    else
        cout << "Error!: Index not acceptable\n";
}


void Array::merge(Array arr2)
{
    int newSize = size + arr2.getSize();
    size = newSize;

    int *temp = items;

    items = new int[newSize];

    int i;
    for(i = 0; i<length; i++)
    {
        items[i]=temp[i];
    }
    delete[] temp;
    int j=i;
    for(int i=0; i< arr2.getLength(); i++  )
    {
        items[j++]= arr2.items[i];
        length++;
    }
}