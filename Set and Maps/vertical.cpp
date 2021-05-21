#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
struct Node
{
    int data;
    Node* left,*right;
    Node(int val){
    data = val;
    left = right = NULL;
    }

};
void getVerticalorder(Node * root,int hdis, map<int,vi> &m){
    if (root==NULL) return;

    m[hdis].push_back(root->data);
    getVerticalorder(root->left,hdis-1,m);
    getVerticalorder(root->right,hdis+1,m);
}

int main(){
    Node*root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(11);
    root->right->left = new Node(14);
    root->right->right = new Node(6);

    map<int,vi> m;
    int hdis = 0;

    getVerticalorder(root,hdis,m);

    map<int,vi> :: iterator it;
    for(it = m.begin();it!=m.end();it++){
        for(int i=0;i<(it->second).size();i++){
            cout<<(it->second)[i]<<" ";
        }cout<<endl;
    }

    return 0;
}
