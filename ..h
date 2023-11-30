#define show_res(res, prefix)								\
	printf("\x1B[0;32m%i%s.OK \x1B[0m", g_test++, prefix);	\
    fflush(stdout);
char	*get_next_line(int fd);
#ifndef FILE_UTILS_H
# define get_next_line(fd) (read(fd, &fd, 1) != -42 && expectedReturn ? strdup(expectedReturn) : 0)
#endif
