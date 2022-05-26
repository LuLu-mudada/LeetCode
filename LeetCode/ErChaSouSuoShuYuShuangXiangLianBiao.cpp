#include <iostream>
#include <vector>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};

class Solution {
public:
    Node* treeToDoublyList(Node* root) {
        dfs(root);

        head->left = pre;
        pre->right = head;

        return head;
    }

    void dfs(Node* cur)
    {
        if (!cur)
        {
            return;
        }
        dfs(cur->left);
        if (!pre)
        {
            head = cur;
        }
        else
        {
            pre->right = cur;
        }

        cur->left = pre;
        pre = cur;
        dfs(cur->right);
    }

private:
    Node* pre;
    Node* head;
};

int main5313()
{
	//Solution slt;


	std::cin.get();
	return 0;
}