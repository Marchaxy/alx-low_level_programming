1   #include "main.h"
2
3   /**
4    * _isupper - check if letter is uppercase
5    * @c: print int
6    * Return: Always 0
7    */
8
9   int _isupper(int c)
10  {
11  if (c >= 'A' && c <= 'Z')
12  { 
13  return (1);
14  }   
15
16  else
17  {
18  return (0);
19  }
20
21  }
