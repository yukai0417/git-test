#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};
struct Node* first , *last;
void AttachDataToList(int element)
{struct Node *p;
    p=(struct Node*)malloc(sizeof(struct Node));
    p->data=element;
    p->link=NULL;
    if(first==NULL)
        first=last=p;
    else
    {
        last->link=p;
        last=p;
    }
}
int main() {
    // 在這裡呼叫 AttachDataToList 或寫你要測試的程式
    AttachDataToList(10);
    AttachDataToList(20);
    AttachDataToList(30);
    return 0;
}