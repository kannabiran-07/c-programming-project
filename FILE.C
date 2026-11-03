 #include<stdio.h>
 int main()
 {
 FILE*fp;
 char ch;
 fp=fopen("data.txt","w");
 if(fp==NULL)
 {
 printf("error");
 }
 fprintf(fp,"c is a general purpose programming language c was developed by dennis ritchie in 1972 c is a simple and powerful c is used to develop software and application c supports functions ,loops and arrays");
 fclose(fp);
 fp=NULL;
 fp=fopen("data.txt","r");
 if(fp==NULL);
 {
 printf("error");
 }
 while((ch=fgetc(fp))!=EOF)
 {
 printf("%c",ch);
 }
 fclose(fp);
 fp=NULL;
 fp=fopen("data.txt","a");
 if(fp==NULL);
 {
 printf("error");
 }
 fprintf(fp,"c program trainers character was good  sir explains the concept clearly  his teaching method is easy to understand  he teaches step by step  he explains program with example");
 fclose(fp);
 fp=NULL;
 return 0;
 }