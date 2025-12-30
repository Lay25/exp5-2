#include <stdio.h>
#include <string.h>
#define MAXLINES 5000     /* max #lines to be sorted */
#define MAXLEN 100
   char *lineptr[MAXLINES];  /* pointers to text lines */
   int readlines(char *lineptr[], char text[], int nlines);
   void writelines(char *lineptr[], int nlines);
   void qsort(char *lineptr[], int left, int right);

   int get_line(char *line,int max)
   {
       int c, i;
       for (i=0; i < max-1 && (c=getchar())!=EOF && c!='\n'; i++)
       {*line = c;
       line++;}
       if (c == '\n') {
           *line = c;
           ++line;
       }
       *line = '\0';
       return i;
   }
   /* sort input lines */
   main()
   {
   
       int nlines;     /* number of input lines read */
       char text[MAXLEN];
       if ((nlines = readlines(lineptr, text, MAXLINES)) >= 0) {
           qsort(lineptr, 0, nlines-1);
           writelines(lineptr, nlines);
           return 0;
       } else {
           printf("error: input too big to sort\n");
           return 1;
       }
   }

   /* readlines:  read input lines */
   int readlines(char *lineptr[], char text[], int maxlines)
   {
       int len, nlines;
       char line[MAXLEN];
       char *p = text;
       nlines = 0;
       while ((len = get_line(line, MAXLEN)) > 0)
           if (nlines >= maxlines)
               return -1;
	   else{
               line[len] = '\0';  /* delete newline */
	       strcpy(p,line);
               lineptr[nlines++] = p;
	       p +=strlen(line) + 1;
	   }
       return nlines;
   }
   /* writelines:  write output lines */
   void writelines(char *lineptr[], int nlines)
   {
       int i;
       for (i = 0; i < nlines; i++)
           printf("%s\n", lineptr[i]);
   }

 void qsort(char *v[], int left, int right)
   {
       int i, last;
       void swap(char *v[], int i, int j);
       if (left >= right)  /* do nothing if array contains */
           return;         /* fewer than two elements */
       swap(v, left, (left + right)/2);
       last = left;
       for (i = left+1; i <= right; i++)
           if (strcmp(v[i], v[left]) < 0)
               swap(v, ++last, i);
       swap(v, left, last);
       qsort(v, left, last-1);
       qsort(v, last+1, right);
   }

  void swap(char *v[], int i, int j)
   {
       char *temp;
       temp = v[i];
       v[i] = v[j];
       v[j] = temp;
   }
