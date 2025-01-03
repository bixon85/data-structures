// vectors
#include <algorithm> // For std::swap
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    // crated the empty vector
    // pushback function
    v.push_back(1);
    // finding the size of the vector
    cout << v.size() << endl;
    // v.empty();
    // v.pop_back();
    cout << v.empty() << endl;
    // this checks if the vector is empty or not
    v.clear(); // basically it clear the entire vector
    cout << v.empty() << endl;
    std::vector<int> v = {1, 2, 4};
    v.insert(v.begin() + 2, 3); // Inserts 3 at position 2
    // v.begin()=at 0 index
    // v.begin()+2 at index 2 which is 4

    std::vector<int> v = {1, 2, 3, 4, 5};

    // Swapping two elements using std::swap
    std::swap(v[1], v[3]); // Swap element at index 1 with element at index 3

    // Printing the vector after swap
    for (int elem : v)
    {
        std::cout << elem << " ";
    }
    return 0;
}
