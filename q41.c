//To input string from user to display it in reverse order
int main()
{
char a[100];
int i = 0;
printf("enter the string ");
scanf("%s", &a);
for(i=0;a[i]!='\0';i++);//for loop without body
printf("the length of the string is %d \n", i);
i--; //this eliminates last
while(i>=0) {
printf("%c", a[i]);
i--;
}
}