#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& arr, int left, int right, int target) {
    if (left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;
    }
    else if (target < arr[mid]) {
        return binarySearch(arr, left, mid - 1, target);
    }
    else {
        return binarySearch(arr, mid + 1, right, target);
    }
}

int main() {
    vector<int> arr;
    int n, num, target;
    cin >> n;
    while(n--){
        cin >> num;
        arr.push_back(num);
    }
    cin >> target;

    int index = binarySearch(arr, 0, arr.size() - 1, target);
    if (index == -1) {
        std::cout << "Khong tim thay gia tri " << target << " trong mang." << std::endl;
    } else {
        std::cout << "Tim thay gia tri " << target << " tai vi tri " << index << " trong mang." << std::endl;
    }

    return 0;
}
