#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

#include <iostream>
using namespace std;



class Array
{
    private :

        int size;
        int length;
        int *items;
    public:
        Array(int);
        ~Array();

        void fill(int N_Items);
        void display();

        int getSize();
        int getLength();

        //return -1 if not found
        int search(int);

        void append(int);

        /*(index, value)*/
        void insert(int,int);

        /*(int index)*/
        void remove(int);

        void enlarge(int);

        void merge(Array);

};

/*
template <typename T>
class Array
{
    private :

        int size;
        int length;
        T *items;
    public:
        Array(int n): size(n), length(0) 
        {
            items = new T[size];
        }
        ~Array()
        {
            delete [] items;
        }

        
        void fill(int N_Items)
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

        void display()
        {
            cout << "\n**Display Array Content**\n";
            for( int i=0; i<length; i++)
            {
                cout << items[i] << "\n";
            }
        }

        int getSize()
        {
            return size;
        }
        int getLength()
        {
            return length;
        }
        //return index if key founded, return -1 if key not be founded
        int search(T key)
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

        void append(T newItem)
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

};
*/

#endif