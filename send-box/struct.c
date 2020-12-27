#include <stdio.h>
typedef struct		s_a
{
	char			*da;
	int				wi;
}					t_a;

typedef struct		s_attr
{
	char			*data;
	int				width;
	t_a				w2;
}					t_attr;

void 	print2(t_attr *box)
{
	box->w2.da = "qw";
	box->w2.wi = 1;
	printf("Da = %s\n", box->w2.da);
	printf("Wi = %d\n", box->w2.wi);
}

void 	print(t_attr *box)
{
	printf("Data = %s\n", box->data);
	printf("Width = %d\n", box->width);
	print2(box);
}

//int 	main(void)
//{
//	t_attr	box;
//	box.data = "qwerty";
//	box.width = 12;
//	print(&box);
//
//	return (0);
//}

