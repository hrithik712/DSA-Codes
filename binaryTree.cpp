#include<iostream>
#include<queue>
using namespace std;
class node 
{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};
node* buildTree(node* root)
{
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1)
    return NULL;
    cout<<"Enter data for inserting in left "<<data<<endl;
    root -> left = buildTree(root -> left);
    cout<<"Enter data for inserting in right "<<data<<endl;
    root -> right = buildTree(root -> right);

    return root;

}
void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    // separater .. 
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
        //cout<<temp->data<<endl;
        q.pop();

        if(temp == NULL)
        {
            // purana level completer traverse ho chuka hai ..
            cout<<endl;
            if(!q.empty())
            {
                // queue still have some child elements ..
                q.push(NULL);
            }
        }

        else
        {
            cout<<temp->data<<endl;
        
            if(temp -> left )
        {
            q.push(temp -> right);
        }
        if(temp -> right)
        {
            q.push(temp -> right);
        }

        }
    }

}
int main()
{
    node* root = NULL;
    // create tree ..
    root = buildTree(root);

    //level order 
    cout<<"Printing the level order traversal output "<<endl;
    levelOrderTraversal(root);

    return 0;
}