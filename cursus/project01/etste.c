int main(void)
{
    int *data1 = (int *)malloc(sizeof(int));
    int *data2 = (int *)malloc(sizeof(int));
    int *data3 = (int *)malloc(sizeof(int));
    *data1 = 42;
    *data2 = 75;
    *data3 = 100;

    t_list *node1 = ft_lstnew(data1);
    t_list *node2 = ft_lstnew(data2);
    t_list *node3 = ft_lstnew(data3);

    // Conecta los nodos
    ft_lstadd_back(&node1, node2);
    ft_lstadd_back(&node1, node3);

    printf("Contenido de la lista antes de aplicar la función a los nodos: ");
    ft_print_list(node1);

    // Llamada a la función ft_lstmap
    t_list *new_list = ft_lstmap(node1, ft_sum, ft_lstdelone);
    if (new_list == NULL)
    {
        printf("Error: la función ft_lstmap falló\n");
        return 1;
    }

    printf("Contenido de la lista después de aplicar la función a los nodos: ");
    ft_print_list(new_list);

    // Liberar memoria
    ft_lstclear(&new_list, free);

    return 0;
}
