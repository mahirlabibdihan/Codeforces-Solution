#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

bool gameover,start;
string name;

int x,y,fx,fy,score,i,j,k,ntail=0,difficulty,a;
vector<int> tailx,taily;

const int n=10,m=20;
char dir; 

void setup()
{
	gameover=false;
	x=n/2;
	y=m/2; y=2*(y/2);
    a=0;
   	 while(!a)
   	 {
   	 	fx=rand()%n;
        fy=rand()%m; fy=2*(fy/2);  

        for(i=0;i<ntail;i++)
        {
        	if(fx==tailx[i]&fy==taily[i]) break;
        } 
        if(i==ntail) a=1;
   	 }
}

void draw()
{
	clrscr();
	cout<<"  "<<name<<"'s SCORE: "<<score<<endl;
	for(i=-1;i<=n;i++)
	{cout<<"  ";
		for(j=-1;j<=m;j++)
		{
			if(i==-1|i==n) {char c=219; cout<<c;}	
            else if(j==-1|j==m) {char c=219; cout<<c<<c;}	
			else if(i==x&j==y) {char c=178; cout<<c;}			
			else if(i==fx&j==fy) {char c=254; cout<<c;}	
			else 
				{ 
					for(k=0;k<ntail;k++)
					{
						if(i==tailx[k]&j==taily[k]) break;
					}
					if(k<ntail) {char c=177; cout<<c;}
					else cout<<' ';
				}
		}
		if(i==-1|i==n){char c=219; cout<<c<<c;}	
		cout<<endl;
	} 
	
}

void input()
{
	if(_kbhit())
    {
		switch(_getch())
		{
			case 'a': if(dir!='R') dir='L'; break;
			case 'd': if(dir!='L') dir='R'; break;
			case 'w': if(dir!='D') dir='U'; break;
			case 's': if(dir!='U') dir='D'; break;
			case 'x': gameover=true; break;
		}
	}
}

void logic()
{
	for(i=0;i<ntail;i++)
		if(tailx[i]==x&taily[i]==y) gameover=true;

	tailx.insert(tailx.begin(),x);
	taily.insert(taily.begin(),y);

   	if(dir=='L') y-=2;
   	if(dir=='R') y+=2;
   	if(dir=='U') x--; 
   	if(dir=='D') x++;

    (x<0)?(difficulty==2)?gameover=true:x=n+x:x=x;
    (x>n-1)?(difficulty==2)?gameover=true:x=n-x:x=x;
    (y<0)?(difficulty==2)?gameover=true:y=m+y:y=y;
    (y>m-1)?(difficulty==2)?gameover=true:y=m-y:y=y;

    if(x==fx&y==fy)
    {
   	 score+=(difficulty==2)?20:10;
   	 a=0;
   	 while(!a)
   	 {
   	 	fx=rand()%n;
        fy=rand()%m; fy=2*(fy/2);  

        for(i=0;i<ntail;i++)
        {
        	if(fx==tailx[i]&fy==taily[i]) break;
        } 
        if(i==ntail) a=1;
   	 }
   	 
   	 ntail++;
    }
}

int main()
{
	X:
	clrscr();
	cout<<"ENTER USER NAME: ";
	cin>>name;

	clrscr();

    cout<<"INSTRUCTIONS:"<<endl;
	cout<<"UP -> w"<<endl;
	cout<<"DOWN -> s"<<endl;
	cout<<"LEFT -> a"<<endl;
	cout<<"RIGHT -> d"<<endl;
	cout<<"END GAME -> x"<<endl;

	cout<<"CHOOSE DIFFICULTY :"<<endl<<"1. EASY"<<endl<<"2. HARD"<<endl;
	cin>>difficulty;

    setup();

	while(!gameover)
	{
		draw();
		input();
		logic();
	}

	clrscr();
	cout<<endl;
	for(i=-1;i<=n;i++)
	{cout<<"  ";
		for(j=-1;j<=m;j++)
		{
			if(i==-1|i==n) {char c=219; cout<<c;}	
            else if(j==-1|j==m) {char c=219; cout<<c<<c;}	
			else if(i==n/2-1&j==m/3) {cout<<"GAME OVER"; j+=8;}
			else if(i==n/2&j==m/3-1) {cout<<"SCORE: "<<setfill('0')<<setw(5)<<score; j+=11; }
			else cout<<' ';
		}
		if(i==-1|i==n){char c=219; cout<<c<<c;}	
		cout<<endl;	  
    }
}