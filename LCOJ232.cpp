#include "header.h"

using namespace std;

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
        // myQueue.clear();
    }

    /** Push element x to the back of queue. */
    void push(int x) {
        myQueue.push(x);
        // revQ.emplace(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        stack<int> newQ;
        while (!myQueue.empty()){
            newQ.push(myQueue.top());
            myQueue.pop();
        }
        int result = newQ.top();
        newQ.pop();
        while (!newQ.empty()){
            myQueue.push(newQ.top());
            newQ.pop();
        }
        return result;
    }

    /** Get the front element. */
    int peek() {
        stack<int> newQ;
        while (!myQueue.empty()){
            newQ.push(myQueue.top());
            myQueue.pop();
        }
        int result = newQ.top();
        while (!newQ.empty()){
            myQueue.push(newQ.top());
            newQ.pop();
        }
        return result;
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return myQueue.empty();
    }

    void print(){
        stack<int> temp(myQueue);
        cout << "regular order -> " ;
        while (!temp.empty()){
            cout << temp.top() << " ";
            temp.pop();
        }
        cout <<endl;
    }
private:
    stack<int> myQueue;
};

/**
* Your MyQueue object will be instantiated and called as such:
* MyQueue obj = new MyQueue();
* obj.push(x);
* int param_2 = obj.pop();
* int param_3 = obj.peek();
* bool param_4 = obj.empty();
*/


int main(){
    // Solution s;
    vector<int> nums = {1,1,1,2,2,3,4,5,5,6,7,8,8,9,11,12,13,13};
    vector<int> newNums(25,1);
    /*
    // node part test;
    TreeNode node1(3);
    TreeNode node2(1);
    TreeNode node3(5);
    TreeNode node4(0);
    TreeNode node5(2);
    TreeNode node6(4);
    TreeNode node7(6);
    node1.left = &node2;
    node1.right = &node3;
    node3.left = &node6;
    node3.right = &node7;
    node2.left = &node4;
    node2.right = &node5;
    */

    MyQueue * obj = new MyQueue();
    obj->push(1);
    obj->push(2);
    // obj->push(3);
    // obj->push(4);
    // obj->push(5);
    // obj->push(6);
    // obj->push(5);
    cout << obj->pop()<<endl;
    cout << obj->peek() << endl;
    // cout << obj->print() << endl;
    // obj->print();
    delete obj;

    //test output
    // 1
    // vector<int> result =s.getRow(3);
    // 2
    //cout << s.removeDuplicates(nums);
    // cout << 2147483647 * 2 << endl;
    // for (size_t i = 0 ; i < result.size() ; i++){
    //     cout << result[i] << "  ";
    // }

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
