/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:18:37 by vscabell          #+#    #+#             */
/*   Updated: 2020/02/19 16:35:16 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <xlocale.h>
#include "libft.h"


void	main_ft_memset(void);
void	main_ft_bzero(void);
void	main_ft_memcpy(void);
void	main_ft_memccpy(void);
void	main_ft_memmove(void);
void	main_ft_memchr(void);
void	main_ft_memcmp(void);
void	main_ft_strlen(void);
void	main_ft_strlcpy(void);
void	main_ft_strlcat(void);
void	main_ft_strchr(void);
void	main_ft_strrchr(void);
void	main_ft_strnstr(void);
void	main_ft_strncmp(void);
void	main_ft_atoi(void);
void	main_ft_isalpha(void);
void	main_ft_isdigit(void);
void	main_ft_isalnum(void);
void	main_ft_isascii(void);
void	main_ft_isprint(void);
void	main_ft_toupper(void);
void	main_ft_tolower(void);
void	main_ft_calloc(void);
void	main_ft_strdup(void);
void	main_ft_calloc(void);
void	main_ft_strdup(void);

void	main_ft_substr(void);
void	main_ft_strjoin(void);
void	main_ft_strtrim(void);
void	main_ft_split(void);
void	main_ft_itoa(void);
void	main_ft_strmapi(void);
void	main_ft_putchar_fd(void);
void	main_ft_putstr_fd(void);
void	main_ft_putendl_fd(void);
void	main_ft_putnbr_fd(void);

void	main_bonus(void);


int main(void)
{
	main_ft_memset();
	main_ft_bzero();
	main_ft_memcpy();
	main_ft_memccpy();
	main_ft_memmove();
	main_ft_memchr();
	main_ft_memcmp();
	main_ft_strlen();
	main_ft_strlcpy();
	main_ft_strlcat();
	main_ft_strchr();
	main_ft_strrchr();
	main_ft_strnstr();
	main_ft_strncmp();
	main_ft_atoi();
	main_ft_isalpha();
	main_ft_isdigit();
	main_ft_isalnum();
	main_ft_isascii();
	main_ft_isprint();
	main_ft_toupper();
	main_ft_tolower();
	main_ft_calloc();
	main_ft_strdup();
	main_ft_substr();
	main_ft_strjoin();
	main_ft_strtrim();
	main_ft_split();
	main_ft_itoa();
	main_ft_strmapi();
	main_ft_putchar_fd();
	main_ft_putstr_fd();
	main_ft_putendl_fd();
	main_ft_putnbr_fd();

	//main_bonus();

}

void	main_ft_memset(void)
{
	char st1[] = "-------";
	char st2[] = "-------";
	printf("-------- testando ft_memset ------------\n");
	printf("%s\n", (char *)memset(st1, 'a', 4));
	printf("%s\n\n", (char *)ft_memset(st2, 'a', 4));
	printf("%s\n", (char *)memset(st1, '\n', 2));
	printf("%s\n", (char *)ft_memset(st2, '\n', 2));
	printf("%s\n", (char *)memset(st1, '\n', 1));
	printf("%s\n", (char *)ft_memset(st2, '\n', 1));

	//printf("%s\n", (char *)memset("", 't', 4));   //bus error
	//printf("%s\n", (char *)ft_memset("", 't', 4));  //bus error


}

void	main_ft_bzero(void)
{
	char st1[] = "aaaaaa";
	char st2[] = "aaaaaa";
	char *p;
	char *l;
	printf("-------- testando ft_bzero ------------\n");
	bzero(st1, 5);
	p = st1;
	ft_bzero(st2, 5);
	l = st2;
	bzero(st1, 1);
	ft_bzero(st2, 1);

}

void	main_ft_memcpy(void)
{
	char dst[100] = "teste";
	char dstf[100] = "teste";
	char mem[] = "00000000000000000000000"; 

	printf("-------- testando ft_memcpy ------------\n");
	
	memcpy(dst, "zy\0xw\0vu\0\0tsr", 11);
	ft_memcpy(dstf, "zy\0xw\0vu\0\0tsr", 11);
	ft_putendl_fd(dstf, 1);

	//memcpy(dst, "olaolaola", 11);			// ERRO OK
	//ft_putendl_fd(dst, 1);				// ERRO OK

	//ft_memcpy(dstf, "olaolaola", 11);      //ERRO 
	//ft_putendl_fd(dstf, 1);                //ERRO


	printf("%s\t%s\n", (char *)ft_memcpy(mem, "ola", 2), (char *)memcpy(mem, "ola", 2));
	printf("%s\t%s\n", (char *)ft_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14), (char *)memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14));
	printf("%s\t%s\n", (char *)ft_memcpy(mem, "zyxwvutst", 0), (char *)memcpy(mem, "zyxwvutst", 0));
	printf("%s\t%s\n", (char *)ft_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11), (char *)memcpy(mem, "zy\0xw\0vu\0\0tsr", 11));

	//pode ter \0 pois e VOID, logo nao necessariam uma string
}

void	main_ft_memccpy(void)
{
	char mem1[20] = "abcdefghijkl";
	char mem2[20] = "abcdefghijkl";

	printf("-------- testando ft_memccpy ------------\n");
	printf("%s\t%s\n", memccpy(mem1, "123", '2', 10), mem1);
	printf("%s\t%s\n", ft_memccpy(mem2, "123", '2', 10), mem2);
	ft_memccpy(mem2, "123", '2', 10); ft_putendl_fd(mem2, 1);

	printf("%s\t\t%s\n", memccpy(mem1, "-----", '0', 5), mem1);
	printf("%s\t\t%s\n", ft_memccpy(mem2, "-----", '0', 5), mem2);
	ft_memccpy(mem2, "-----", '0', 5); ft_putendl_fd(mem2, 1);
	
	printf("%s\t\t%s\n", memccpy(mem1, "-----", '0', 6), mem1);
	printf("%s\t\t%s\n", ft_memccpy(mem2, "-----", '0', 6), mem2);
	ft_memccpy(mem2, "-----", '0', 6); ft_putendl_fd(mem2, 1);

	printf("%s\t\t%s\n", memccpy(mem1, "xxxxxxxx", '-', 9), mem1);
	printf("%s\t\t%s\n", ft_memccpy(mem2, "xxxxxxxx", '-', 9), mem2);
	ft_memccpy(mem2, "xxxxxxxx", '-', 9); ft_putendl_fd(mem2, 1);

	//memccpy(mem1, "123", '7', 20); ft_putendl_fd(mem2, 1);
	//ft_memccpy(mem2, "123", '7', 20); ft_putendl_fd(mem2, 1);   //OK??


	//printf("%s\t\t%s\n", ft_memccpy("", "", '-', 9), mem2); erro

}

void	main_ft_memmove(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dst;
	dst = src + 2;

	//The memmove() function is identical to memcpy(),
	//except that it works even if to and from overlap

	printf("-------- testando ft_memmove ------------\n");
	printf("%s\t%s\n", ft_memmove(dst, src, 5), memmove(dst, src, 5));

}

void	main_ft_memchr(void)
{
	//char *s;
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("-------- testando ft_memchr ------------\n");
	printf("%s\t\t%s\n", ft_memchr("abcdef", 'c', 3), memchr("abcdef", 'c', 3));
	printf("%s\t\t%s\n", ft_memchr(tab, -1, 7), memchr(tab, -1, 7));
	
	//s = memchr("teste",'a', 10); ft_putendl_fd(s, 1);  seg fault nas duas funcoes entao ok
}

void	main_ft_memcmp(void)
{
	printf("-------- testando ft_memcmp ------------\n");
	printf("%d\t%d\n", ft_memcmp("abcdefg","abcde-5",6), memcmp("abcdefg","abcde-5",6));
	printf("%d\t%d\n", ft_memcmp("abcd--","abcde-5",6), memcmp("abcd--","abcde-5",6));
	printf("%d\t%d\n", ft_memcmp("p\0po","p\0po", 5), memcmp("p\0po","p\0po", 5));
	printf("%d\t%d\n", ft_memcmp("aaaap","aaaap", 3), memcmp("aaaap","aaaap",3));
	printf("%d\t%d\n", ft_memcmp("p\0\npo\v","p\0\npo\v", 6), memcmp("p\0\npo\v","p\0\npo\v", 6));

	//printf("%d\t%d\n", ft_memcmp("","",), memcmp("","",));


}

void	main_ft_strlen(void)
{
	printf("-------- testando ft_strlen ---------\n");
	printf("%zu\t\t%lu\n", ft_strlen("teste"), strlen("teste"));
	printf("%zu\t\t%lu\n", ft_strlen("vitoria galli"), strlen("vitoria galli"));
	printf("%zu\t\t%lu\n", ft_strlen("0"), strlen("0"));
	printf("%zu\t\t%lu\n", ft_strlen(""), strlen(""));
}

void	main_ft_strlcpy(void)
{
	char dst[10] = "12345";	
	
	ft_strlcpy(dst, "teste", 100); ft_putendl_fd(dst, 1);

	printf("-------- testando ft_strlcpy---------\n");
	printf("0\t%s\t\t%lu\n", dst, strlcpy(dst, "teste", 0));
	printf("1\t%s\t\t%lu\n", dst, strlcpy(dst, "teste", 1));
	printf("2\t%s\t\t%lu\n", dst, strlcpy(dst, "teste", 2));
	printf("3\t%s\t\t%lu\n", dst, strlcpy(dst, "teste", 3));
	printf("6\t%s\t\t%lu\n", dst, strlcpy(dst, "teste", 6));
	printf("10\t%s\t%lu\n", dst, strlcpy(dst, "testetestetesteteste", 10));
	strlcpy(dst, "12345", 6);
	printf("- - - - - - - - - - -\n");
	printf("0\t%s\t\t%lu\n", dst, ft_strlcpy(dst, "teste", 0));
	printf("1\t%s\t\t%lu\n", dst, ft_strlcpy(dst, "teste", 1));
	printf("2\t%s\t\t%lu\n", dst, ft_strlcpy(dst, "teste", 2));
	printf("3\t%s\t\t%lu\n", dst, ft_strlcpy(dst, "teste", 3));
	printf("6\t%s\t\t%lu\n", dst, ft_strlcpy(dst, "teste", 6));
	printf("10\t%s\t%lu\n", dst, ft_strlcpy(dst, "testetestetesteteste", 10));

}

void	main_ft_strlcat(void)
{
	char dst[10] = "12345";	
	strlcpy(dst, "000", 8);

	printf("-------- testando ft_strlcat---------\n");
	printf("0\t%s\t\t%lu\n", dst, strlcat(dst, "teste", 0));
 	ft_putendl_fd(dst, 1); 
	strlcpy(dst, "000", 4);
	printf("1\t%s\t\t%lu\n", dst, strlcat(dst, "teste", 1));
	strlcpy(dst, "000", 4);
	printf("3\t%s\t\t%lu\n", dst, strlcat(dst, "teste", 3));
	strlcpy(dst, "000", 4);
	printf("4\t%s\t\t%lu\n", dst, strlcat(dst, "teste", 4));
	strlcpy(dst, "000", 4);
	printf("6\t%s\t\t%lu\n", dst, strlcat(dst, "teste", 6));
	strlcpy(dst, "000", 4);
	printf("9\t%s\t%lu\n", dst, strlcat(dst, "testet", 9));
	strlcpy(dst, "000", 4);
	printf("10\t%s\t%lu\n", dst, strlcat(dst, "testetestetesteteste", 10));
	printf("- - - - - - - - - - -\n");
	strlcpy(dst, "000", 4);
	printf("0\t%s\t\t%lu\n", dst, ft_strlcat(dst, "teste", 0));
	ft_putendl_fd(dst, 1);
	strlcpy(dst, "000", 4);
	printf("1\t%s\t\t%lu\n", dst, ft_strlcat(dst, "teste", 1));
	ft_putendl_fd(dst, 1);

	strlcpy(dst, "000", 4);
	printf("3\t%s\t\t%lu\n", dst, ft_strlcat(dst, "teste", 3));
	ft_putendl_fd(dst, 1);

	strlcpy(dst, "000", 4);
	printf("4\t%s\t\t%lu\n", dst, ft_strlcat(dst, "teste", 4));
	ft_putendl_fd(dst, 1);

	strlcpy(dst, "000", 4);
	printf("6\t%s\t\t%lu\n", dst, ft_strlcat(dst, "teste", 6));
	ft_putendl_fd(dst, 1);

	strlcpy(dst, "000", 4);
	printf("9\t%s\t%lu\n", dst, ft_strlcat(dst, "testet", 9));
	ft_putendl_fd(dst, 1);

	strlcpy(dst, "000", 4);
	printf("10\t%s\t%lu\n", dst, ft_strlcat(dst, "testetestetesteteste", 10));
	ft_putendl_fd(dst, 1);

}

void	main_ft_strchr(void)
{
	//char *s;

	printf("-------- testando ft_strchr ---------\n");
	printf("%s\t\t%s\n", ft_strchr("teste", 't'), strchr("teste", 't'));
	printf("%s\t\t%s\n", ft_strchr("teste", 'e'), strchr("teste", 'e'));
	printf("%s\t\t%s\n", ft_strchr("teste", 's'), strchr("teste", 's'));
	printf("%s\t\t%s\n", ft_strchr("teste", '\0'), strchr("teste", '\0'));
	printf("%s\t\t%s\n", ft_strchr("teste", 'a'), strchr("teste", 'a'));
	printf("%s\t\t%s\n", ft_strchr("teste", '-'), strchr("teste", '-'));
	printf("%s\t\t%s\n", ft_strchr("teste", '5'), strchr("teste", '5'));
	
	//s = strchr("teste", 'a'); ft_putendl_fd(s, 1);  //abort OK

}

void	main_ft_strrchr(void)
{
	char *s;

	printf("-------- testando ft_strrchr ---------\n");
	printf("%s\t\t%s\n", ft_strrchr("teste", 't'), strrchr("teste", 't'));
	printf("%s\t\t%s\n", ft_strrchr("teste", 'e'), strrchr("teste", 'e'));
	printf("%s\t\t%s\n", ft_strrchr("teste", 's'), strrchr("teste", 's'));
	printf("%s\t\t%s\n", ft_strrchr("teste", '\0'), strrchr("teste", '\0'));
	printf("%s\t\t%s\n", ft_strrchr("ola-ola-ola-", '-'), strrchr("ola-ola-ola-", '-'));
	printf("%s\t\t%s\n", ft_strrchr("12345", '1'), strrchr("12345", '1'));
	printf("%s\t\t%s\n", ft_strrchr("teste", '5'), strrchr("teste", '5'));

	s = ft_strrchr("ola-ola-ola-", '-'); ft_putendl_fd(s, 1);

}

void	main_ft_strnstr(void)
{
	//char *s;

	printf("-------- testando ft_strnstr ---------\n");
	printf("1 %s\t\t%s\n", ft_strnstr("teste", "t", 10), strnstr("teste", "t", 10));
	printf("2 %s\t%s\n", ft_strnstr("ol1-ola3-ola4", "ola", 30), strnstr("ol1-ola3-ola4", "ola", 30));
	printf("3 %s\t\t%s\n", ft_strnstr("vitoria", "ri", 10), strnstr("vitoria", "ri", 10));
	printf("4 %s\t%s\n", ft_strnstr("vitoria", "ri", 4), strnstr("vitoria", "ri", 4));
	printf("5 %s\t%s\n", ft_strnstr("vitoria", "ri", 5), strnstr("vitoria", "ri", 5));
	printf("6 %s\t%s\n", ft_strnstr("scabello", "ca", 3), strnstr("scabello", "ca", 3)); //3 e o limite
	printf("7 %s\t%s\n", ft_strnstr("scabello", "ca", 4), strnstr("scabello", "ca", 4));
	printf("8 %s\t%s\n", ft_strnstr("tes", "teste", 10), strnstr("tes", "teste", 10));
	printf("8 %s\t%s\n", ft_strnstr("tes", "testeteste", 100), strnstr("tes", "testeteste", 100));
	printf("9 %s\t%s\n", ft_strnstr("ala", "-", 0), strnstr("ala", "-", 0));
	printf("10 %s\t%s\n", ft_strnstr("", "", 5), strnstr("", "", 5));
	//s = ft_strnstr("abc", "abcdef", 100);
	//ft_putstr_fd(s, 2);
	printf("11 %s\t%s\n", ft_strnstr("abc", "abcdef", 100), strnstr("abc", "abcdef", 100));

}

void	main_ft_strncmp(void)
{
	int i;

	printf("-------- testando ft_strncmp ---------\n");
	printf("1 %i\t%i\n", ft_strncmp("12345", "12345", 3), strncmp("12345", "12345", 3));
	printf("2 %i\t%i\n", ft_strncmp("12347", "12345", 5), strncmp("12347", "12345", 5));
	printf("3 %i\t%i\n", ft_strncmp("12347", "12345", 4), strncmp("12347", "12345", 4));
	printf("4 %i\t%i\n", ft_strncmp("abcD", "abcd", 5), strncmp("abcD", "abcd", 10));
	printf("5 %i\t%i\n", ft_strncmp("test", "testss", 7), strncmp("test", "testss", 7));
	printf("6 %i\t%i\n", ft_strncmp("testss", "test", 7), strncmp("testss", "test", 7));
	printf("7 %i\t%i\n", ft_strncmp("", "test", 4), strncmp("", "test", 4));
	printf("8 %i\t%i\n", ft_strncmp("test", "", 4), strncmp("test", "", 4));
	printf("9 %i\t%i\n", ft_strncmp("test\200", "test\0", 6), strncmp("test\200", "test\0", 6));

	i = strncmp("teste", "tes", 100); ft_putnbr_fd(i, 1);
	
}

void	main_ft_atoi(void)
{
	int i;

	printf("-------- testando ft_atoi ---------\n");
	printf("%i\t%i\n", ft_atoi("56547"), atoi("56547"));
	printf("%i\t%i\n", ft_atoi("    +-+123"), atoi("    +-+123"));
	printf("%i\t%i\n", ft_atoi("    -123"), atoi("    -123"));
	printf("%i\t%i\n", ft_atoi("  \t -56teste56"), atoi("  \t -56teste56"));
	printf("%i\t%i\n", ft_atoi("\t\t+teste"), atoi("\t\t+teste"));
	printf("%i\t%i\n", ft_atoi("+101010teste"), atoi("+101010teste"));
	printf("%i\t%i\n", ft_atoi("  +98 -"), atoi("  +98 "));
	printf("%i\t%i\n", ft_atoi("  ++455 -"), atoi("  ++4558 - "));
	printf("%i\t%i\n", ft_atoi("   a123"), atoi("   a123"));
	printf("%i\t%i\n", ft_atoi("0"), atoi("0"));

	i = ft_atoi("56547"); ft_putnbr_fd(i, 1); ft_putchar_fd('\n', 1);
	i = ft_atoi("    +-+123"); ft_putnbr_fd(i, 1); ft_putchar_fd('\n', 1);
	i = ft_atoi("    -123"); ft_putnbr_fd(i, 1); ft_putchar_fd('\n', 1);

	i = ft_atoi("  \t -56teste56"); ft_putnbr_fd(i, 1); ft_putchar_fd('\n', 1);
	i = ft_atoi("\t\t+teste"); ft_putnbr_fd(i, 1); ft_putchar_fd('\n', 1);
	i = ft_atoi("+101010teste"); ft_putnbr_fd(i, 1); ft_putchar_fd('\n', 1); //printa errado
	i = ft_atoi("  +98 -"); ft_putnbr_fd(i, 1); ft_putchar_fd('\n', 1);
	i = ft_atoi("  ++455 -"); ft_putnbr_fd(i, 1); ft_putchar_fd('\n', 1);
	i = ft_atoi("   a123"); ft_putnbr_fd(i, 1); ft_putchar_fd('\n', 1);
	i = ft_atoi("0"); ft_putnbr_fd(i, 1); ft_putchar_fd('\n', 1);

}

void	main_ft_isalpha(void)
{
	printf("-------- testando ft_isalpha ---------\n");
	printf("%i\t%i\n", ft_isalpha(' '), isalpha(' '));
	printf("%i\t%i\n", ft_isalpha('5'), isalpha('5'));
	printf("%i\t%i\n", ft_isalpha('A'), isalpha('A'));
	printf("%i\t%i\n", ft_isalpha(26), isalpha(26));
    printf("%i\t%i\n", ft_isalpha(104), isalpha(104));
	printf("%i\t%i\n", ft_isalpha(123), isalpha(123));
}

void	main_ft_isdigit(void)
{
	printf("-------- testando ft_isdigit ---------\n");
	printf("%i\t%i\n", ft_isdigit(' '), isdigit(' '));
	printf("%i\t%i\n", ft_isdigit('9'), isdigit('9'));
	printf("%i\t%i\n", ft_isdigit('0'), isdigit('0'));
	printf("%i\t%i\n", ft_isdigit(57), isdigit(57));
	printf("%i\t%i\n", ft_isdigit(10), isdigit(10));
}

void	main_ft_isalnum(void)
{
	printf("-------- testando ft_isalnum ---------\n");
	printf("%i\t%i\n", ft_isalnum(10), isalnum(10));
	printf("%i\t%i\n", ft_isalnum(' '), isalnum(' '));
	printf("%i\t%i\n", ft_isalnum('4'), isalnum('4'));
	printf("%i\t%i\n", ft_isalnum('!'), isalnum('!'));
	printf("%i\t%i\n", ft_isalnum(36), isalnum(36));
}

void	main_ft_isascii(void)
{
	printf("-------- testando ft_isascii ---------\n");
	printf("%i\t%i\n", ft_isascii(' '), isascii(' '));
	printf("%i\t%i\n", ft_isascii(3), isascii(3));
	printf("%i\t%i\n", ft_isascii('+'), isascii('+'));
	printf("%i\t%i\n", ft_isascii('$'), isascii('$'));
}

void	main_ft_isprint(void)
{
	printf("-------- testando ft_isprint ---------\n");
	printf("%i\t%i\n", ft_isprint(9), isprint(9));
	printf("%i\t%i\n", ft_isprint('\n'), isprint('\n'));
	printf("%i\t%i\n", ft_isprint('\t'), isprint('\t'));
	printf("%i\t%i\n", ft_isprint(':'), isprint(':'));
	printf("%i\t%i\n", ft_isprint('$'), isprint('$'));
}

void	main_ft_toupper(void)
{
	printf("-------- testando ft_toupeer ---------\n");
	printf("%i\t%i\n", ft_toupper('a'), toupper('a'));
	printf("%i\t%i\n", ft_toupper('l'), toupper('l'));
	printf("%i\t%i\n", ft_toupper('B'), toupper('B'));
	printf("%i\t%i\n", ft_toupper(' '), toupper(' '));
	printf("%i\t%i\n", ft_toupper(100), toupper(100));
}

void	main_ft_tolower(void)
{
	printf("-------- testando ft_tolower ---------\n");
	printf("%i\t%i\n", ft_tolower('A'), tolower('A'));
	printf("%i\t%i\n", ft_tolower('*'), tolower('*'));
	printf("%i\t%i\n", ft_tolower('Z'), tolower('Z'));
	printf("%i\t%i\n", ft_tolower(89), tolower(89));
}

void	main_ft_calloc(void)
{
	printf("--------- testando ft_calloc ----------\n");
	//nao tem como visualizar
	printf("%s\t%s\n", ft_calloc(10,2), calloc(10,2));
	printf("%s\t%s\n", ft_calloc(10,sizeof(int)), calloc(10,sizeof(int)));
}

void	main_ft_strdup(void)
{
	char	s1[10] = "teste1";
	char	s2[10] = "";
	char	*p;

	printf("---------- testando ft_strdup-------------\n");
	p = ft_strdup(s1);
	ft_putendl_fd(p,1);
	p = strdup(s2);
	ft_putendl_fd(p,1);	
}

void	main_ft_substr(void)
{
	char	str[30] = "lorem ipsum dolor sit amet";

	printf("------- testando ft_substr --------\n");
	printf("lorem ipsu\n");
	printf("%s\n", ft_substr(str, 0, 10));
	printf("psum dolor\n");
	printf("%s\n", ft_substr(str, 7, 10));
	printf("\n");
	printf("%s\n", ft_substr(str, 7, 0));
	printf("\n");
	printf("%s\n", ft_substr(str, 0, 0));
	printf("\n");
	printf("%s\n", ft_substr(str, 400, 20));
}

void	main_ft_strjoin(void)
{
	printf("%s\n\n", ft_strjoin("vitoria ", "galli"));
}

void	main_ft_strtrim(void)
{
	printf("------- testando ft_strtrim ------\n");
	printf("%s\n", ft_strtrim("   0teste0   -","0- "));
	printf("%s\n", ft_strtrim("123teste123teste13","132"));
	printf("%s\n", ft_strtrim("   0teste0  -","-0 "));
	printf("%s\n", ft_strtrim(" teste--teste - -"," -"));
	printf("%s\n", ft_strtrim("\t \nlorem ipsum dolor sit amet \n \t" ,"\t \n"));
	printf("%s\n", ft_strtrim("teste","-0a5687"));
	printf("%s\n", ft_strtrim("				","	"));
	printf("%s\n", ft_strtrim("vitoria",""));

}

void	main_ft_split(void)
{
	char	s[20] = "vito-scab-galli";
	char	**p;
	int		i;

	printf("------- testando ft_split --------\n");
	i = 0;
	p = ft_split(s, '-');
	printf("-----------\n");
	while (p[i])
	{
		printf("%s\n", p[i]);
		i++;
	}

	char v[20] = "teste";
	p = ft_split(v, ' ');
	i = 0;
	printf("----------\n");
	while(p[i])
	{
		printf("%s\n", p[i]);
		i++;
	}
	printf("\n");

	char z[20] = "--aa---a";
	p = ft_split(z, '-');
	i = 0;
	printf("----------\n");
	while(p[i])
	{
		printf("%s\n", p[i]);
		i++;
	}
	printf("\n");

	char y[50] = "      split       this for   me  !       ";
	p = ft_split(y, ' ');
	i = 0;
	printf("----------\n");
	while(p[i])
	{
		printf("%s\n", p[i]);
		i++;
	}
	printf("\n");
}

void	main_ft_itoa(void)
{
	printf("------- testando ft_itoa -------\n");
	printf("\n%i\t%s\n", 2147483647, ft_itoa(-2147483647));
	printf("%i\t\t%s\n", 0, ft_itoa(0));
	printf("%i\t\t%s\n", -500000, ft_itoa(-500000));
	printf("%li\t%s\n", -2147483648, ft_itoa(-2147483648));
}

char	ft(unsigned int i, char c)
{
	(void)i;
	return (c++);	
}

void	main_ft_strmapi(void)
{
	char s[10] = "000000";
	char *p;

	printf("------- testando _ft_strmapi-------\n");
	p = ft_strmapi(s, ft);
	ft_putendl_fd(p, 1);
}


void	main_ft_putchar_fd(void)
{
	ft_putchar_fd('a', 1);
}

void	main_ft_putstr_fd(void)
{
	ft_putstr_fd("\ntestando 1 2 3\n",1);
}

void	main_ft_putendl_fd(void)
{
	ft_putendl_fd("testando de novo", 1);
}

void	main_ft_putnbr_fd(void)
{
	ft_putnbr_fd(-2147483648,1);
}

/*
//-------- funcao free ----------------

void ft_free(void *elem)
{
	free(elem);
}

void	main_bonus()
{
	t_list *list;
	t_list *elem;
	t_list *tmp;

	list = NULL;
	elem = ft_lstnew("1");
	list = elem;
	elem = ft_lstnew("2");
	list->next = elem;
	elem = ft_lstnew("3");
	list->next->next = elem;

	elem = ft_lstnew("4");
	ft_lstadd_front(&list, elem);

	printf("------ ft_lstadd_front ------\n");
	tmp = list;
	while (tmp)
	{
		printf("%s\n", (char*)tmp->content);
		tmp = tmp->next;
	}
	printf("------ ft_lstsize ------\n");
	printf("size\t%i\n", ft_lstsize(list));
	printf("------ ft_lstlast ------\n");
	printf("%s\n", (char *)ft_lstlast(list)->content);
	printf("------ ft_lstadd_back -----\n");
	elem = ft_lstnew("5");
	ft_lstadd_back(&list, elem);
	tmp = list;
	while (tmp)
	{
		printf("%s\n", (char*)tmp->content);
		tmp = tmp->next;
	}
	printf("------ ft_lstdelone ------\n");
	ft_lstdelone(elem, ft_free);
	tmp = list;
	while (tmp)
	{
		printf("%s\n", (char*)tmp->content);
		tmp = tmp->next;
	}
	printf("------ ft_lstclear ------\n");
	//ft_lstclear(&list, ft_free);
	printf("------ ft_lstiter ------\n");

	printf("------ ft_lstmap ------\n");

}
*/
