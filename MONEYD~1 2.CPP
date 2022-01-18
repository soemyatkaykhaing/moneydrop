#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


struct quiz{
	char qstr[300];
	int correct;
};
struct quiz qu[8][3];
char *category[8]={"Geography","Music","Movie","History","Celebrity","Sport","Science","Holiday"};
void putdata(){
	
	strcpy(qu[0][0].qstr,"What is Earth's largest continent?	1.Europe	2.Asia	3.Africa	4.North America");
	qu[0][0].correct=2
	strcpy(qu[0][1].qstr,"What river runs through Baghdad?	1.Jordan	2.Euphrates	3.Karun	4.Tigris");
	qu[0][1].correct=4
	strcpy(qu[0][2].qstr,"What country has the most natural lakes?	1.United State	2.Australia	3.India	4.Canada");
	qu[0][2].correct=4
	strcpy(qu[1][0].qstr,"Who was awarded the very first gold record?	1.The Beatles	2.Elvis Presley	3.Perry Como	4.Nat King Cole");
	qu[1][0].correct=3
	strcpy(qu[1][1].qstr,"What pop singer is known as The Material Girl?	1.Madonna	2.Taylor Swift	3.Britney Spears	4.Lady Gaga");
	qu[1][1].correct=1
	strcpy(qu[1][2].qstr,"What is the oldest surviving musical instrument?	1.Trumpet	2.Drum	3.Flute	4.Lyre");
	qu[1][2].correct=3
	strcpy(qu[2][0].qstr," What book did Jesse Eisenberg purchase during rehearsals for The Social Network?	1.C++ for Dummies	2.The Facebook Effect	3.Sapiens	4.The Structure of Scientific Revolution");
	qu[2][0].correct=1
	strcpy(qu[2][1].qstr,"In Big Hero 6, what did the animators model Baymax's movements after?	1.A Sumo Wrestler	2.A Penguin	3.C-3PO	4.A Baby with a full diaper");
	qu[2][1].correct=4
	strcpy(qu[2][2].qstr,"What country does The Hunger Games take place in?	1.Gondor	2.Pangea	3.Panem	4.Narnia");
	qu[2][2].correct=3
	strcpy(qu[3][0].qstr,"Which of the following inventions was the first to be patented??	1.Cash Register	2.Rubber Band	3.Chewing Gum	4.Dishwasher");
	qu[3][0].correct=2
	strcpy(qu[3][1].qstr,"What was the first city to reach a population of one million?	1.Rome	2.London	3.New York	4.Beijing");
	qu[3][1].correct=1
	strcpy(qu[3][2].qstr,"In which ocean was the Battle of Midway fought?	1.Atlantic	2.India	3.Pacific	4.Southern");
	qu[3][2].correct=3
	strcpy(qu[4][0].qstr,"What celebrity was the victim of an infamous Wardrobe Malfunction during the 2004 Super Bowl halftime show?	1.Mariah Carey	2.Janet Jackson	3.Madonna	4.Lady Gaga");
	qu[4][0].correct=2
	strcpy(qu[4][1].qstr,"Who did Britney Spears kiss onstage at the 2003 MTV Video Music Awards?	1.Madonna	2.Justin Bieber	3.Justin Timberlake	4.Eminem");
	qu[4][1].correct=1
	strcpy(qu[4][2].qstr,"What Hollywood starlet was arrested for shoplifting from the Saks Fifth Avenue in Beverly Hills?	1.Charlize Theron	2.Christina Ricci	3.Angelina Jolie	4.Winona Ryder");
	qu[4][2].correct=4
	strcpy(qu[5][0].qstr,"What is the PGA record for highest score on a par-4?	1.10	2.13	3.7	4.16");
	qu[5][0].correct=4
	strcpy(qu[5][1].qstr,"What country won the first World Cup?	1.Brazil	2.Argentina	3.Uruguay	4.Swizerland");
	qu[5][1].correct=3
	strcpy(qu[5][2].qstr,"What year did China win its first Olympic medal?	1.1936	2.1968	3.1984	4.1952");
	qu[5][2].correct=3
	strcpy(qu[6][0].qstr,"When was the idea of the atom first introduced?	1.1050	2.450 B.C	3.1791	4.1942");
	qu[6][0].correct=2
	strcpy(qu[6][1].qstr,"What is the gestation period of a Hippopotamus?	1.4 months	2.12 months	3.16 months	4.8 months");
	qu[6][1].correct=4
	strcpy(qu[6][2].qstr,"In what type of matter are atoms most tightly packed?	1.solid	2.liquid	3.gas	4.all are the same");
	qu[6][2].correct=1
	strcpy(qu[7][0].qstr,"What snack is traditionally left out for Santa Claus?	1.Pizza	2.Brownies	3.Cookies	4.Carrots");
	qu[7][0].correct=3
	strcpy(qu[7][1].qstr,"What percent of parents admit to stealing Halloween candy from their children?	1.90	2.10	3.50	4.30");
	qu[7][1].correct=1
	strcpy(qu[7][2].qstr,"What part of a chocolate Easter bunny do most children eat first?	1.Arms	2.Feet	3.Ears	4.Stomach");
	qu[7][2].correct=3

}
void printdata(struct quiz qz)    {
	for(int i=0;i<strlen(qz.qstr);i++)
	{
		if(qz.qstr[i]=='\t')
			qz.qstr[i]='\n';
	}
	printf("%s\n",qz.qstr);

}
void main(){
       //	int usermoney=200;
	//int amount;
	//int ans[3][2];
	int qcnt=0;
	int ran;
	int ran1;
	int i,j,choose,amount,win=0,index=1,usermoney=200;
	int ran2,limit,ct;
	int cat[7];
	clrscr();
	putdata();
	while(qcnt<7&&usermoney>0)
	{
	       printf("\n Choose Category");
	       randomize();
		//Generate category
	       ran=random(7)+1;
	       ran1=random(7)+1;
	       win=0;
		//Check unique category
	       for (i=0;i<qcnt+1;i++){
		     if(cat[i]==ran){
			ran=random(7)+1;
			i=0;
		    }
		      if(cat[i]==ran1||ran1==ran){
			ran1=random(7)+1;
			i=0;
		     }
		    
	       }
	       printf("\n1.%s\t2.%s\n",category[ran],category[ran1]);
	       scanf("%d",&choose);
	       if(choose==1)
		 cat[qcnt]=ran;
	       else
		cat[qcnt]=ran1;

		ct=cat[qcnt];
		//assigning level limit
		if(qcnt<4) {
			limit=3;
			ran2 = random(3);

		}
		else if(qcnt<6){
			limit=2;
			ran2 = random(3);
		}
		else
		{
			limit=1;
			ran2 = random(3);
		}


		printdata(qu[ct][ran2]);
		int money[3][2];
		for(i=0;i<limit;i++)
		{
			if(usermoney<=0)
				break;
			printf("\n Enter answer :");
			scanf("%d",&index);
			while(index<1||index>4)
			{
				printf("\n Invalid enter again :");
				scanf("%d",&index);
			}
				for(j=0;j<1;j++)
				{
					while(money[i][0]==index){
						printf("\n Already chosen: enter aganin ");
						scanf("%d",&index);
						while(index<1||index>4)
						{
							printf("\n Invalid enter again :");
							scanf("%d",&index);
						}
					}
				}
			
			money[i][0]=index;
			if(i<limit-1)
			{
				printf("\n Enter amount :");
				scanf("%d",&amount);
				usermoney=usermoney-amount;
				while(usermoney<0||usermoney>200){
					printf("\nEnter amount again : ");
					usermoney=usermoney+amount;
					scanf("%d",&amount);
					usermoney=usermoney-amount;

				}

			}
			else{
				amount=usermoney;
				printf(" \n Amount for index %d is %d",index,amount);
			}
			if(money[i][0]==1)
				win=amount;

		}
		usermoney=win;
		printf("\n win %d in Question %d",win,qcnt);
		printf("\n Usermoney %d",usermoney);
		qcnt++;




	}
		  getch( );
}