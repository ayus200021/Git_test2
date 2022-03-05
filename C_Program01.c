#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void add_book();                //1. Add Book Information
void display_book();            //2 .Display Book information
void display_author();          //3. Display Author
void Disp_Specific_title();     //4. Display Specific Book title
void count();                   //5. List Count Of Books
void accession_order();         //6. Accending Order Of Books

int T_book = 0;                 // To Count Add Books if Zero Then No Enter

struct library
{
  int acc_no;
  char title[30];
  char author[20];
  int price;
  int flag;
}book[100];

int main()
{
    int choice;
    
    
    while(choice!=7){
        printf("\n--------Library Management System------------\n\n");
        printf("1.Add book information\n2.display book information\n3.List all books of given author\n4.List the title of specified book\n5.List the count of books in the library\n6.List the books in the order of accession number\n7.exit\n");;
        printf("Enter the choice : ");
        scanf("%d",&choice);
        
        printf("\n____________________________________________________________________\n");
        switch(choice)
        {
            case 1:
                add_book();
                break;
            case 2:
                display_book();
                break;
            case 3:
                display_author();
                break;
            case 4:
                Disp_Specific_title();
                break;
            case 5:
                count();
                break;
            case 6:
                accession_order();
                break;
            case 7:
                printf("Thanks For Using \n");
                exit(1);
            default:
                printf("Enter valid choice..\n");
        }
        printf("\n***************************************************************************************\n");
    }
    
    
    return 0;
}

void add_book()
{
    int n,i;
    printf("How many books you want to add? ");
    scanf("%d",&n);
    //printf("Enter details of %d books\n",n);
    for(i=0;i<n;i++)
    {
        printf("Enter information of book no. %d\n",i+1);
        printf("Accession number: ");
        scanf("%d",&book[i].acc_no);
        printf("Title of the book: ");
        scanf("%s",book[i].title);
        printf("Author name: ");
        scanf("%s",book[i].author);
        printf("Price: ");
        scanf("%d",&book[i].price); 
        printf("Issue status yes/no(1/0): ");
        scanf("%d",&book[i].flag);
        T_book++;
    }

    
}

void display_book(){
     printf("Total numbers of books are %d\n\n",T_book);
     if(T_book<1){
         printf("No Books are here...!\n");
     }
     else{
            for(int i=0;i<T_book;i++){
               printf("Book no. %d\n",i+1);
                printf("Accession number: %d\n",book[i].acc_no);
                printf("Title of the book: %s\n",book[i].title);
                printf("Author name: %s\n",book[i].author);
                printf("Price: %d\n",book[i].price);
                printf("Issue status yes/no(1/0): %d\n\n",book[i].flag);
                
            }
     }
}

void display_author(){
    printf("Total numbers of books are %d\n\n",T_book);
     if(T_book<1){
         printf("No Books are here...!\n");
     }
     else{
            for(int i=0;i<T_book;i++){
                printf("Author name: %s\n",book[i].author);
            }
     }
}
void Disp_Specific_title(){
    printf("Total numbers of books are %d\n\n",T_book);
     if(T_book<1){
         printf("No Books are here...!\n");
     }
     else{
            for(int i=0;i<T_book;i++){
                printf("Title of the book: %s\n",book[i].title);
            }
     }
    
}

void count(){
    
     if(T_book<1){
         printf("No Books are here...!\n");
     }
     else {
         printf("Total numbers of books are %d\n",T_book);
     }
    
}

void accession_order(){
    printf("Total numbers of books are %d\n\n",T_book);
     if(T_book<1){
         printf("No Books are here...!\n");
     }
     else{
            for(int i=0;i<T_book;i++){
                printf("Accession number: %d\n",book[i].acc_no);
            }
     }
}
