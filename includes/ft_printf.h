#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct	s_flag
{
	int			flag;
	int			width;
	int			prec;
	int			sign;
	char		fill_c;
	int			zero;
	char		*arg;
	int			arg_size;
	int			ret;
}				t_flag;

/*
**  ft_printf functions
*/

int		ft_printf(const char *format, ...);
int		is_opt(char c);
void	check_flag(t_flag *flags, char *format, int *i);
void	check_width(va_list ap, t_flag *flags, char *format, int *i);
void	check_prec(va_list ap, t_flag *flags, char *format, int *i);
char	*get_addr(va_list ap, char opt);
char	*get_arg(va_list ap, char opt, t_flag *flags);
void	write_arg(t_flag *flags, char opt);
void	write_s_arg(t_flag *flags);
void	write_p_arg(t_flag *flags);
void	write_mod_arg(t_flag *flags);

/*
**  libft functions
*/

int		ft_atoi(const char *str);
int		ft_isdigit(int c);
char	*ft_itoa(int n);
void	ft_putrstr(t_flag *flags);
void	ft_putrnstr(t_flag *flags);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*ft_strndup(const char *s1, int n);
void	ft_free_str(char **str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_utoa(unsigned int n);
long	ft_absval(long n);
void	ft_putrchar(char c, t_flag *flags);

#endif
