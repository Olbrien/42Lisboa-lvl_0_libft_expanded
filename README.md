# Linked List better usage

I recommend the Linked List with previous. It's fully working and without memory leaks.

You can make your own linked list if you don't want to use the (void *content) and change it to whatever you need.\
Don't forget to change all the other functions you're going to use.\
Example:
<pre>
typedef struct s_stack
{
	int			stack_nbr;
	int			stack_order_nbr;
	int			is_empty;
	struct s_stack	*next;
	struct s_stack	*previous;
}				t_stack;

t_stack	*ft_lstnew2(int stack_nbr, int stack_order_nbr, int is_empty)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	if (new)
	{
		new->stack_nbr = stack_nbr;
		new->stack_order_nbr = stack_order_nbr;
		new->is_empty = is_empty;
		new->next = NULL;
		new->previous = NULL;
	}
	return (new);
}
</pre>

To run through the Linked List you created you should do the following.\
Because if you don't add the <if (stack_a->next == NULL)>, you're to go inside stack_a->next when it's null and you won't\
be able to previous.
<pre>
	int i = 0;
	while (stack_a != NULL)
	{
		printf("Lista %i = %i\n",i, stack_a->stack_nbr);
		if (stack_a->next == NULL)
			break ;
		stack_a = stack_a->next;
		i++;
	}
</pre>



