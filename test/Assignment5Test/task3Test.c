/**
* task3Test.c
* @author bulbasaur
* @description 
* @created 2020-05-16T11:29:47.878Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-16T11:52:52.581Z+08:00
*/

#include<stdio.h>
#include<malloc.h>


typedef struct node
{
int data;/*data代表成绩分数*/
struct node *next;
}LNode,*LinkList;


LinkList Creat(void)/*创建链表，结束标志为当输入的数据为 -1 !*/
{
    LinkList H,p1,p2;
    int n;
    n=0;
    p1=p2=(LinkList)malloc(sizeof(LNode));
    printf("Input Data: ");
    scanf("%d",&p1->data);
    H=NULL;
    while(p1->data != -1)
    {
        n=n+1;
        if(n==1)
        H=p1;
        else 
        p2->next=p1;
        p2=p1;
        p1=(LinkList)malloc(sizeof(LNode));
        scanf("%d",&p1->data);
    }
    p2->next=NULL;
    return(H);
}
//上一段代码的解释(注意H是head头指针,P2是尾指针):
// 1轮:n=1 H=P1(p1指向一块儿data=用户输入值的地址,) p2=p1(P2也指向这块data=用户输入值的地址);
// p1=(LinkList)malloc(sizeof(LNode))==>(解释:P1不再指向这块地址,P1开始指向了新申请的地址)
//p2->next=NULL(将p2指针的next置为空);也就是说一轮结束之后:出现了H(头指针)和P2(尾指针)同时指向一块儿Data区域,且此区域的next=null;
// 二轮 n=2 p2->next=p1(p2指向的struct的next指针置为P1,结果为:H->地址一->P1)
// 然后p2=p1(P2不再指向原先的地址,现在P2指向了现在P1的位置,这样P2仍然是尾接点指针,H头指针不变,但是节点增加了新的P1)
// p1=(LinkList)malloc(sizeof(LNode));解释:P1不再指向原先的地址,新开辟一块儿地址,由P1指向它;
// p2->next=NULL; 将尾指针的next置为空,现在的链表为:H->Data1->Data2->P2(P2尾指针的next=NULL);
//3轮之后同理....
//最终返回了头指针H


LinkList Sort(LinkList SL)/*递增排序函数：入口参数：链表的头指针，此为链表中的排序函数*/
{
    LinkList p,q;
    int temp;
    for(p=SL;p!=NULL;p=p->next)
    {
        for(q=p->next;q!=NULL;q=q->next)
        {
            if(p->data>q->data)
            {
                temp=q->data;
                q->data=p->data;
                p->data=temp;
            }
        }
    }
    return SL;
}
// for(p=SL;p!=NULL;p=p->next)意思为遍历SL,一个个往下走,
//for(q=p->next;q!=NULL;q=q->next) 意思为:先拿 第二个元素与第一个元素比较,假如第一个大的话,1与2互换,否则不作处理
//然后拿第三个与第一个比较,假如第三个大的话,第三个元素与第一个元素互换,否则不做处理
//这样,第一轮过后,保证第一个元素是最小的,
//第二轮过后 第二个是次小的,这样,依次类推,由小到大就这样形成了.
int main()
{
    LinkList L,S,K;
    L=Creat();
    printf("The initialized single linked list data sequence is: \n");
    for(S=L;S!=NULL;S=S->next)
        printf("%d ",S->data);
    Sort(L);
    printf("\nThe sequence sorted in ascending order is: \n");
    for(K=L;K!=NULL;K=K->next)
        printf("%d==>",K->data);

    return 0;
}