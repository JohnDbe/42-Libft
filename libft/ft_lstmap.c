#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*res;
	t_list	*fctres;

	if (!f || !del)
		return (NULL);
	while (lst)
	{
		fctres = ft_lstnew((*f)(lst->content));
		if (!(fctres))
			return (NULL);
		ft_lstadd_back(&res, fctres);
		lst = lst->next;
	}
	return (res);
}
