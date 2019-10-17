#include <stdio.h>
#include <stdlib.h>
struct node
{
int key;
struct node* left;
struct node* right;

 } ;
 struct node* root = NULL;
  struct node* temp = NULL;
  struct node* wow = NULL;


 void insert(int k)
 {

  temp = (struct node *)malloc(sizeof(struct node));
  temp->key =k;
  temp->left = NULL;
  temp->right = NULL;
  if(root == NULL)
  {

  root = temp;
}
else
{
struct node* p=root;
while(p!=NULL)
    {
    wow=p;
    if(p->key<k)
    {
    p=p->right;
  }
 else if(p->key>k)
  {
  p=p->left;
  }
  }
  if(wow->key>k)
  {
  wow->left=temp;
  }
  if(wow->key<k)
  {
  wow->right=temp;
  }

}
}


   void del(struct node*p,int k)

   {
    while(p->key!=k)
    {
    wow=p;
    if(p->key<k)
    {
    p=p->right;
  }
 else if(p->key>k)
  {
  p=p->left;
  }
  }
  if(p->right==NULL&&p->left==NULL)
  {
  if(wow->key>p->key)
  {
  wow->left==NULL;
  free(p);
  }
  else
  {
  wow->right==NULL;
  free(p);
  }
  }
  if(p->right!=NULL&&p->left==NULL)
  {
  if(wow->key>p->key)
  {

  wow->left=p->right;
  free(p);
  }
  else
  {
  wow->right=p->right;
  free(p);
  }

   }
   if(p->right==NULL&&p->left!=NULL)
   {
    if(wow->key>p->key)
  {

  wow->left=p->right;
  free(p);
  }
  else
  {
  wow->right=p->right;
  free(p);
  }
   }
   if(p->right!=NULL&&p->left!=NULL)

   {
    struct node* k;
    struct node* h;
    k=p;
    k=k->right;
    while(k->left!=NULL)
    {
    h=k;
    k=k->left;
  }
  root->key=k->key;
  h->left=NULL;
  free(k);

   }
}

   void infix(struct node* g)
   {
    if(g->left!=NULL)
    {
    infix(g->left);
}
  printf("%d  ",g->key);
if(g->right!=NULL)
   {
  infix(g->right);
   }
   }
    void postfix(struct node* g)
   {
    if(g->left!=NULL)
    {
    postfix(g->left);
}

if(g->right!=NULL)
   {
  postfix(g->right);
   }
   printf("%d  ",g->key);
   }
    void prefix(struct node* g)
   {
    printf("%d  ",g->key);
    if(g->left!=NULL)
    {
    prefix(g->left);
}

if(g->right!=NULL)
   {
  prefix(g->right);
   }
   }



int main()
 {
  int n;
  int e;
  int q;
  int d;
  while(1)
  {
  printf("select your option \n");
  printf("1.INSERT\n2.DELETE\n3.PRINT\n4.EXIT\n");
  scanf("%d",&n);
  switch(n)
  {
  case 1: printf("enter the number to be inserted\n");
  scanf("%d",&e);
  insert(e);
  break;
  case 2:printf("enter the element to be deleted\n");
  scanf("%d",&d);
  del(root,d);


  break;
  case 3:
  printf("tell which way you want to print\n1.infix\n2.prefix\n3.postfix\n");
  scanf("%d",&q);
  switch(q)
  {
  case 1:infix(root);
  break;
  case 2: prefix(root);
  break;
  case 3: postfix(root);
  break;
}
  break;

}
  }
 }

