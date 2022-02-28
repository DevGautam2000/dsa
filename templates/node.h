    class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}

    Node(int _val, Node* _left, Node* _right)
        : val(_val), left(_left), right(_right), next(NULL) {}


    

};

namespace node{
static void levelOrder(Node *root)
    {

        vector<vector<int>> nodes;
        queue<Node *> q;

        if (root)
            q.push(root);

        while (q.size())
        {
            vector<int> cur_level;
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                auto node = q.front();
                q.pop();
                cur_level.push_back(node->val);
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            nodes.push_back(cur_level);
        }

       for(auto vec: nodes){
        for(auto i: vec)
            cout<<i<<"->";
        cout<<"[NULL]"<<endl<<endl;
        }
    }

}