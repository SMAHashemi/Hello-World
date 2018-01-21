#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person
{
	char name[500];
	struct person *nextptr;
};
tttttttt
typedef struct person p;
typedef p *pptr;



int main(void)
{
	int n, i;
	scanf("%d", &n);
	pptr startptr = NULL, lastptr = NULL;
	char na[500], op[5];
	for (i = 0; i < n; i++)
	{
		scanf("%s %s", &na, &op);
		if (strcmp(na, "first"))
		{

		}
		else if (strcmp(na, "last"))
		{
			startptr = startptr->nextptr;
		}
		else
		{
			pptr newptr = malloc(sizeof(p));
			newptr->nextptr = startptr;
			startptr = newptr;
			if (i == 0)
			{
				lastptr = startptr;
			}
			srcpy(newptr->name, na);
		}

	}
	return 0;
}