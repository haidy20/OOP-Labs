#include <iostream>
#include <graphics.h>
using namespace std;

class Point
{
    int x;
    int y;

public:

    Point()
    {
        x=y=0;
        cout<<"\npoint default constructor";
    }
    Point(int _xy)
    {
        x=y=_xy;
        cout<<"\npoint one parameterized constructor";
    }
    Point(int _x,int _y)
    {
        x= _x;
        y= _y;
        cout<<"\npoint two parameterized constructor";

    }
    void setX(int _x)
    {
        x= _x;
    }
    void setY(int _y)
    {
        y= _y;
    }
    void setPoint(int _x,int _y)
    {
        x= _x;
        y= _y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }

    void print()
    {
        cout<<endl<<"("<<x<<","<<y<<")";

    }
    ~Point()
    {
        cout<<"\n point destructor";
    }

};

class shape {

public:
virtual void draw()
{

}
};

/* void setul(Point p){ //receive object type p x,y

   ul=p;} */


class Rect :public shape //task1
{
    Point ul;
    Point lr;

public:

    Rect() : ul(0,0), lr(0,0)
    {
        cout<<"\n Rectangle default Ctor";
    }

    Rect(int x1,int y1,int x2, int y2)
    {
        ul.setPoint(x1,y1);
        lr.setPoint(x2,y2);
        cout<<"\n Rectangle four parameters ctor";
    }

    void setUL(int x, int y)
    {
        ul.setPoint(x,y);
    }
    void setLR(int x, int y)
    {
        lr.setPoint(x,y);
    }
    /*
    void setUL(Point p)
    {
        ul=p;
    }
    void setLR(Point p)
    {
        lr=p;
    }
    */
    Point getUl(){
    return ul;
    }
    Point getLr(){
    return ul;
    }

    void draw()
    {
        rectangle(ul.getX(),ul.getY(),lr.getX(),lr.getY());
    }

    void print()
    {
        ul.print();
        lr.print();
    }

    ~Rect()
    {
        cout<<"\n Rect destructor";

    }

};


/*class Triangle //task2
{
    Point p1;
    Point p2;
    Point p3;
public:
    void setP1(int _x,int _y)
    {
        p1.setX(_x);
        p1.setY(_y);

    }
    void setP2(int _x,int _y)
    {
        p2.setX(_x);
        p2.setY(_y);

    }
    void setP3(int _x,int _y)
    {
        p3.setX(_x);
        p3.setY(_y);

    }

    void setTriangle(Point _p1, Point _p2,Point _p3)
    {
        p1 = _p1 ;
        p2 = _p2 ;
        p3 = _p3 ;
    }

    //getters
    Point getp1()
    {
        return p1 ;
    }
    Point getp2()
    {
        return p2 ;
    }
    Point getp3()
    {
        return p3 ;
    }

    //print
    void printTriangle()
    {
        p1.print();
        p2.print();
        p3.print();
    }
    //constructors
    Triangle():p1(0,0), p2(0, 0), p3(0,0) {}
    Triangle(int x1,int y1, int x2, int y2, int x3, int y3 ): p1(x1,y1), p2(x2,y2), p3(x3,y3) {}
    ~Triangle()
    {
        cout << "triangle destructor" ;
    }

};
*/
class Circle: public shape // task3
{
    Point p;
    int red ;
public :
    //setters
    void setRed(int _x )
    {
        red = _x;
    }
    void setP(int _x,int _y )
    {
        p.setPoint(_x,_y);
    }
    //getters
    int getRed()
    {
        return red;
    }
    Point getP()
    {
        return p;
    }
    void draw()
    {
        circle(p.getX(),p.getX(),20);
    }
    //print
    void printCircle()
    {
        p.print();
        cout << red <<endl;
    }
    //constructor
    Circle ():p(0,0), red(0)
    {
        cout << "\ncircle parameterless constructor" <<endl;
    }
    Circle(int x, int y, int a ): p(x, y), red(a)
    {
        cout << "\ncircle parameter constructor" <<endl;
    }
    ~Circle()
    {
        cout << "\ncircle destructor " <<endl;
    }

};


class Pic{
Rect* rptr;
Circle* cptr;
 int nr;
 int nc;
  public:
      Pic()
      {
          rptr=NULL;
          nr=0;
           cptr=NULL;
          nc=0;}

          Pic(Rect* _rptr,Circle* _cptr,int _nr,int _nc)
          {
              rptr=_rptr;
              nr=_nr;
              cptr=_cptr;
              nc=_nc;
          }
          void setCircles(Circle*_cptr,int _nc)
          {
              cptr= _cptr;
              nc=_nc;

          }


          void paint()
          {
              for(int i=0;i<nr;i++)
                rptr[i].draw();

                 for(int i=0;i<nc;i++)
                cptr[i].draw();
          }
};
void myfun(shape *c){

c->draw();

}
int main()
{
    int gdriver=DETECT,gmode,errorcode;
    initgraph(&gdriver,&gmode,"");
    Rect r1(10,20,50,60);
    Circle c1(100,100,50);
    myfun(&r1);
    myfun(&c1);



    getch();
    closegraph();




    return 0;
}

/*int main()
{
    int gdriver=DETECT,gmode,errorcode;
    initgraph(&gdriver,&gmode,"");

    Rect arr1[3]={ Rect(50,50,100,100), Rect(100,100,200,200), Rect(200,200,300,300)};
    Circle arr2[3]={ Circle(50,50,30),Circle(200,200,30),Circle(300,300,30)};
    Pic p1(arr1,arr2,3,3);
    p1.paint();

    //Rect r1(10,20,30,40);
    /*r1.print();

    Triangle  t1(1,2,4,5,7,8);
    t1.printTriangle();

    Circle c1(10 , 20 , 40);
    c1.printCircle();
    //r1.setUL(10,20);
    //r1.setUL(p2.getX(),p2.getY());
    //r1.setUL(p2);
    //r1.setUL(10,20);
    //r1.setLR(5,6); */
    //getch();
    //closegraph();
   // return 0;
//}


