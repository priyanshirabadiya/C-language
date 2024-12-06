#include <stdio.h>

int main() {
    int choice;
   int c,s,total=0,gt=0,t=0,o=0,l=0,a=0,r=0,lk,hir,x,pm,n,score;
   char p[20],k[30],f[20],g[20],kr[20],pr[20],pi[20];
        
        printf("Menu:\n");
        printf("1. RAJ CINEMA\n");
        printf("2. ORDER FOOD 2\n");
        printf("3. PLAY GAMES 3\n");
        printf("4. BOOK TICKETS\n");
        printf("5. Exit program\n");
        do{
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("WELCOME TO RAJ CINEMA \n");
                printf("1.gader 2\n");
                printf("2.jvan\n");
                printf("3.3 Akka\n");
                printf("4.OMG 2");
                printf("enter choice:");
                scanf("%d",&c);
                if(c==1)
                {
                  printf("\nyou select Gader 2");
                  printf("\nprice:350rs.");
                  printf("\nbook your sit:");
                  scanf("%d",&s);
                  total=350*s;
                  printf("\nyour total price is:%d",total);
                }
                else if(c==2)
                {
                  printf("jvan");
                  printf("\nyou select jvan");
                  printf("\nprice:350rs.");
                  printf("\nbook your sit:");
                  scanf("%d",&s);
                  total=350*s;
                  printf("\nyour total price is:%d",total);
                }
                else if(c==3)
                {
                  printf("3 Akka");
                  printf("OMG 2");
                  printf("\nyou select omg 2");
                  printf("\nprice:350rs.");
                  printf("\nbook your sit:");
                  scanf("%d",&s);
                  total=200*s;
                  printf("\nyour total price is:%d",total);
                }
                else if(c==4)
                {
                  
                
                  printf("\nOMG 2");
                  printf("\nyou select OMG 2");
                  printf("\nprice:350rs.");
                  printf("\nbook your sit:");
                  scanf("%d",&s);
                  total=150*s;
                  printf("\nyour total price is:%d",total);
                
                }
                else
                {
                  printf("Wrong choice");
                }
                break;
                
             case 2:
                printf("WELCOME TO HOTEL DARSHAN\n");
                printf("Menu card\n");
                printf(" dish name    rs\n");
                printf("1.Dosa         200\n");
                printf("2.jini roll    150\n");
                printf("3.Maisur       100\n");
                printf("4.coldrinks    20  \n");
                printf("5.Grand total\n");
                printf("enter your choice:");
                scanf("%d",&c);
                if(c==1)
                {
                  printf("you select dosa\n");
                  printf("\nenter quentity:");
                  scanf("%d",&s);
                  t=200*s;
                  printf("\ntotal price is:%d",t);
                }
                else if(c==2)
                {
                  printf("\nyou select jini roll");
                   printf("\nenter quentity:");
                  scanf("%d",&s);
                  o=150*s;
                  printf("\ntotal price is:%d",o);
                  
                }
                else if(c==3)
                {
                  printf("\nyou select maisur");
                  printf("\nenter quentity:");
                  scanf("%d",&s);
                  a=100*s;
                  printf("\ntotal price is:%d",a);
                }
                else if(c==4)
                {
                   printf("\nyou select coldrinks");
                   printf("\nenter quentity:");
                  scanf("%d",&s);
                  l=20*s;
                  printf("\ntotal price is:%d",l);
                }
                else if(c==5)
                {
                    gt= t+o+a+l;
                    printf("Grand total is :%d",gt);
                }
                else{
                  printf("wrong choice");
                }
                break;
              

            case 3:
                printf("WELCOME TO GAMEZONE\n");
                printf("\ngame list    rs");
                printf("\n1.Jumping    249/-");
                printf("\n2.DodgeBall  39/-");
                printf("\n3.Basketball 349/-");
                printf("\n4.Foam Pit   369/-");
                printf("\nIF YOU WIN THE GAMES YOU WILL GET 50 PERSENTAGE DISCOUNT");
                printf("\nenter choice:");
                scanf("%d",&c);
                if(c==1)
                {
                  printf("\nyou select JUMPING");
                   printf("\nYOU CAN'T GET DISSCOUNT IN THIS GAME");
                  printf("\nenter hours:");
                  scanf("%d",&n);
                  o=n*249;
                  printf("your amount is:%d",o);
                }
                else if(c==2)
                {
                   printf("you select Dedge ball");
                   printf("YOU CAN'T GET DISSCOUNT IN THIS GAME\n");
                  printf("enter how many times you want to play:");
                  scanf("%d",&n);
                  l=n*39;
                  printf("your amount is:%d",l);
                }
                else if(c==3)
                {
                  printf("you select basket ball\n");
                  printf("enter how many times you want to play:");
                  scanf("%d",&n);
                 
                  printf("enter achieved score:");
                  scanf("%d",&score);
                  if(score<10)
                  {
                     l=n*349;
                     printf("your amount is:%d",l);
                  }
                 else
                {
                  printf("CONGRATS YOU GET 50 PERSENTAGE DISCOUNT");
                  l=(n*349)*50/100;  
                  printf("your amount is:%d",l);         
                }
                } 
                else if(c==4)
                {
                 printf("FOAM PIT\n");
                printf("YOU CAN'T GET DISSCOUNT IN THIS GAME\n");
                printf("enter hours:\n");
                scanf("%d",&n);
                r=n*369;
                printf("your amount is:%d",r);
                }
                else
                {
                  printf("wrong choice");
                }
                break;
            case 4:
               printf("BOOK TICKETS\n");
               printf("\n1.bus tickets");
               printf("\n2.train tickets");
               printf("\n3.plain tickets");
               printf("\n4.exit ");
               printf("\nenter choice:");
               scanf("%d",&c);
               if(c==1)
               {
                printf("\n THERE IS LOTS OF BUSES");
                printf("\nenter your location to where you want to reach:");
                scanf("%s",&k);
               
                printf("\n DHARTI");
                printf("\n RAJMANDIR");
                printf("\n ROYAL");
                printf("\n choose your favourite bus: ");
                scanf("%s",&p);
                printf("\nenter number of tickets in your selected BUS to book:");
                scanf("%d",&l);
                o=l*1000;
                printf("\nBus is                  :%s",p);
                printf("\nLocation to reach is    :%s",k);
                printf("\nnumber of tickets is/are:%d",l); 
                printf("\nyour  total  amount is  :%d ",o);
                printf("\nYOUR TICKET IS CONFORM..");

                
               }
               else if(c==2)
               {
                printf("\n THERE IS LOTS OF TRAINS");
                printf("\nenter your location to where you want to reach:");
                scanf("%s",&f);
                printf("\n 1.chennai express");
                printf("\n 2.tirunnevali express");
                printf("\n CHOOSE YOUR FAVOURITE TRAIN: ");
                printf("%s",&g);
                printf("\nenter number of tickets to book in your selected train:");
                scanf("%d",&x);
                pm=l*450;
                printf("\nTrain is                 :%s",f);
                printf("\nLocation to reach is     :%s",g);
                printf("\nnumber of tickets is/are :%d",x); 
                printf("\nyour  total  amount is   :%d",pm);
                printf("\nYOUR TICKET IS CONFORM..");
               }
               else if(c==3)
                
               {
                printf("\n THERE IS LOTS OF FLIGHTS");
                printf("\nenter your location to where you want to reach:");
                scanf("%s",&kr);
                
                printf("\n IndiGo ");
                printf("\n Air india");
                printf("\n SpiceJet.");
                printf("\n AirAsia India.");
                printf("\n CHOOSE YOUR FLIGHT:");
                scanf("%s",&pi);
                printf("\nenter number of tickets to book:");
                scanf("%d",&lk);

                hir=l*12000;
                printf("\nflight is               :%s",pi);
                printf("\nLocation to reach is    :%s",kr);
                printf("\nnumber of tickets is/are:%d",lk); 
                printf("\nyour  total  amount is  :%d",hir);
                printf("\nYOUR FLIGHT TICKET IS CONFORM..");
               }
               
                else
                {
                  printf("wrong choice");
                }
               
                break;
                case 5:
                {
                  printf("--exit program--");
                  break;
                }

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 5); 

    return 0;
}

