#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>
#include"structure.c"

struct s_meta	handle_file(char *filename);
void			ft_putchar(char c);
void			print_matrix(struct s_meta map, int x, int y, int i);
int				ft_atoi(const char *str);
struct s_meta	transform_data(struct s_meta m, char *f, int i, int j);
struct s_meta	do_your_stuff(struct s_meta m);

struct s_meta	set_metadata(char b, struct s_meta m);
struct s_meta	get_rows_from_input(char *f, int c, struct s_meta m);

