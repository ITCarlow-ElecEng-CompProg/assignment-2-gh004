/** Factorial Calculator
 *  Gearoid Hanrahan
 *  C00108964
 * 25-09-2017
 */


#include <iostream>

using namespace std;

int main()
{   /** Variable Declaration */
    int num, i; int fact = 1;

    cout << "Enter a number for n:"<<endl;
    cin >> num;

    /**While Loop ensures number is is positive */
    while (num<0)
    {
        cout<< "Enter a number >0"<<endl;
        cin>> num;
    }

    //For loop
    for(i=num;i>0;i--)
    {
        fact = fact* i;
    }

    /**Cout Displays answer on screen */
    cout<< "Factorial is : "<< fact;

    return 0;
}
