#include <iostream>
#include <vector>
using namespace std;
vector<int> findAllIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == key)
            indices.push_back(i);
    return indices;
}
int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter key to find: ";
    cin >> key;
    vector<int> indices = findAllIndices(arr, key);
    if (indices.empty())
        cout << "Key not found" << endl;
    else {
        cout << "Indices of " << key << ": ";
        for (int idx : indices)
            cout << idx << " ";
        cout << endl;
    }
    return 0;
}