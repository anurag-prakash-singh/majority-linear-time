#include <iostream>
#include <vector>

using namespace std;

/*
 * Assuming elements in 'numbers' are positive, returns
 * a possible majority element. If there's no possible majority
 * element, returns 0.
 */
static int possibleMajorityElement(const vector<int> &numbers) {
    int count = 0;
    int majorityElement = 0;
    vector<int>::const_iterator iter = numbers.begin();

    for (;iter != numbers.end();iter++) {
        if (count == 0) {
            majorityElement = *iter;
        }

        if (*iter == majorityElement) {
            count++;
        } else {
            count--;
        }
    }

    return majorityElement;
}

static bool isMajorityElement(const vector<int> &numbers, int element) {
    int count = 0;
    vector<int>::const_iterator iter = numbers.begin();

    for (;iter != numbers.end();iter++) {
        if (*iter == element)
            count++;
    }

    return count > numbers.size() / 2;
}

static void test1() {
    vector<int> numbers = {2, 2, 3, 1, 1, 4, 1};
    int likelyMajorityElement = possibleMajorityElement(numbers);

    if (likelyMajorityElement != 0) {
        if (isMajorityElement(numbers, likelyMajorityElement)) {
            cout << "Majority element: " << likelyMajorityElement << endl;
        } else {
            cout << "No majority element found" << endl;
        }
    } else {
        cout << "No majority element found" << endl;
    }
}

int main() {
    test1();

    return 0;
}