#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#include"chess.h"
#include"rule.h"
#pragma comment(lib,"Winmm.lib")


using namespace std;


class Play
{
public:
	
	void show();
	void chess();
	void qipan();
	void update();    //更新棋盘棋子
	void startgraph();
	void breakrule();
	void victory();
	void help();
	void chushihua();
	void control();
	

};  
    int i;
	int j;
    int changex;
	int changey;
    int rb=1;
    int board[10][11]={0};
	



  Blackking bk;             Bkrule BK;
  Blackadviser1 ba1;        Barule BA;
  Blackadviser2 ba2;        
  Blackelephant1 be1;       Berule BE;
  Blackelephant2 be2;       
  Blackhorse1 bh1;          Bhrule BH;
  Blackhorse2 bh2;          
  Blackcar1 bc1;            Bcrule BC;
  Blackcar2 bc2;            
  Blackpawn1 bp1;           Bprule BP; 
  Blackpawn2 bp2;           
  Blacksolider1 bs1;        Bsrule BS;
  Blacksolider2 bs2;        
  Blacksolider3 bs3;                                         //初始化所有棋子对象
  Blacksolider4 bs4;        
  Blacksolider5 bs5;        
 
  Redking rk;               Rkrule RK;        
  Redadviser1 ra1;          Rarule RA;
  Redadviser2 ra2;          
  Redelephant1 re1;         Rerule RE;
  Redelephant2 re2;         
  Redhorse1 rh1;            Rhrule RH;
  Redhorse2 rh2;            
  Redcar1 rc1;              Rcrule RC;
  Redcar2 rc2;              
  Redpawn1 rp1;             Rprule RP;
  Redpawn2 rp2;             
  Redsolider1 rs1;          Rsrule RS;
  Redsolider2 rs2;          
  Redsolider3 rs3;          
  Redsolider4 rs4;          
  Redsolider5 rs5;          
  Redchess red;    Blackchess black;
  Redkill one;     Blackkill two;
 
 
 void Play::chushihua()  //初始化棋子坐标
 {
    board[1][1]=1;  rc1.x=1;  rc1.y=1;  rc1.kill=0;     RC.s=0;   
	board[2][1]=1;  rh1.x=2;  rh1.y=1;  rh1.kill=0;     RH.s=0;   
	board[3][1]=1;  re1.x=3;  re1.y=1;  re1.kill=0;     RE.s=0;   
	board[4][1]=1;  ra1.x=4;  ra1.y=1;  ra1.kill=0;     RA.s=0;   
	board[5][1]=1;  rk.x=5;   rk.y=1;   rk.kill=0;      RK.s=0;    
	board[6][1]=1;  ra2.x=6;  ra2.y=1;  ra2.kill=0;        
	board[7][1]=1;  re2.x=7;  re2.y=1;  re2.kill=0;       
	board[8][1]=1;  rh2.x=8;  rh2.y=1;  rh2.kill=0;       
	board[9][1]=1;  rc2.x=9;  rc2.y=1;  rc2.kill=0;       
	board[2][3]=1;  rp1.x=2;  rp1.y=3;  rp1.kill=0;     RP.s=0;   
	board[8][3]=1;  rp2.x=8;  rp2.y=3;  rp2.kill=0;       
	board[1][4]=1;  rs1.x=1;  rs1.y=4;  rs1.kill=0;     RS.s=0;   
	board[3][4]=1;  rs2.x=3;  rs2.y=4;  rs2.kill=0;      
	board[5][4]=1;  rs3.x=5;  rs3.y=4;  rs3.kill=0;       
    board[7][4]=1;  rs4.x=7;  rs4.y=4;  rs4.kill=0;       
	board[9][4]=1;  rs5.x=9;  rs5.y=4;  rs5.kill=0;      

    board[1][10]=1;  bc1.x=1;  bc1.y=10;  bc1.kill=0;    BC.s=0;   
	board[2][10]=1;  bh1.x=2;  bh1.y=10;  bh1.kill=0;    BH.s=0;   
	board[3][10]=1;  be1.x=3;  be1.y=10;  be1.kill=0;    BE.s=0;   
	board[4][10]=1;  ba1.x=4;  ba1.y=10;  ba1.kill=0;    BA.s=0;   
	board[5][10]=1;  bk.x=5;   bk.y=10;   bk.kill=0;     BK.s=0;    
	board[6][10]=1;  ba2.x=6;  ba2.y=10;  ba2.kill=0;      
	board[7][10]=1;  be2.x=7;  be2.y=10;  be2.kill=0;      
	board[8][10]=1;  bh2.x=8;  bh2.y=10;  bh2.kill=0;      
	board[9][10]=1;  bc2.x=9;  bc2.y=10;  bc2.kill=0;       
	board[2][8]=1;   bp1.x=2;  bp1.y=8;   bp1.kill=0;    BP.s=0;   
	board[8][8]=1;   bp2.x=8;  bp2.y=8;   bp2.kill=0;      
	board[1][7]=1;   bs1.x=1;  bs1.y=7;   bs1.kill=0;    BS.s=0;   
	board[3][7]=1;   bs2.x=3;  bs2.y=7;   bs2.kill=0;    
	board[5][7]=1;   bs3.x=5;  bs3.y=7;   bs3.kill=0;      
	board[7][7]=1;   bs4.x=7;  bs4.y=7;   bs4.kill=0;     
	board[9][7]=1;   bs5.x=9;  bs5.y=7;   bs5.kill=0;      
	red.m=0;    black.m=0;

  }


void Play::show() //显示所有棋子
{       
	
    

        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
		
		fillcircle(300 , 60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(300-18, 60-18, "帅");
		
        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
		fillcircle(300 , 600 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(300-18, 600-18, "将");
	



        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);   //显示士棋
		
		fillcircle(240 , 60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(240-18, 60-18, "士");
	
        fillcircle(360 , 60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(360-18, 60-18, "士");
		

        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
		
		fillcircle(240 , 600 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(240-18, 600-18, "仕");
		
		
        fillcircle(360 , 600 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(360-18, 600-18, "仕");
		


        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);   //显示相棋
		
		fillcircle(180 , 60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(180-18, 60-18, "象");
		
        fillcircle(420 , 60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(420-18, 60-18, "象");
		

        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
		
		
		fillcircle(180 , 600 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(180-18, 600-18, "相");
		
        fillcircle(420 , 600 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(420-18, 600-18, "相");
		


        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);   //显示马棋
	
		fillcircle(120 , 60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(120-18, 60-18, "马");
		
        fillcircle(480 , 60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(480-18, 60-18, "马");
		

        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
		
		fillcircle(120 , 600 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(120-18, 600-18, "马");
		
        fillcircle(480 , 600 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(480-18, 600-18, "马");
		

        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);   //显示车棋
		
		fillcircle(60 , 60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(60-18, 60-18, "车");
		
        fillcircle(540 , 60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(540-18, 60-18, "车");
		

        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
		
		fillcircle(60 , 600 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(60-18, 600-18, "车");
		
		
        fillcircle(540, 600 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(540-18, 600-18, "车");


        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);   //显示炮棋
		
		fillcircle(120 , 180 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(120-18, 180-18, "炮");
		
		
        fillcircle(480 , 180 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(480-18, 180-18, "炮");
		

        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
	
		fillcircle(120 , 480 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(120-18, 480-18, "炮");
		
        fillcircle(480 , 480 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(480-18, 480-18, "炮");
		


        
        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);   //显示兵棋
		
		fillcircle(60 , 240 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(60-18, 240-18, "兵");
		

        fillcircle(60+1*120 , 240 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(60+1*120-18, 240-18, "兵");
		

		
        fillcircle(60+2*120 , 240 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(60+2*120-18, 240-18, "兵");
		

		
        fillcircle(60+3*120 , 240 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(60+3*120-18, 240-18, "兵");
	
        fillcircle(60+4*120 , 240 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(60+4*120-18, 240-18, "兵");
		

        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
		
	
		fillcircle(60 , 420 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(60-18, 420-18, "卒");
		
        fillcircle(60+1*120 , 420 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(60+1*120-18, 420-18, "卒");
	
        fillcircle(60+2*120 , 420 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(60+2*120-18, 420-18, "卒");
		
        fillcircle(60+3*120 , 420 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(60+3*120-18, 420-18, "卒");
		
        fillcircle(60+4*120 , 420 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(60+4*120-18, 420-18, "卒");

    settextcolor(RGB(255,0,0));
    setlinestyle(PS_SOLID |PS_JOIN_ROUND, 3);
	settextstyle(40, 0, _T("方正舒体"));
	outtextxy(580, 80, "红");
    outtextxy(580, 130, "方");
    outtextxy(580, 180, "落");
    outtextxy(580, 230, "子");
		

}

void Play::update()       //更新棋盘
{
	if(board[bk.x][bk.y]!=0&&bk.kill==0)
	{
		bk.display();
	}

if(board[ba1.x][ba1.y]!=0&&ba1.kill==0)
	{
		ba1.display();
	}

if(board[ba2.x][ba2.y]!=0&&ba2.kill==0)
	{
		ba2.display();
	}

if(board[be1.x][be1.y]!=0&&be1.kill==0)
	{
		be1.display();
	}

if(board[be2.x][be2.y]!=0&&be2.kill==0)
	{
		be2.display();
	}

if(board[bh1.x][bh1.y]!=0&&bh1.kill==0)
	{
		bh1.display();
	}

if(board[bh2.x][bh2.y]!=0&&bh2.kill==0)
	{
		bh2.display();
	}

if(board[bc1.x][bc1.y]!=0&&bc1.kill==0)
	{
		bc1.display();
	}

if(board[bc2.x][bc2.y]!=0&&bc2.kill==0)
	{
		bc2.display();
	}


if(board[bp1.x][bp1.y]!=0&&bp1.kill==0)
	{
		bp1.display();
	}

if(board[bp2.x][bp2.y]!=0&&bp2.kill==0)
	{
		bp2.display();
	}


if(board[bs1.x][bs1.y]!=0&&bs1.kill==0)
	{
		bs1.display();
	}

if(board[bs2.x][bs2.y]!=0&&bs2.kill==0)
	{
		bs2.display();
	}

if(board[bs3.x][bs3.y]!=0&&bs3.kill==0)
	{
		bs3.display();
	}

if(board[bs4.x][bs4.y]!=0&&bs4.kill==0)
	{
		bs4.display();
	}

if(board[bs5.x][bs5.y]!=0&&bs5.kill==0)
	{
		bs5.display();
	}

if(board[rk.x][rk.y]!=0&&rk.kill==0)
	{
		rk.display();
	}

if(board[ra1.x][ra1.y]!=0&&ra1.kill==0)
	{
		ra1.display();
	}

if(board[ra2.x][ra2.y]!=0&&ra2.kill==0)
	{
		ra2.display();
	}

if(board[re1.x][re1.y]!=0&&re1.kill==0)
	{
		re1.display();
	}

if(board[re2.x][re2.y]!=0&&re2.kill==0)
	{
		re2.display();
	}


if(board[rh1.x][rh1.y]!=0&&rh1.kill==0)
	{
		rh1.display();
	}

if(board[rh2.x][rh2.y]!=0&&rh2.kill==0)
	{
		rh2.display();
	}

if(board[rc1.x][rc1.y]!=0&&rc1.kill==0)
	{
		rc1.display();
	}


if(board[rc2.x][rc2.y]!=0&&rc2.kill==0)
	{
		rc2.display();
	}
if(board[rp1.x][rp1.y]!=0&&rp1.kill==0)
	{
		rp1.display();
	}

if(board[rp2.x][rp2.y]!=0&&rp2.kill==0)
	{
		rp2.display();
	}


if(board[rs1.x][rs1.y]!=0&&rs1.kill==0)
	{
		rs1.display();
	}

if(board[rs2.x][rs2.y]!=0&&rs2.kill==0)
	{
		rs2.display();
	}

if(board[rs3.x][rs3.y]!=0&&rs3.kill==0)
	{
		rs3.display();
	}

if(board[rs4.x][rs4.y]!=0&&rs4.kill==0)
	{
		rs4.display();
	}

if(board[rs5.x][rs5.y]!=0&&rs5.kill==0)
	{
		rs5.display();
	}

if(rb==1)
{
    settextcolor(RGB(255,0,0));
    setlinestyle(PS_SOLID |PS_JOIN_ROUND, 3);
	settextstyle(40, 0, _T("方正舒体"));
	outtextxy(580, 80, "红");
    outtextxy(580, 130, "方");
    outtextxy(580, 180, "落");
    outtextxy(580, 230, "子");
}

if(rb==0)
{
    settextcolor(RGB(0,0,0));
    setlinestyle(PS_SOLID |PS_JOIN_ROUND, 3);
	settextstyle(40, 0, _T("方正舒体"));
	outtextxy(580, 430, "子");
    outtextxy(580, 480, "落");
    outtextxy(580, 530, "方");
    outtextxy(580, 580, "黑");
}


}



void Play::chess()      //如何控制落子
{
   
	
    int p=1;
    
	MOUSEMSG m; 
	while(1)
	{
		while(p==1)
		{
	m=GetMouseMsg();
	switch(m.uMsg)                 //如何鼠标点到位置落子
	{
	case WM_LBUTTONDOWN:
		{
			for( i=1;i<10;i++)
			{
				for( j=1;j<11;j++)
				{
					if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20)
					{
						
					 
						setlinecolor(RED);
	                    setlinestyle(PS_SOLID | PS_JOIN_BEVEL, 3);
						line(60*i-25,60*j-25,60*i-14,60*j-25);
						line(60*i+14,60*j-25,60*i+25,60*j-25);
                        line(60*i-25,60*j+25,60*i-14,60*j+25);
						line(60*i+14,60*j+25,60*i+25,60*j+25);
                        line(60*i-25,60*j-25,60*i-25,60*j-14) ;
						line(60*i-25,60*j+14,60*i-25,60*j+25) ;
                        line(60*i+25,60*j-25,60*i+25,60*j-14) ;
						line(60*i+25,60*j+14,60*i+25,60*j+25) ;
						changex=i;
						changey=j;
                        p=0;
					 

						
					}
				}
			}
		}
	}
		}
	

	while(p==0)
		{
	m=GetMouseMsg();
	switch(m.uMsg)                 //如何鼠标点到位置落子
	{
	case WM_LBUTTONDOWN:
		{
			for( i=1;i<10;i++)
			{
				for( j=1;j<11;j++)
				{
					
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==rc1.x&&changey==rc1.y)
					{   
	                   
                board[rc1.x][rc1.y]=0;
                    RC.rule();
					red.cover();
					if(RC.s==1&&red.m==0&&rb==1)
					{
                       
	                   mciSendString("play 12 from 0",NULL,0,NULL);
                       
					this->qipan();
					
                    this->update();
                  
					rc1.x=i;
					rc1.y=j;
					one.kill();
					rc1.display();
                    rb=0;
					}

					else
					{
						this->breakrule();
                     this->qipan();
				
                    this->update();
                   
					rc1.display();
					}
					    board[rc1.x][rc1.y]=1;
                          RC.s=0;
						  red.m=0;
	              
	
	
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==rh1.x&&changey==rh1.y)
					{  
	board[rh1.x][rh1.y]=0;
	                  RH.rule();
					  red.cover();
                    if(RH.s==1&&red.m==0&&rb==1)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
					
                    this->update();
                   
					rh1.x=i;
					rh1.y=j;
				    one.kill();
					rh1.display();
                    rb=0;
					}

					else
					{
                    this->breakrule();
                     this->qipan();
				
                    this->update();
                    
                    rh1.display();
					}
                 board[rh1.x][rh1.y]=1;
                          RH.s=0;
						  red.m=0;
                          
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==re1.x&&changey==re1.y)
					{ 
	board[re1.x][re1.y]=0;
                      RE.rule();
					  red.cover();
				    if(RE.s==1&&red.m==0&&rb==1)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				
                    this->update();
				
					re1.x=i;
					re1.y=j;
					one.kill();
					re1.display();
                    rb=0;
					}
                          
					else
					{
                       this->breakrule();
                       this->qipan();
				
                    this->update();
				
                    re1.display();
					}
                     board[re1.x][re1.y]=1;
                          RE.s=0;
						  red.m=0;
                          
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==ra1.x&&changey==ra1.y)
					{
	board[ra1.x][ra1.y]=0;
                    RA.rule();
					red.cover();
					if(RA.s==1&&red.m==0&&rb==1)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
					
                    this->update();
					
					ra1.x=i;
					ra1.y=j;
					one.kill();
					ra1.display();
					rb=0;
					}
					else
					{
						 this->breakrule();
                       this->qipan();
					
                    this->update();
					
					ra1.display();
					}
                   board[ra1.x][ra1.y]=1;
                    RA.s=0;
					red.m=0;  
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==rk.x&&changey==rk.y)
					{ 
board[rk.x][rk.y]=0;
	                RK.rule();
					red.cover();
					if(RK.s==1&&red.m==0&&rb==1)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				
                    this->update();
				
					rk.x=i;
					rk.y=j;
					one.kill();
					rk.display();
					 rb=0;
					}
					else
					{
						 this->breakrule();
                    this->qipan();
					
                    this->update();
				
                     rk.display(); 
					}
                   board[rk.x][rk.y]=1;
                   RK.s=0;
				   red.m=0;    
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==ra2.x&&changey==ra2.y)
					{  
	board[ra2.x][ra2.y]=0;
                    RA.rule();
					red.cover();
					if(RA.s==1&&red.m==0&&rb==1)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				
                    this->update();
                  
					ra2.x=i;
					ra2.y=j;
					one.kill();
					ra2.display();
                    rb=0;
					}
					else
					{
                   this->breakrule();
                     this->qipan();
					
                    this->update();
                    
                    ra2.display();
					}
board[ra2.x][ra2.y]=1;
                          RA.s=0;
                           red.m=0;  
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==re2.x&&changey==re2.y)
					{  
	board[re2.x][re2.y]=0;
                    RE.rule();
					red.cover();
					if(RE.s==1&&red.m==0&&rb==1)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				
                    this->update();
				
					re2.x=i;
					re2.y=j;
					one.kill();
					re2.display();
					 rb=0;
					}
					else
					{
                   this->breakrule();
                    this->qipan();
					
                    this->update();
				
                    re2.display();
					}
board[re2.x][re2.y]=1;
                          RE.s=0;
                         red.m=0;  
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==rh2.x&&changey==rh2.y)
					{
	board[rh2.x][rh2.y]=0;
                    RH.rule();
					red.cover();
					if(RH.s==1&&red.m==0&&rb==1)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				
                    this->update();
                    
					rh2.x=i;
					rh2.y=j;
					one.kill();
					rh2.display();
					 rb=0;
					}
					else
					{
					this->breakrule();	 
                       this->qipan();
				
                    this->update();
                    
                     rh2.display();
					}
board[rh2.x][rh2.y]=1;
                      RH.s=0;
                       red.m=0;     
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==rc2.x&&changey==rc2.y)
					{ 
	board[rc2.x][rc2.y]=0;
                    RC.rule();
					red.cover();
					if(RC.s==1&&red.m==0&&rb==1)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				
                    this->update();
					
					rc2.x=i;
					rc2.y=j;
					one.kill();
					rc2.display();
					 rb=0;
					}
					else
					{
                   this->breakrule();
                    this->qipan();
					
                    this->update();
				
                      rc2.display();
					}
board[rc2.x][rc2.y]=1;
					 RC.s=0;
					 red.m=0;        
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==rp1.x&&changey==rp1.y)
					{ 
board[rp1.x][rp1.y]=0;
	            RP.rule();
				red.cover();
				if(RP.s==1&&red.m==0&&rb==1)
				{
mciSendString("play 12 from 0",NULL,0,NULL);
				this->qipan();
					
                    this->update();
				
					rp1.x=i;
					rp1.y=j;
					one.kill();
					rp1.display();
					  rb=0;
				}
				else
				{
					 this->breakrule();
                    this->qipan();
					
                    this->update();
					
                    rp1.display();
				}
board[rp1.x][rp1.y]=1;
                     RP.s=0;       
                          red.m=0;
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==rp2.x&&changey==rp2.y)
					{  
	   board[rp2.x][rp2.y]=0;
					RP.rule();
				red.cover();
				if(RP.s==1&&red.m==0&&rb==1)
				{
mciSendString("play 12 from 0",NULL,0,NULL);
				this->qipan();
					
                    this->update();
					
					rp2.x=i;
					rp2.y=j;
					one.kill();
					rp2.display();
					  rb=0;
				}
				else
				{
					 this->breakrule();
                    this->qipan();
					
                    this->update();
				
                    rp2.display();
				}
board[rp2.x][rp2.y]=1;
                     RP.s=0;
                          red.m=0;       
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==rs1.x&&changey==rs1.y)
					{   
   board[rs1.x][rs1.y]=0;
					RS.rule();
				red.cover();
				if(RS.s==1&&red.m==0&&rb==1)
				{
mciSendString("play 12 from 0",NULL,0,NULL);
				this->qipan();
			
                    this->update();
					
					rs1.x=i;
					rs1.y=j;
					one.kill();         
					rs1.display();
					 rb=0;
				}
				else
				{
					 this->breakrule();
                    this->qipan();
				
                    this->update();
					
                    rs1.display();
				}
board[rs1.x][rs1.y]=1;
                     RS.s=0;
                          red.m=0;       
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==rs2.x&&changey==rs2.y)
					{ 
	board[rs2.x][rs2.y]=0;
 RS.rule();
				red.cover();
				if(RS.s==1&&red.m==0&&rb==1)
				{
mciSendString("play 12 from 0",NULL,0,NULL);
				this->qipan();
				
                    this->update();
					
					rs2.x=i;
					rs2.y=j;
					one.kill();
					rs2.display();
					 rb=0;
				}
				else
				{
					 this->breakrule();
                    this->qipan();
				
                    this->update();
				
                    rs2.display();
				}
board[rs2.x][rs2.y]=1;
                     RS.s=0;
                          red.m=0;  
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==rs3.x&&changey==rs3.y)
					{   
board[rs3.x][rs3.y]=0;
   RS.rule();
				red.cover();
				if(RS.s==1&&red.m==0&&rb==1)
				{
mciSendString("play 12 from 0",NULL,0,NULL);
				this->qipan();
				
                    this->update();
					
					rs3.x=i;
					rs3.y=j;
					one.kill();
					rs3.display();
                    rb=0;
				}
				else
				{
					 this->breakrule();
                    this->qipan();
					
                    this->update();
				
                    rs3.display();
				}
board[rs3.x][rs3.y]=1;
                     RS.s=0;
                          red.m=0;     
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==rs4.x&&changey==rs4.y)
					{  
board[rs4.x][rs4.y]=0;
	  RS.rule();
				red.cover();
				if(RS.s==1&&red.m==0&&rb==1)
				{
mciSendString("play 12 from 0",NULL,0,NULL);
				this->qipan();
			
                    this->update();
					
					rs4.x=i;
					rs4.y=j;
					one.kill();
					rs4.display();
					 rb=0;
				}
				else
				{
					 this->breakrule();
                    this->qipan();
					
                    this->update();
				
                    rs4.display();
				}
board[rs4.x][rs4.y]=1;
                     RS.s=0;
                          red.m=0;      
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==rs5.x&&changey==rs5.y)
					{ 
board[rs5.x][rs5.y]=0;
	   RS.rule();
				red.cover();
				if(RS.s==1&&red.m==0&&rb==1)
				{
mciSendString("play 12 from 0",NULL,0,NULL);
				this->qipan();
				
                    this->update();
				
					rs5.x=i;
					rs5.y=j;
					one.kill();
					rs5.display();
					 rb=0;
				}
				else
				{
					 this->breakrule();
                    this->qipan();
					
                    this->update();
				
                    rs5.display();
				}
board[rs5.x][rs5.y]=1;
                     RS.s=0;
                          red.m=0;        
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==bc1.x&&changey==bc1.y)
					{ 
	
	board[bc1.x][bc1.y]=0;
 BC.rule();
					black.cover();
	                 if(BC.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
					
                    this->update();
				
					bc1.x=i;
					bc1.y=j;
					two.kill();
					bc1.display();
					 rb=1;
					}

					 else
					{
                     this->breakrule();
                    this->qipan();
					
                    this->update();
					
					bc1.display();
					}
	board[bc1.x][bc1.y]=1;
                         black.m=0;
                          BC.s=0;
	
	
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==bh1.x&&changey==bh1.y)
					{ 
		board[bh1.x][bh1.y]=0;
	  BH.rule();
					black.cover();
	                 if(BH.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				
                    this->update();
					
					bh1.x=i;
					bh1.y=j;
					two.kill();
					bh1.display();
					 rb=1;
					}

					 else
					{
                      this->breakrule();
                    this->qipan();
					
                    this->update();
					
					bh1.display();
					}
	board[bh1.x][bh1.y]=1;
                         black.m=0;
                          BH.s=0;        
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==be1.x&&changey==be1.y)
					{ 
	board[be1.x][be1.y]=0;
   BE.rule();
					black.cover();
	                 if(BE.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
					
                    this->update();
				
					be1.x=i;
					be1.y=j;
					two.kill();
					be1.display();
					 rb=1;
					}

					 else
					{
                    this->breakrule();
                    this->qipan();
					
                    this->update();
				
					be1.display();
					}
                  board[be1.x][be1.y]=1;
                         black.m=0;
                          BE.s=0;       
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==ba1.x&&changey==ba1.y)
					{  
		board[ba1.x][ba1.y]=0;
   BA.rule();
					black.cover();
	                 if(BA.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				
                    this->update();
				
					ba1.x=i;
					ba1.y=j;
					two.kill();
					ba1.display();
					 rb=1;
					}

					 else
					{
                      this->breakrule();
                    this->qipan();
					
                    this->update();
				
					ba1.display();
					}
                  	board[ba1.x][ba1.y]=1;
                         black.m=0;
                          BA.s=0;        
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==bk.x&&changey==bk.y)
					{ 
		board[bk.x][bk.y]=0;
                    BK.rule();
					black.cover();
	                 if(BK.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
					
                    this->update();
					
					bk.x=i;
					bk.y=j;
					two.kill();
					bk.display();
					 rb=1;
					}

					 else
					{
                    this->breakrule();
                    this->qipan();
					
                    this->update();
					
					bk.display();
					}
	board[bk.x][bk.y]=1;
                         black.m=0;
                          BK.s=0;        
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==ba2.x&&changey==ba2.y)
					{ 
		board[ba2.x][ba2.y]=0;
   BA.rule();
					black.cover();
	                 if(BA.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
					
                    this->update();
				
					ba2.x=i;
					ba2.y=j;
					two.kill();
					ba2.display();
					  rb=1;
					}

					 else
					{
                     this->breakrule();
                    this->qipan();
				
                    this->update();
					
					ba2.display();
					}
                 board[ba2.x][ba2.y]=1;
                         black.m=0;
                          BA.s=0;         
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==be2.x&&changey==be2.y)
					{   
board[be2.x][be2.y]=0;
   BE.rule();
					black.cover();
	                 if(BE.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				
                    this->update();
				
					be2.x=i;
					be2.y=j;
					two.kill();
					be2.display();
					 rb=1;
					}

					 else
					{
                    this->breakrule();
                    this->qipan();
					
                    this->update();
					
					be2.display();
					}
board[be2.x][be2.y]=1;
                         black.m=0;
                          BE.s=0;          
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==bh2.x&&changey==bh2.y)
					{   
board[bh2.x][bh2.y]=0;
   BH.rule();
					black.cover();
	                 if(BH.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				
                    this->update();
				
					bh2.x=i;
					bh2.y=j;
					two.kill();
					bh2.display();
					  rb=1;
					}

					 else
					{
                   this->breakrule();
                    this->qipan();
				
                    this->update();
				
					bh2.display();
					}
board[bh2.x][bh2.y]=1;
                         black.m=0;
                          BH.s=0;          
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==bc2.x&&changey==bc2.y)
					{ 
	board[bc2.x][bc2.y]=0;
   BC.rule();
					black.cover();
	                 if(BC.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				
                    this->update();
					
					bc2.x=i;
					bc2.y=j;
					two.kill();
					bc2.display();
					 rb=1;
					}

					 else
					{
                      this->breakrule();
                    this->qipan();
				
                    this->update();
				
					bc2.display();
					}
               board[bc2.x][bc2.y]=1;
                         black.m=0;
                          BC.s=0;            
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==bp1.x&&changey==bp1.y)
					{  
board[bp1.x][bp1.y]=0;
   BP.rule();
					black.cover();
	                 if(BP.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				    
                    this->update();
				
					bp1.x=i;
					bp1.y=j;
					two.kill();
					bp1.display();
					 rb=1;
					}

					 else
					{
                      this->breakrule();
                    this->qipan();
				
                    this->update();
				
					bp1.display();
					}
                       board[bp1.x][bp1.y]=1; 
                         black.m=0;
                          BP.s=0;            
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==bp2.x&&changey==bp2.y)
					{  
	board[bp2.x][bp2.y]=0;
   BP.rule();
					black.cover();
	                 if(BP.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
					
                    this->update();
					
					bp2.x=i;
					bp2.y=j;
					two.kill();
					bp2.display();
					 rb=1;
					}

					 else
					{
                    this->breakrule();
                    this->qipan();
				
                    this->update();
					
					bp2.display();
					}
                        board[bp2.x][bp2.y]=1;
                         black.m=0;
                          BP.s=0;        
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==bs1.x&&changey==bs1.y)
					{  
	board[bs1.x][bs1.y]=0;
  BS.rule();
					black.cover();
	                 if(BS.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
					
                    this->update();
					
					bs1.x=i;
					bs1.y=j;
					two.kill();
					bs1.display();
					 rb=1;
					}

					 else
					{
                     this->breakrule();
                    this->qipan();
					
                    this->update();
				
					bs1.display();
					}
                   board[bs1.x][bs1.y]=1;
                         black.m=0;
                          BS.s=0;              
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==bs2.x&&changey==bs2.y)
					{   
board[bs2.x][bs2.y]=0;
   BS.rule();
					black.cover();
	                 if(BS.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				
                    this->update();
					
					bs2.x=i;
					bs2.y=j;
					two.kill();
					bs2.display();
					 rb=1;
					}

					 else
					{
                    this->breakrule();
                    this->qipan();
					
                    this->update();
					
					bs2.display();
					}
                board[bs2.x][bs2.y]=1;
                         black.m=0;
                          BS.s=0;            
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==bs3.x&&changey==bs3.y)
					{ 
	board[bs3.x][bs3.y]=0;
   BS.rule();
					black.cover();
	                 if(BS.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				
                    this->update();
					
					bs3.x=i;
					bs3.y=j;
					two.kill();
					bs3.display();
					 rb=1;
					}

					 else
					{
                    this->breakrule();
                    this->qipan();
				
                    this->update();
				
					bs3.display();
					}
                       board[bs3.x][bs3.y]=1;
                         black.m=0;
                          BS.s=0;            
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==bs4.x&&changey==bs4.y)
					{   
board[bs4.x][bs4.y]=0;
  BS.rule();
					black.cover();
	                 if(BS.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
				
                    this->update();
				
					bs4.x=i;
					bs4.y=j;
					two.kill();
					bs4.display();
					  rb=1;
					}

					 else
					{
                this->breakrule();
                    this->qipan();
				
                    this->update();
				
					bs4.display();
					}
board[bs4.x][bs4.y]=1;
                         black.m=0;
                          BS.s=0;         
							p=1;
					}
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&changex==bs5.x&&changey==bs5.y)
					{ 
	            board[bs5.x][bs5.y]=0;
                  BS.rule();
					black.cover();
	                 if(BS.s==1&&black.m==0&&rb==0)
					{
mciSendString("play 12 from 0",NULL,0,NULL);
					this->qipan();
					
                    this->update();
					
					bs5.x=i;
					bs5.y=j;
					two.kill();
					bs5.display();
					 rb=1;
					}

					 else
					{
                   this->breakrule();
                    this->qipan();
					
                    this->update();
				
					bs5.display();
					}
                     board[bs5.x][bs5.y]=1;
                         black.m=0;
                          BS.s=0;           
							p=1;
					 }
if(m.x<(i*60)+20&&m.y<(j*60)+20&&m.x>(i*60)-20&&m.y>(j*60)-20&&board[changex][changey]==0)
					{ 
                    this->qipan();
					
                    this->update();
					p=1;
}

            this->victory();


				}
			}
		}
	}
		}

	}


}

void Play::qipan() //棋盘线条
	{

    
	loadimage(NULL,"2.jpg",640,660);
	setlinecolor(BLACK);
	setlinestyle(PS_SOLID | PS_JOIN_BEVEL, 2);
    int i;
 for (i = 1; i <= 10; i++)
		line(60, 60 * i, 540, 60 * i);  //横向x轴  //纵向y轴
	for (i = 2; i < 10; i++)
		line(60 * i, 60, 60 * i, 300);
	for (i = 2; i < 9; i++)
		line(60 * i, 360, 60 * i, 600);
	line(60, 60, 60, 600);
	line(540, 60, 540, 600);
	line(240, 60, 360, 180);
	line(360, 60, 240, 180);
	line(240, 600, 360, 480);
	line(360, 600, 240, 480);
for(i=0;i<6;i++)
{   
	line(160+60*i,236,176+60*i,236);
	line(160+60*i,244,176+60*i,244);
	line(184+60*i,236,200+60*i,236);
	line(184+60*i,244,200+60*i,244);
	
	line(176+60*i,220,176+60*i,236);
	line(184+60*i,220,184+60*i,236);
	line(176+60*i,244,176+60*i,260);
	line(184+60*i,244,184+60*i,260);
	i++;
}
for(i=0;i<6;i++)
{   
	line(160+60*i,236+180,176+60*i,236+180);
	line(160+60*i,244+180,176+60*i,244+180);
	line(184+60*i,236+180,200+60*i,236+180);
	line(184+60*i,244+180,200+60*i,244+180);
	
	line(176+60*i,220+180,176+60*i,236+180);
	line(184+60*i,220+180,184+60*i,236+180);
	line(176+60*i,244+180,176+60*i,260+180);
	line(184+60*i,244+180,184+60*i,260+180);
	i++;
}


	line(184-120,236+180,200-120,236+180);
	line(184-120,244+180,200-120,244+180);
	
	
	line(184-120,220+180,184-120,236+180);
	
	line(184-120,244+180,184-120,260+180);
    line(184-120,236,200-120,236);
	line(184-120,244,200-120,244);
	
	
	line(184-120,220,184-120,236);
	
	line(184-120,244,184-120,260);




    line(184-120+540-24-60,236+180,200-120+540-24-60,236+180);
	line(184-120+540-24-60,244+180,200-120+540-24-60,244+180);
	
	
	line(184-120+540-8-60,220+180,184-120+540-8-60,236+180 );
	
	line(184-120+540-8-60,244+180,184-120+540-8-60,260+180 );

    line(184-120+540-24-60,236,200-120+540-24-60,236);
	line(184-120+540-24-60,244,200-120+540-24-60,244);
	
	
	line(184-120+540-8-60,220,184-120+540-8-60,236);
	
	line(184-120+540-8-60,244,184-120+540-8-60,260);



	i=-1;
    line(160+60*i,236+60*i,176+60*i,236+60*i);
	line(160+60*i,244+60*i,176+60*i,244+60*i);
	line(184+60*i,236+60*i,200+60*i,236+60*i);
	line(184+60*i,244+60*i,200+60*i,244+60*i);
	
	line(176+60*i,220+60*i,176+60*i,236+60*i);
	line(184+60*i,220+60*i,184+60*i,236+60*i);
	line(176+60*i,244+60*i,176+60*i,260+60*i);
	line(184+60*i,244+60*i,184+60*i,260+60*i);

    line(160+60*i,236+180+60,176+60*i,236+180+60);
	line(160+60*i,244+180+60,176+60*i,244+180+60);
	line(184+60*i,236+180+60,200+60*i,236+180+60);
	line(184+60*i,244+180+60,200+60*i,244+180+60);
	
	line(176+60*i,220+180+60,176+60*i,236+180+60);
	line(184+60*i,220+180+60,184+60*i,236+180+60);
	line(176+60*i,244+180+60,176+60*i,260+180+60);
	line(184+60*i,244+180+60,184+60*i,260+180+60);



	line(160+60*i+360,236+60*i,176+60*i+360,236+60*i);
	line(160+60*i+360,244+60*i,176+60*i+360,244+60*i);
	line(184+60*i+360,236+60*i,200+60*i+360,236+60*i);
	line(184+60*i+360,244+60*i,200+60*i+360,244+60*i);
	
	line(176+60*i+360,220+60*i,176+60*i+360,236+60*i);
	line(184+60*i+360,220+60*i,184+60*i+360,236+60*i);
	line(176+60*i+360,244+60*i,176+60*i+360,260+60*i);
	line(184+60*i+360,244+60*i,184+60*i+360,260+60*i);

    line(160+60*i+360,236+180+60,176+60*i+360,236+180+60);
	line(160+60*i+360,244+180+60,176+60*i+360,244+180+60);
	line(184+60*i+360,236+180+60,200+60*i+360,236+180+60);
	line(184+60*i+360,244+180+60,200+60*i+360,244+180+60);
	
	line(176+60*i+360,220+180+60,176+60*i+360,236+180+60);
	line(184+60*i+360,220+180+60,184+60*i+360,236+180+60);
	line(176+60*i+360,244+180+60,176+60*i+360,260+180+60);
	line(184+60*i+360,244+180+60,184+60*i+360,260+180+60);

	setlinestyle(PS_SOLID | PS_JOIN_BEVEL, 3);
	line(56, 56, 56, 604);
	line(56, 56, 544, 56);
	line(544, 56, 544, 604);
	line(56, 604, 544, 604);
	

    setbkmode(TRANSPARENT);
	settextcolor(BLACK);
    setlinestyle(PS_SOLID |PS_JOIN_ROUND, 4);
	settextstyle(36, 0, _T("黑体"));
	outtextxy(380, 310, "汉 界");
    settextcolor(RED);
    outtextxy(110, 310, "楚 河");





	}

	void Play::help()   //游戏帮助函数
	{
          setbkcolor(RGB(64,0,64));
		  cleardevice();
          settextcolor(RGB(249,191,100));
          setlinestyle(PS_SOLID |PS_JOIN_ROUND, 3);
	      settextstyle(50, 0, _T("方正舒体"));
	      outtextxy(180,50,"象棋游戏规则");
    
          settextcolor(RGB(249,191,100));
          setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
	      settextstyle(23, 0, _T("方正舒体"));
          outtextxy(70,120,"1.如果红方帅被吃掉，则判断黑方获胜");
          outtextxy(70,150,"2.如果黑方将被吃掉，则判断红方获胜");
          outtextxy(70,180,"3.帅棋和将棋只能在规定的田字格内上下左右活动");
          outtextxy(70,210,"4.士棋只能在田字格内沿着对角线活动");
		  outtextxy(70,240,"5.象棋不能过河，且只能沿着田字活动");
		  outtextxy(70,270,"6.马棋只能沿着日字活动");
		  outtextxy(70,300,"7.车棋能横行和竖行，但前方不能有棋子挡着");
          outtextxy(70,330,"8.炮棋能隔着一个棋子攻击对方棋子");
		  outtextxy(70,360,"9.兵棋没有过河前只能一格一格前进");
		  outtextxy(70,390,"10.兵棋过河后能够左右摆动，但是不能后退");
          outtextxy(70,420,"11.如果填住了象眼，则象棋不能落子");
          outtextxy(70,450,"12.如果马棋被拐住了，则不能落子");
      
		  settextstyle(32, 0, _T("方正舒体"));
		  outtextxy(240,600,"返回菜单");
		  MOUSEMSG h;
		  while(true)
		  {
		  h=GetMouseMsg();
		  if(h.x<360&&h.x>240&&h.y>600&&h.y<640)
		  {
			  if(h.uMsg==WM_LBUTTONDOWN)
			  {
				  this->startgraph();
			  }
		  }
		  }

	}
	
void Play::startgraph()   //开始界面
	{
	
    loadimage(NULL,"3.jpg",640,660);
    setbkmode(TRANSPARENT);
	settextcolor(RGB(249,192,101));
    setlinestyle(PS_SOLID |PS_JOIN_ROUND, 3);
	settextstyle(75, 0, _T("方正舒体"));
	
    outtextxy(180, 80, "中国象棋");

    settextcolor(RGB(255,0,,0));
    setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
	
    setfillcolor(RGB(64,0,64));
    solidrectangle(230, 300, 430, 350);
    solidrectangle(230, 380, 430, 430);
	solidrectangle(230, 460, 430, 510);

    setlinecolor(RED);			
	rectangle(225, 295, 435, 355);
	rectangle(225, 375, 435, 435);
	rectangle(225, 455, 435, 515);
    
	settextstyle(32,0,"黑体");
	setbkmode(TRANSPARENT);
	outtextxy(250, 310, "1.人人对战");
	outtextxy(250, 390, "2.游戏帮助");
    outtextxy(250, 470, "3.退出游戏");
 

	mciSendString("stop bk",NULL,0,NULL);
	MOUSEMSG s;


while(true)
	{
		s= GetMouseMsg();				
		if(s.x >= 250 && s.x <= 430 && s.y >= 300 && s.y <= 350)
		{
			if(s.uMsg==WM_LBUTTONDOWN )
			{   
			
				mciSendString( "open ./music/bk.mp3 alias bk", 0, 0, 0 );
	            mciSendString("play bk repeat",NULL,0,NULL);

                mciSendString( "open ./music/12.mp3 alias 12", 0, 0, 0 );
	            this->qipan();
    
	            this->chushihua();
	            this->show();
	            this->chess();
				
			}
		}
		

			if(s.x >= 250 && s.x <= 430 && s.y >= 380 && s.y <= 430)
		{
			if(s.uMsg==WM_LBUTTONDOWN)
			{   
                this->help();
				
			}
		}
		 
			if(s.x >= 250 && s.x <= 430 && s.y >= 460 && s.y <= 510)
		{
			
			if(s.uMsg==WM_LBUTTONDOWN)
			{   
                
				closegraph();
			}
		}
	}
   
	
    

	}

void Play::breakrule()  //输出落子不符合规则
{
            setlinecolor(RGB(249,210,100));
			setfillcolor(RGB(249,210,100));
            fillrectangle(160, 310, 400, 340);
	        settextstyle(20,0,"方正舒体");
            settextcolor(RGB(249,0,0));
	        setbkmode(TRANSPARENT);
	        outtextxy(175,315, "不符合规则，请重新落子");
}


	void Play::victory()//判断输赢函数
	{
		if(bk.kill==1)
		{
            setlinecolor(RGB(64,64,255));
			setfillcolor(RGB(64,64,255));
            fillrectangle(200, 290, 400, 370);
	        settextstyle(40,0,"方正舒体");
            settextcolor(RGB(249,0,0));
	        setbkmode(TRANSPARENT);
	        outtextxy(220,310, "红方获胜");
            getch();
			cleardevice();
			this->startgraph();
			
		}

        if(rk.kill==1)
		{
            setlinecolor(RGB(64,64,255));
			setfillcolor(RGB(64,64,255));
            fillrectangle(200, 290, 400, 370);
	        settextstyle(40,0,"方正舒体");
            settextcolor(RGB(255,240,240));
	        setbkmode(TRANSPARENT);
	        outtextxy(220,310, "黑方获胜");
            getch();
			cleardevice();
			this->startgraph();
			
		}

	}
			

	        



void  main()
{


	initgraph(640,660);

    cleardevice();
    
    Play pt;
	pt.startgraph();
 	


	
}


/*程序的优化

   1.可以利用数组指针来初始化棋子对象，再通过数组指针来调用显示函数，
 大大的节省内存空间。

  2.还没有判断将军的形势，不能判断王棋是否进入到其他棋子的攻击范围之内

  3.悔棋时，目前只能存储上一步的棋子坐标
  */
  