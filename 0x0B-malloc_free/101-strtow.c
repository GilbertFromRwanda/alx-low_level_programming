#include "main.h"
#include<string.h>
/**
 * strtow - check the code
 *@str: given string need to be copied
 *
 * Return: Always 0.
 */
char **strtow(char *str)
{
int i, word_start, word_len, word_index, j, num_words, in_word = 0;
char **words;
if (str == NULL || strlen(str) == 0)
return (NULL);
for (i = 0; i < (int)strlen(str); i++)
{
if (!in_word && str[i] != ' ')
{
in_word = 1;
num_words++;
}
else if (in_word && str[i] == ' ')
{
in_word = 0;
}
}
words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
for (i = 0; i < (int)strlen(str); i++)
{
if (!in_word && str[i] != ' ')
{
in_word = 1;
word_start = i;
word_len = 1;
}
else if (in_word && str[i] != ' ')
{
word_len++;
}
else if (in_word && str[i] == ' ')
{
in_word = 0;
words[word_index] = (char *)malloc((word_len + 1) * sizeof(char));
if (words[word_index] == NULL)
{
for (j = 0; j < word_index; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}
strncpy(words[word_index], &str[word_start], word_len);
words[word_index][word_len] = '\0';
word_index++;
}
}
if (in_word)
{
words[word_index] = (char *)malloc((word_len + 1) * sizeof(char));
if (words[word_index] == NULL)
{
for (j = 0; j < word_index; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}
strncpy(words[word_index], &str[word_start], word_len);
words[word_index][word_len] = '\0';
word_index++;
}
words[word_index] = NULL;
return (words);
}
