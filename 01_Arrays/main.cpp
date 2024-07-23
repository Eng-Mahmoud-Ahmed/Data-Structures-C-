#include <iostream>
#include "array.hpp"

using namespace std;

/* Using class Template   */
/* 
int main()
{
    int size;
    int sFill;
    double key;


    cout << "Enter Array Size: ";
    cin >> size;


    Array<double> arr1(size);
    
    cout << "Enter size to fill: ";
    cin >> sFill;

    arr1.fill(sFill);
    arr1.display();

    cout << "Array size : " << arr1.getSize() <<"\n";
    cout << "Array length : " << arr1.getLength() <<"\n";
    
    cout << "Enter key to be searched: ";
    cin >> key;
    cout << a1.search(key) << "\n";
    
    arr1.append(600.9);
    arr1.display();
    cout << "new array length: "<<arr1.getLength() <<"\n";


    return 0;
}

*/

int main()
{
    int size;
    int sFill;
    int key;
    int newSize;

    cout << "Enter Array Size: ";
    cin >> size;


    Array arr1(size);
    
    cout << "Enter size to fill: ";
    cin >> sFill;

    arr1.fill(sFill);
    arr1.display();

    cout << "Array size : " << arr1.getSize() <<"\n";
    cout << "Array length : " << arr1.getLength() <<"\n";
/*    
    cout << "Enter key to be searched: ";
    cin >> key;
    cout << arr1.search(key) << "\n";
    
    arr1.append(600.9);
    arr1.display();
    cout << "new array length: "<<arr1.getLength() <<"\n";

    arr1.insert(2,900);


    arr1.remove(4);
*/
    cout << "Enter The New Size: ";
    cin >> newSize;
    arr1.enlarge(newSize);
    arr1.display();
    cout << "Array length : " << arr1.getLength() <<"\n";
    cout << "Array size : " << arr1.getSize() <<"\n";
    return 0;
}
