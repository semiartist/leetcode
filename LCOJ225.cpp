#include "header.h"

using namespace std;

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
    }

    /** Push element x onto stack. */
    void push(int x) {
        major.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int temp = major.front();
        major.pop();
        while (!major.empty()){
            helper.push(temp);
            temp = major.front();
            major.pop();
        }
        rebuild();
        return temp;
    }

    /** Get the top element. */
    int top() {
        int temp = 0;
        while (!major.empty()){
            temp = major.front();
            helper.push(temp);
            major.pop();
        }
        rebuild();
        return temp;
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return major.empty();
    }
private:
    queue<int> helper;
    queue<int> major;
    void rebuild(){
        while(!helper.empty()){
            major.push(helper.front());
            helper.pop();
        }
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,3,5,7,8,56};
    vector<int> nums2 = {2,3,6,};
    string str1 = "abab";
    string str2 = "cat dog cat dog";
    // cout << s.merge(nums, 6, nums2, 3) << endl;
    s.merge(nums, 6, nums2, 3);
}
