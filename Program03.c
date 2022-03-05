#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
	int data;
	struct node *lptr;
	struct node *rptr;
} *mr[100];

int level = 0;
int a_fr = 0;
int a_re = 0;

int k[100];
int k_index = 0;
int op[100][100];
int op_level = 0;
int op_column = 0;

void arr(level)
{
	if (level == 0)
	{
		op[level][op_column] = 1;
		return;
	}
	for (int i = 0, j = pow(2,level) - 1; i < pow(2,level) / 2, j >= pow(2,level) / 2; i++, j--)
	{
		op[level][op_column++] = k[i];
		op[level][op_column++] = k[j];
	}
}

void print(struct node *f1)
{
	// Base Case
	if (f1 == NULL)
		return;

	mr[a_re++] = f1;

	while (a_fr != a_re)
	{
		int nc = a_re - a_fr;
		for (int i = 0; i < nc; i++)
		{
			struct node *n;
			n = mr[a_fr];
			k[k_index++] = n->data;
			a_fr++;
			if (n->lptr != NULL)
				mr[a_re++] = n->lptr;

			if (n->rptr != NULL)
				mr[a_re++] = n->rptr;
		}

		printf("\n");
		arr(level);
		level++;
		op_column = 0;
		k_index = 0;
	}
}

struct node *new(int a)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp == NULL)
	{
		printf("space not allow in memory\n");
	}
	
	else
	{
		temp->data = a;
		temp->lptr = NULL;
		temp->rptr = NULL;
		return temp;
	}
}


int main()
{
	struct node *f1;
	f1 = new(1);
	f1->lptr = new(2);
	f1->rptr = new(3);
	f1->lptr->lptr = new(4);
	f1->lptr->rptr = new(5);
	f1->rptr->lptr = new(6);
	f1->rptr->rptr = new(7);
	f1->lptr->lptr->lptr = new(8);
	f1->lptr->lptr->rptr = new(9);
	f1->lptr->rptr->lptr = new(10);
	f1->lptr->rptr->rptr = new(11);
	f1->rptr->lptr->lptr = new(12);
	f1->rptr->lptr->rptr = new(13);
	f1->rptr->rptr->lptr = new(14);
	f1->rptr->rptr->rptr = new(15);
	

	print(f1);

	for (int i = 0; i < level; i++)
	{
		for (int j = 0; j < pow(2,i); j++)
		{
			printf("%d, ", op[i][j]);
		}
	}
	printf("\n");
	for (int i = level - 1 ; i >= 0; i--)
	{
		for (int j = 0; j < pow(2, i); j++)
		{
			printf("%d, ", op[i][j]);
		}
	}
	return 0;
}