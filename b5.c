 #include <stdio.h>
   #include <string.h>
   #define MAXLINE 1000
   int get_line(char *line, int max);
   /* find:  print lines that match pattern from 1st arg */
   main(int argc, char *argv[])
   {
       char line[MAXLINE];
       long lineno = 0;
       int found = 0, except = 0 , number  = 0, c ;
       while ( --argc > 0 && (*++argv)[0] == '-')
       {
	       printf("lay\n");
	       while ( c = *++argv[0])
	       {
		       switch (c)
		       {
			       case 'x':
				       except =1;
				       break;
			       case 'n':
				       printf("lay\n");
				       number =1;
				       break;
			       default:
				       printf("illegal operation\n");
				       found = -1;
				       break;
		       }
	       }
       }

       if (argc != 1)
           printf("Usage: find pattern\n");
       else
           while (get_line(line, MAXLINE) > 0) {
		   lineno++;
               if ((strstr(line, *argv) != NULL) != except) {
		       if( number)
			       printf("%ld", lineno);
                   printf("%s", line);
                   found++;
               }
	   }
       return found;
   }

int get_line(char *line,int max)
   {
       int c, i;
       for (i=0; i < max-1 && (c=getchar())!=EOF && c!='\n'; ++i)
       {*line = c;
       line++;}
       if (c == '\n') {
           *line = c;
           ++line;
       }
       *line = '\0';
       return i;
   }
