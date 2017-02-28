#include<graphics.h>
#include"rule.h"
#include"chess.h"

extern int changex;
extern int changey;
extern int i;
extern int j;
extern int board[10][11];

extern Blackking bk;            extern Bkrule BK;
extern Blackadviser1 ba1;       extern Barule BA;
extern Blackadviser2 ba2;       
extern Blackelephant1 be1;      extern Berule BE;
extern Blackelephant2 be2;      
extern Blackhorse1 bh1;         extern Bhrule BH;
extern Blackhorse2 bh2;         
extern Blackcar1 bc1;           extern Bcrule BC;
extern Blackcar2 bc2;           
extern Blackpawn1 bp1;          extern Bprule BP;
extern Blackpawn2 bp2;          
extern Blacksolider1 bs1;       extern Bsrule BS;
extern Blacksolider2 bs2;      
extern Blacksolider3 bs3;                                        //初始化所有棋子对象
extern Blacksolider4 bs4;       
extern Blacksolider5 bs5;       
 
extern Redking rk;              extern Rkrule RK;
extern Redadviser1 ra1;         extern Rarule RA;
extern Redadviser2 ra2;         
extern Redelephant1 re1;        extern Rerule RE;
extern Redelephant2 re2;        
extern Redhorse1 rh1;           extern Rhrule RH;
extern Redhorse2 rh2;           
extern Redcar1 rc1;             extern Rcrule RC;
extern Redcar2 rc2;             
extern Redpawn1 rp1;            extern Rprule RP;
extern Redpawn2 rp2;            
extern Redsolider1 rs1;         extern Rsrule RS;
extern Redsolider2 rs2;       
extern Redsolider3 rs3;         
extern Redsolider4 rs4;         
extern Redsolider5 rs5;         
extern Redchess red;            extern Blackchess black;

void Redchess::cover()             //判断红方是否自相残杀的函数
{
if(i==rk.x&&j==rk.y)
{
	red.m=1;
}

if(i==ra1.x&&j==ra1.y)
{
	red.m=1;
}

if(i==ra2.x&&j==ra2.y)
{
	red.m=1;
}
if(i==re1.x&&j==re1.y)
{
	red.m=1;
}
if(i==re2.x&&j==re2.y)
{
	red.m=1;
}
if(i==rh1.x&&j==rh1.y)
{
	red.m=1;
}
if(i==rh2.x&&j==rh2.y)
{
	red.m=1;
}
if(i==rc1.x&&j==rc1.y)
{
	red.m=1;
}
if(i==rc2.x&&j==rc2.y)
{
	red.m=1;
}
if(i==rp1.x&&j==rp1.y)
{
	red.m=1;
}
if(i==rp2.x&&j==rp2.y)
{
	red.m=1;
}
if(i==rs1.x&&j==rs1.y)
{
	red.m=1;
}
if(i==rs2.x&&j==rs2.y)
{
	red.m=1;
}
if(i==rs3.x&&j==rs3.y)
{
	red.m=1;
}
if(i==rs4.x&&j==rs4.y)
{
	red.m=1;
}
if(i==rs5.x&&j==rs5.y)
{
	red.m=1;
}

}

void Blackchess::cover()                    //判断黑方是否自相残杀的函数
{
	if(i==bk.x&&j==bk.y)
	{
		black.m=1;
	}
if(i==ba1.x&&j==ba1.y)
	{
		black.m=1;
	}

if(i==ba2.x&&j==ba2.y)
	{
		black.m=1;
	}
if(i==be1.x&&j==be1.y)
	{
		black.m=1;
	}
if(i==be2.x&&j==be2.y)
	{
		black.m=1;
	}
if(i==bh1.x&&j==bh1.y)
	{
		black.m=1;
	}
if(i==bh2.x&&j==bh2.y)
	{
		black.m=1;
	}
if(i==bc1.x&&j==bc1.y)
	{
		black.m=1;
	}
if(i==bc2.x&&j==bc2.y)
	{
		black.m=1;
	}
if(i==bp1.x&&j==bp1.y)
	{
		black.m=1;
	}
if(i==bp2.x&&j==bp2.y)
	{
		black.m=1;
	}
if(i==bs1.x&&j==bs1.y)
	{
		black.m=1;
	}
if(i==bs2.x&&j==bs2.y)
	{
		black.m=1;
	}
if(i==bs3.x&&j==bs3.y)
	{
		black.m=1;
	}
if(i==bs4.x&&j==bs4.y)
	{
		black.m=1;
	}
if(i==bs5.x&&j==bs5.y)
	{
		black.m=1;
	}

}


void Bkrule::rule()                   //王的规则函数
{
	if(i<7&&i>3&&j<11&&j>7)
	{
if(changex==i)
{
	if(changey==j-1||changey==j+1)
	{   
		BK.s=1;
	}

}

if(changey==j)
{
	if(changex==i+1||changex==i-1)
	{
		BK.s=1;

	}
}
	}

	if(i<7&&i>3&&j<4&&j>0)
	{
	if(rk.x==bk.x)
	{
		BK.s=1;
		for(int m=rk.y+1;m<bk.y;m++)
		{
			if(board[rk.x][m]==1)
			{
				BK.s=0;
				break;
			}
		}
	}
	}


}


void Barule::rule()                  //士的规则函数
{
if(i<7&&i>3&&j<11&&j>7)
	{
if(changex==i+1)
{
	if(changey==j-1||changey==j+1)
	{   
		BA.s=1;
	}

}

if(changex==i-1)
{
	if(changey==j+1||changey==j-1)
	{
		BA.s=1;

	}
}
	}
}

void Berule::rule()                       //相的规则函数
{ 
if(j>5&&j<11)
	{
if(changex==i+2)
{
	if(changey==j+2)
	{   
		if(board[i+1][j+1]==0)
		BE.s=1;
	}
if(changey==j-2)
	{   
		if(board[i+1][j-1]==0)
		BE.s=1;
	}

}

if(changex==i-2)
{
	if(changey==j+2)
	{   
		if(board[i-1][j+1]==0)
		BE.s=1;
	}
if(changey==j-2)
	{   
		if(board[i-1][j-1]==0)
		BE.s=1;
	}

}
	}
}

void Bhrule::rule()                            //马的规则函数
{
	if(changex==i-2)
	{
		if(changey==j-1||changey==j+1)
		{
			if(board[i-1][changey]==0)
			BH.s=1;
		}
	}
    if(changex==i+2)
	{
		if(changey==j-1||changey==j+1)
		{
			if(board[i+1][changey]==0)
			BH.s=1;
		}
	}

	if(changey==j-2)
	{
		if(changex==i-1||changex==i+1)
		{
			if(board[changex][j-1]==0)
			BH.s=1;
		}
	}
   if(changey==j+2)
	{
		if(changex==i-1||changex==i+1)
		{
			if(board[changex][j+1]==0)
			BH.s=1;
		}
	}
}

void Bcrule::rule()                         //车的规则函数
{
	int m;
	if(changex==i)
	{
		if(changey<j)
		{
               BC.s=1;
			for(m=changey+1;m<j;m++)
			{
				if(board[i][m]==1)
				{
					BC.s=0;
                     break;
				}	
			}
		}
		  if(changey>j)
		{
             BC.s=1;
			for(m=j+1;m<changey;m++)
			{
				if(board[i][m]==1)
				{
				BC.s=0;
                     break;
				}
			}
		}
		  }
		  if(changey==j)
	{
		if(changex<i)
		{
			BC.s=1;
			for(m=changex+1;m<i;m++)
			{
				if(board[m][j]==1)
				{
					BC.s=0;
                     break;
				}
			}
		}
		  if(changex>i)
		{
	          BC.s=1;
			for(m=i+1;m<changex;m++)
			{
				if(board[m][j]==1)
				{
				BC.s=0;
                     break;
				}
			
			}
		}
		  }
	

}

void Bprule::rule()                    //炮的规则函数
{
int m1;
int m2;
int m3;
if(changex==i)
{
if(changey<j)
{
               BP.s=1;
if(board[i][j]==0)
{  
			for(m1=changey+1;m1<j;m1++)
			{
				if(board[i][m1]==1)
				{
					
						BP.s=0;
						break;
				}
			}
}
if(board[i][j]==1)
{                BP.s=0;
            for(m1=changey+1;m1<j;m1++)
			{   
				if(board[i][m1]==0)
				{
					continue;
				}
				if(board[i][m1]==1)
				{         BP.s=1;
						for(m2=m1+1;m2<j;m2++)
						{
							if(board[i][m2]==1)
							{
					          BP.s=0;
							  m3=1;
                               break;
							}
						}
					
				}
				if(m3==1)
				{
					break;
				}
			}
}
}
if(changey>j)
{
               BP.s=1;
if(board[i][j]==0)
{  
			for(m1=j+1;m1<changey;m1++)
			{
				if(board[i][m1]==1)
				{
					
						BP.s=0;
						break;
					}
			}
}
if(board[i][j]==1)
{           BP.s=0;
     for(m1=j+1;m1<changey;m1++)
			{ 
		         if(board[i][m1]==0)
				{
					continue;
				}
				if(board[i][m1]==1)
				{             BP.s=1;
						for(m2=m1+1;m2<changey;m2++)
						{
							if(board[i][m2]==1)
							{
					          BP.s=0;
							  m3=1;
                               break;
							}
						}
				}
             if(m3==1)
			 {
				 break;
			 }
				
			}
}
}
}


if(changey==j)
{
if(changex<i)
{
               BP.s=1;
if(board[i][j]==0)
{  
			for(m1=changex+1;m1<i;m1++)
			{
				if(board[m1][j]==1)
				{
					
						BP.s=0;
						break;
				}
			}
}
if(board[i][j]==1)
{              BP.s=0;
            for(m1=changex+1;m1<i;m1++)
			{
                 if(board[m1][j]==0)
				{
					continue;
				}
				if(board[m1][j]==1)
				{        BP.s=1;
						for(m2=m1+1;m2<i;m2++)
						{
							if(board[m2][j]==1)
							{
					          BP.s=0;
							  m3=1;
                               break;
							}
						}
					
				}
				if(m3==1)
				{
					break;
				}
				
			}
}
}
if(changex>i)
{
               BP.s=1;
if(board[i][j]==0)
{  
			for(m1=i+1;m1<changex;m1++)
			{
				if(board[m1][j]==1)
				{
					
						BP.s=0;
						break;
					}
			}
}
if(board[i][j]==1)
{               BP.s=0;
     for(m1=i+1;m1<changex;m1++)
			{
		 if(board[m1][j]==0)
				{
					continue;
				}
				if(board[m1][j]==1)
				{          BP.s=1;
						for(m2=m1+1;m2<changex;m2++)
						{
							if(board[m2][j]==1)
							{
					          BP.s=0;
							  m3=1;
                               break;
							}
						}
				}
				if(m3==1)
				{
					break;
				}
				
			}
}
}
}
}

void Bsrule::rule()
{
	
	
		if(changex==i&&changey==j+1)
		{
			BS.s=1;
		}
	

	if(j>0&&j<6)
	{
		if(changey==j)
		{
			if(changex==i-1||changex==i+1)
			{
				BS.s=1;
			}
		}
	}
}

void Rkrule::rule()
{
if(i<7&&i>3&&j<4&&j>0)
	{
if(changex==i)
{
	if(changey==j-1||changey==j+1)
	{   
		RK.s=1;
	}

}

if(changey==j)
{
	if(changex==i+1||changex==i-1)
	{
		RK.s=1;

	}
}
	}

	if(i<7&&i>3&&j<11&&j>7)
	{
	if(rk.x==bk.x)
	{
		RK.s=1;
		for(int m=rk.y+1;m<bk.y;m++)
		{
			if(board[rk.x][m]==1)
			{
				RK.s=0;
				break;
			}
		}
	}
	}


}

void Rarule::rule()
{
if(i<7&&i>3&&j<4&&j>0)
	{
if(changex==i+1)
{
	if(changey==j-1||changey==j+1)
	{   
		RA.s=1;
	}

}

if(changex==i-1)
{
	if(changey==j+1||changey==j-1)
	{
		RA.s=1;

	}
}
	}	

}

void Rerule::rule()
{
if(j>0&&j<6)
	{
if(changex==i+2)
{
	if(changey==j+2)
	{   
		if(board[i+1][j+1]==0)
		RE.s=1;
	}
if(changey==j-2)
	{   
		if(board[i+1][j-1]==0)
		RE.s=1;
	}

}

if(changex==i-2)
{
	if(changey==j+2)
	{   
		if(board[i-1][j+1]==0)
		RE.s=1;
	}
if(changey==j-2)
	{   
		if(board[i-1][j-1]==0)
		RE.s=1;
	}

}
}
}

void Rhrule::rule()
{
	if(changex==i-2)
	{
		if(changey==j-1||changey==j+1)
		{
			if(board[i-1][changey]==0)
			RH.s=1;
		}
	}
    if(changex==i+2)
	{
		if(changey==j-1||changey==j+1)
		{
			if(board[i+1][changey]==0)
			RH.s=1;
		}
	}

	if(changey==j-2)
	{
		if(changex==i-1||changex==i+1)
		{
			if(board[changex][j-1]==0)
			RH.s=1;
		}
	}
   if(changey==j+2)
	{
		if(changex==i-1||changex==i+1)
		{
			if(board[changex][j+1]==0)
			RH.s=1;
		}
	}
}

void Rcrule::rule()
{
int n;
	if(changex==i)
	{
		if(changey<j)
		{
               RC.s=1;
			for(n=changey+1;n<j;n++)
			{
				if(board[i][n]==1)
				{
					RC.s=0;
                     break;
				}	
			}
		}
		  if(changey>j)
		{
             RC.s=1;
			for(n=j+1;n<changey;n++)
			{
				if(board[i][n]==1)
				{
				RC.s=0;
                     break;
				}
			}
		}
		  }
		  if(changey==j)
	{
		if(changex<i)
		{
			RC.s=1;
			for(n=changex+1;n<i;n++)
			{
				if(board[n][j]==1)
				{
					RC.s=0;
                     break;
				}
			}
		}
		  if(changex>i)
		{
	          RC.s=1;
			for(n=i+1;n<changex;n++)
			{
				if(board[n][j]==1)
				{
				RC.s=0;
                     break;
				}
			
			}
		}
		  }
}

void Rprule::rule()
{
int m1;
int m2;
int m3;
if(changex==i)
{
if(changey<j)
{
               RP.s=1;
if(board[i][j]==0)
{  
			for(m1=changey+1;m1<j;m1++)
			{
				if(board[i][m1]==1)
				{
					
						RP.s=0;
						break;
				}
			}
}
if(board[i][j]==1)
{                RP.s=0;
            for(m1=changey+1;m1<j;m1++)
			{   
				if(board[i][m1]==0)
				{
					continue;
				}
				if(board[i][m1]==1)
				{         RP.s=1;
						for(m2=m1+1;m2<j;m2++)
						{
							if(board[i][m2]==1)
							{
					          RP.s=0;
							  m3=1;
                               break;
							}
						}
					
				}
				if(m3==1)
				{
					break;
				}
			}
}
}
if(changey>j)
{
               RP.s=1;
if(board[i][j]==0)
{  
			for(m1=j+1;m1<changey;m1++)
			{
				if(board[i][m1]==1)
				{
					
						RP.s=0;
						break;
					}
			}
}
if(board[i][j]==1)
{           RP.s=0;
     for(m1=j+1;m1<changey;m1++)
			{ 
		         if(board[i][m1]==0)
				{
					continue;
				}
				if(board[i][m1]==1)
				{             RP.s=1;
						for(m2=m1+1;m2<changey;m2++)
						{
							if(board[i][m2]==1)
							{
					          RP.s=0;
							  m3=1;
                               break;
							}
						}
				}
             if(m3==1)
			 {
				 break;
			 }
				
			}
}
}
}


if(changey==j)
{
if(changex<i)
{
               RP.s=1;
if(board[i][j]==0)
{  
			for(m1=changex+1;m1<i;m1++)
			{
				if(board[m1][j]==1)
				{
					
						RP.s=0;
						break;
				}
			}
}
if(board[i][j]==1)
{              RP.s=0;
            for(m1=changex+1;m1<i;m1++)
			{
                 if(board[m1][j]==0)
				{
					continue;
				}
				if(board[m1][j]==1)
				{        RP.s=1;
						for(m2=m1+1;m2<i;m2++)
						{
							if(board[m2][j]==1)
							{
					          RP.s=0;
							  m3=1;
                               break;
							}
						}
					
				}
				if(m3==1)
				{
					break;
				}
				
			}
}
}
if(changex>i)
{
               RP.s=1;
if(board[i][j]==0)
{  
			for(m1=i+1;m1<changex;m1++)
			{
				if(board[m1][j]==1)
				{
					
						RP.s=0;
						break;
					}
			}
}
if(board[i][j]==1)
{               RP.s=0;
     for(m1=i+1;m1<changex;m1++)
			{
		 if(board[m1][j]==0)
				{
					continue;
				}
				if(board[m1][j]==1)
				{          RP.s=1;
						for(m2=m1+1;m2<changex;m2++)
						{
							if(board[m2][j]==1)
							{
					          RP.s=0;
							  m3=1;
                               break;
							}
						}
				}
				if(m3==1)
				{
					break;
				}
				
			}
}
}
}
}

void Rsrule::rule()
{
   if(changex==i&&changey==j-1)
		{
			RS.s=1;
		}
	

	if(j>5&&j<11)
	{
		if(changey==j)
		{
			if(changex==i-1||changex==i+1)
			{
				RS.s=1;
			}
		}
	}
}