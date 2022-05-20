#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }

} * head;

node *reverseK(node *head, int k)
{
    node *c = head, *n, *p = NULL;
    int cnt = 0;

    while (c and cnt < k)
    {
        n = c->next;
        c->next = p;

        p = c;
        c = n;

        cnt++;
    }
    if (n)
        head->next = reverseK(n, k);
    return p;
}
