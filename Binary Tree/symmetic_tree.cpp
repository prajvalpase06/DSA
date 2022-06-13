bool isSymmetric(TreeNode *root)
{
     queue<TreeNode *> q;
    q.push(root->left);
    q.push(root->right);

    while (!q.empty())
    {
        TreeNode *n1 = q.front();
        q.pop();
        TreeNode *n2 = q.front();
        q.pop();

        if (!n1 && n2)
            return false;
        if (!n2 && n1)
            return false;

        if (n1 and n2)
        {
            if (n1->val != n2->val)
                return false;
            q.push(n1->left);
            q.push(n2->right);
            q.push(n1->right);
            q.push(n2->left);
        }
    }
    return true;
}
}
;