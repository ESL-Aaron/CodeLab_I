#include <iostream>
#include <thread>
#include <chrono> // Both libraries are needed for the code in order to create a counting effect.
// Otherwise the code would run too fast to see the counting effect.
using namespace std;
int main () {

 for (int i = 0; i <= 50; ++i) { // This loop counts up from 0 to 50. All the are basic counting loops. The only difference is the range and step of the loop.
    cout << "Counting: " << i << endl;
    this_thread::sleep_for(chrono::milliseconds(50)); //This line is here to force a delay of 50 milliseconds between each count.
 }

 for (int i = 50; i >= 0; --i) { // This loop counts down from 50 to 0.
    cout << "Counting down: " << i << endl;
    this_thread::sleep_for(chrono::milliseconds(50));
 }

 for (int i = 30; i <= 50; ++i) { // This loop counts up from 30 to 50.
    cout << "Counting from 30 to 50: " << i << endl;
    this_thread::sleep_for(chrono::milliseconds(50));
 }

 for (int i = 50; i >= 10; i -= 2) {  // This loop counts down by 2 from 50 to 10.
    cout << "Counting down by 2 from 50 to 10: " << i << endl;
    this_thread::sleep_for(chrono::milliseconds(50));
 }

 for (int i = 100; i <= 200; i += 5) { // This loop counts up by 5 from 100 to 200.
    cout << "Counting up by 5 from 100 to 200: " << i << endl;
    this_thread::sleep_for(chrono::milliseconds(50));
   }
 return 0;
}