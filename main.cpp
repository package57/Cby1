// Cby1
// the initial exploration of an array and array processing
// this is a simplistic view of an array, and not actually practical in any real world situation
// these simplistic view only get worse as we go deeper
#include <iostream>
using namespace std;
int x;          // typical index or subscript variable - another common choice would be 'i'
int xevent[5];  // declare here - initialize later - don't worry you'll likely initialize often, and perhaps in different ways
// you might be tempted to write like this - but try that with 1000
// so if you're going to use a loop - may as well - always use a loop - best practice -and practice makes perfect - and makes you faster
// sloppy int xevent[5] = {0,0,0,0,0,};
int main()
{
    cout << "greetings from Cby1" << endl;

    for (x = 0; x < 5; x++)
    {
        xevent[x] = 0;        // one assignment statement for each index - unavoidable
    }

    for (x = 0; x < 5; x++)
    {
        std::cout << " index " << x << " value " << xevent[x] << endl;
    }

    std::cin >> x;  // hold the console open, so you can see your result,  until you enter a digit

    return 0;

}
// as for the result
// you'll notice that the index starts at 0
// think of it this way
// a rocket launches on zero - not one - right?
// the first value is at the beginning of the space, at zero
// when your solution is less trivial you'll see yourself doing this
//   for (i = startindex; i < endindex; i++)
//   {
//       do something important and or consequential
//   }
