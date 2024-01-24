#include <stdio.h>
2 //#include <stdlib.h>
3 
4 int myStrlen(char s[100])
5 {
6 int i=0;
7 while(s[i]!='\0')
8 i++;
9 return i;
10 }
11 
12 void myStrrev(char s[100])
13 {
14 int i=0,j=myStrlen(s)-1;
15 char temp;
16 for(;i<j;i++, j--)
17 {
18 temp=s[i];
19 s[i]=s[j];
20 s[j]=temp;
21 }
22 return ;
23 }
24 
25 int myStrcmp(char s[100], char t[100])
26 {
27 int i;
28 for(i=0;s[i]==t[i];i++)
29 if(s[i]=='\0')
30 return 0;
31 return s[i]-t[i];
32 }
33 
34 void myStrcpy(char to[100], char from[100])
35 {
36 int i=0;
37 while((to[i]=from[i])!='\0')
38 i++;
39 return ;
40 }
41 
42 void myStrcat(char s[100], char t[100], char dest[100])
43 {
44 int i=0, j=0;
45 while((dest[i]=s[i])!='\0')
46 i++;
47 while((dest[i++]=t[j++])!='\0')
48 ;
49 return ;
50 }
51 
52 
53 
54 
55 int main()
56 {
57 char s[100], t[100], r[100];
58 gets(s);
59 /* printf("string length=%d\n",myStrlen(s));
60 myStrcpy(t, s);
61 printf("copied string: ");
62 puts(t);
63 
64 printf("Enter enter string to concatenate: ");
65 gets(t);
66 printf("concatenated string: ");
//myStrcpy(t, s);
68 myStrcat(s, t, r);
69 puts(r);
70 printf("Reversed concatenated string: ");
71 myStrrev(r);
72 puts(r);*/
73 gets(t);
74 int cmp=myStrcmp(s,t);
75 printf("strcmp result: %d",cmp);
76 //printf("Hello world!\n");
77 //main();
78 return 0;

