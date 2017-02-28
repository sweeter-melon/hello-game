#include"chess.h"
#include<graphics.h>




  extern Blackking bk;
  extern Blackadviser1 ba1;
  extern Blackadviser2 ba2;
  extern Blackelephant1 be1;
  extern Blackelephant2 be2;
  extern Blackhorse1 bh1;
  extern Blackhorse2 bh2;
  extern Blackcar1 bc1;
  extern Blackcar2 bc2;
  extern Blackpawn1 bp1;
  extern Blackpawn2 bp2;
  extern Blacksolider1 bs1;
  extern Blacksolider2 bs2;
  extern Blacksolider3 bs3;                  //初始化所有棋子对象
  extern Blacksolider4 bs4;
  extern Blacksolider5 bs5;

  extern Redking rk;
  extern Redadviser1 ra1;
  extern Redadviser2 ra2;
  extern Redelephant1 re1;
  extern Redelephant2 re2;
  extern Redhorse1 rh1;
  extern Redhorse2 rh2;
  extern Redcar1 rc1;
  extern Redcar2 rc2;
  extern Redpawn1 rp1;
  extern Redpawn2 rp2;
  extern Redsolider1 rs1;
  extern Redsolider2 rs2;
  extern Redsolider3 rs3;
  extern Redsolider4 rs4;
  extern Redsolider5 rs5;

  extern Redkill one;
  extern Blackkill two;

  extern int i;
  extern int j;

void Blackkill::kill()  //黑方杀子
{
	if(i==rc1.x&&j==rc1.y)
	{
		rc1.kill=1;
		rc1.x=0;
		rc1.y=0;
	}

if(i==rh1.x&&j==rh1.y)
	{
		rh1.kill=1;
		rh1.x=0;
		rh1.y=0;
	}
if(i==re1.x&&j==re1.y)
	{
		re1.kill=1;
		re1.x=0;
		re1.y=0;
	}
if(i==ra1.x&&j==ra1.y)
{
	ra1.kill=1;
	ra1.x=0;
	ra1.y=0;
}
if(i==rk.x&&j==rk.y)
{
	rk.kill=1;
	rk.x=0;
	rk.y=0;
}

if(i==ra2.x&&j==ra2.y)
	{
		ra2.kill=1;
		ra2.x=0;
		ra2.y=0;
	}
if(i==re2.x&&j==re2.y)
	{
		re2.kill=1;
		re2.x=0;
		re2.y=0;
	}
if(i==rh2.x&&j==rh2.y)
	{
		rh2.kill=1;
		rh2.x=0;
		rh2.y=0;
	}
if(i==rc2.x&&j==rc2.y)
	{
		rc2.kill=1;
		rc2.x=0;
		rc2.y=0;
	}
if(i==rp1.x&&j==rp1.y)
	{
		rp1.kill=1;
		rp1.x=0;
		rp1.y=0;
	}
if(i==rp2.x&&j==rp2.y)
	{
		rp2.kill=1;
		rp2.x=0;
		rp2.y=0;
	}
if(i==rs1.x&&j==rs1.y)
	{
		rs1.kill=1;
		rs1.x=0;
		rs1.y=0;
	}
if(i==rs2.x&&j==rs2.y)
	{
		rs2.kill=1;
		rs2.x=0;
		rs2.y=0;
	}
if(i==rs3.x&&j==rs3.y)
	{
		rs3.kill=1;
		rs3.x=0;
		rs3.y=0;
	}
if(i==rs4.x&&j==rs4.y)
	{
		rs4.kill=1;
		rs4.x=0;
		rs4.y=0;
	}
if(i==rs5.x&&j==rs5.y)
	{
		rs5.kill=1;
		rs5.x=0;
		rs5.y=0;
	}

}

void Redkill::kill()        //红方杀子
{
if(i==bc1.x&&j==bc1.y)
	{
		bc1.kill=1;
		bc1.x=0;
		bc1.y=0;
	}
if(i==bh1.x&&j==bh1.y)
	{
		bh1.kill=1;
		bh1.x=0;
		bh1.y=0;
	}
if(i==be1.x&&j==be1.y)
	{
		be1.kill=1;
		be1.x=0;
		be1.y=0;
	}
if(i==ba1.x&&j==ba1.y)
	{
		ba1.kill=1;
		ba1.x=0;
		ba1.y=0;
	}
if(i==bk.x&&j==bk.y)
	{
		bk.kill=1;
		bk.x=0;
		bk.y=0;
	}
if(i==ba2.x&&j==ba2.y)
	{
		ba2.kill=1;
		ba2.x=0;
		ba2.y=0;
	}
if(i==be2.x&&j==be2.y)
	{
		be2.kill=1;
		be2.x=0;
		be2.y=0;
	}
if(i==bh2.x&&j==bh2.y)
	{
		bh2.kill=1;
		bh2.x=0;
		bh2.y=0;
	}
if(i==bc2.x&&j==bc2.y)
	{
		bc2.kill=1;
		bc2.x=0;
		bc2.y=0;
	}
if(i==bp1.x&&j==bp1.y)
	{
		bp1.kill=1;
		bp1.x=0;
		bp1.y=0;
	}
if(i==bp2.x&&j==bp2.y)
	{
		bp2.kill=1;
		bp2.x=0;
		bp2.y=0;
	}
if(i==bs1.x&&j==bs1.y)
	{
		bs1.kill=1;
		bs1.x=0;
		bs1.y=0;
	}
if(i==bs2.x&&j==bs2.y)
	{
		bs2.kill=1;
		bs2.x=0;
		bs2.y=0;
	}
if(i==bs3.x&&j==bs3.y)
	{
		bs3.kill=1;
		bs3.x=0;
		bs3.y=0;
	}
if(i==bs4.x&&j==bs4.y)
	{
		bs4.kill=1;
		bs4.x=0;
		bs4.y=0;
	}
if(i==bs5.x&&j==bs5.y)
	{
		bs5.kill=1;
		bs5.x=0;
		bs5.y=0;
	}
}

void Blackking::display()
{
	
        settextcolor(BLACK);                                       //各个棋子的显示函数
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
		fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "将");
	
}



void Blackadviser1::display()
{
   
        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
		fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "仕");
	
        
}



void Blackadviser2::display()
{
   
        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
         fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "仕");
   
}



void Blackelephant1::display()
{
	
	
        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
		fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "相"); 
	

}



void Blackelephant2::display()
{
	
        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2); 
        fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "相");
	

}



void Blackhorse1::display()
{
   
        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
		fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "马"); 
   
}


void Blackhorse2::display()
{       
	
        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
	    fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "马");
	

}



void Blackcar1::display()
{
	
        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
		fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "车");  
	

}


void Blackcar2::display()
{       
	
	    settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
	    fillcircle(x*60, y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "车");
	


}



void Blackpawn1::display()
{

	    settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
		fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "炮");

}


void Blackpawn2::display()
{ 
	
	    settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
        fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "炮");
	
}



void Blacksolider1::display()
{
	
        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
	    fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "卒");
	
}

void Blacksolider2::display()
{
	
        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
	    fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "卒");
	
}




void Blacksolider3::display()
{
  
        settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
	    fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "卒");
		

}




void Blacksolider4::display()
{       
	
	    settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
	    fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "卒");
	

}



void Blacksolider5::display()
{
   
	    settextcolor(BLACK);
		setlinecolor(BLACK);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
	    fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "卒");
   
}



void  Redking::display()
{
	
        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);
		fillcircle(x*60 , y*60, 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "帅");
	
}


void Redadviser1::display()
{
	
        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);   
		fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "士");
	
}



void Redadviser2::display()
{
	
	    settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);   
        fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "士");
	
}


void Redelephant1::display()
{
	
        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);   
		fillcircle(x*60 , y*60, 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "象");  
	

}


void Redelephant2::display()
{

	    settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2); 
        fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "象");
	

}



void Redhorse1::display()
{
	
        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);   
		fillcircle(x*60 , y*60, 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "马");
	
}


void Redhorse2::display()
{     
     
	    settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);  
        fillcircle(x*60 , y*60, 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "马");
	 

}



void Redcar1::display()
{
	
        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);   
		fillcircle(x*60 , y*60, 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "车");
	

}



void Redcar2::display()
{
	
	    settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);  
        fillcircle(x*60 , y*60, 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "车");
	
}



void Redpawn1::display()
{
	
        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);   
		fillcircle(x*60 , y*60, 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "炮");
	
}


void Redpawn2::display()
{ 
	
	    settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);   
        fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "炮");
	

}



void Redsolider1::display()
{

        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);  
        fillcircle(x*60, y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "兵");
	
}



void Redsolider2::display()
{

        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);  
        fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "兵");
	
}



void Redsolider3::display()
{
	
        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);  
        fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "兵");
	

}



void Redsolider4::display()
{
	
        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);  
        fillcircle(x*60 , y*60, 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "兵");
	
}



void Redsolider5::display()
{
	
        settextcolor(RED);
		setlinecolor(RED);
		setfillcolor(RGB(249,210,100));
        setlinestyle(PS_SOLID |PS_JOIN_ROUND, 2);  
        fillcircle(x*60 , y*60 , 25);
		settextstyle(36, 0, _T("宋体") );
		outtextxy(x*60-18, y*60-18, "兵");
	
}
