#include <SFML/Graphics.hpp>//����������� ���������� SFML
#include <iostream>//���������� �����, ������
#include <math.h>//���������� ��� �������������� ����������a
#include "random.h"//���������� ��� �������
#include "point.h"//���������� ������ �����
#include "globals.h"//���� � ����������� �����������
#include "kohs_snow.h"//����� �������� ����
#include "funkoh.h"//������� �������� ����
#include "tree.h"//���������� ������ ������
#include "btn.h"//���������� ������ ������
#include "slider.h"//���������� ������ �������
#include "fern.h"//���������� ������ ����������
#include "box.h"//���������� ������ �������
#include "complex.h"//���������� ������ ����������� �����
#include "julia.h"//���������� �������� �����

using namespace sf;
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    // �����������
    ContextSettings settings;
    settings.antialiasingLevel = 8;

    RenderWindow window(VideoMode(X, Y), "SFML Works!", Style::Fullscreen);//�������� ����, ������� �������� ����

    window.setFramerateLimit(60);//����������� ���

    int dx = 0;//����������, ���������� �� ��������� ���������� �������� �������� ����
    int dx1 = 0;//����������, ���������� �� ��������� ���������� �������� ������

    View view(FloatRect(0,0,X, Y));//������

    //����� � ����� ��������
    Font font;
    font.loadFromFile("C:\\users\\user\\Desktop\\times-new-roman.ttf");
    Text textit("", font, 20);
    textit.setStyle(Text::Bold);//������ �����

    //����� �������
    //���������
    Text textTab1("", font, 20);
    textTab1.setStyle(Text::Bold);
    textTab1.setString("Key assigment");
    textTab1.setPosition(Vector2f(80.f, 0.f));

    //����� �����
    Text L1("", font, 16);
    L1.setString("On/Off AntiKoch");
    L1.setPosition(Vector2f(0.f, 35.f));

    Text L2("", font, 16);
    L2.setString("On/Off Julia");
    L2.setPosition(Vector2f(0.f, 70.f));
    
    Text L3("", font, 16);
    L3.setString("On/Off Koh snow");
    L3.setPosition(Vector2f(0.f, 100.f));

    Text L4("", font, 16);
    L4.setString("On/Off Tree");
    L4.setPosition(Vector2f(0.f, 130.f));

    Text L5("", font, 16);
    L5.setString("On/Off fern");
    L5.setPosition(Vector2f(0.f, 160.f));

  
    //������ �����
    Button btn1("Click me", { 149,29 }, 16, Color::Green, Color::Black);
    btn1.setFont(font);
    btn1.setPosition(Vector2f(150.f, 90.f));

    Button btn2("Cick me", { 149,29 }, 16, Color::Green, Color::Black);
    btn2.setFont(font);
    btn2.setPosition(Vector2f(150.f, 120.f));

    Button btn3("Cick me", { 149,29 }, 16, Color::Green, Color::Black);
    btn3.setFont(font);
    btn3.setPosition(Vector2f(150.f, 150.f));
    
    Button btn4("Cick me", { 149,29 }, 16, Color::Green, Color::Black);
    btn4.setFont(font);
    btn4.setPosition(Vector2f(150.f, 60.f));

    Button btn5("Cick me", { 149,29 }, 16, Color::Green, Color::Black);
    btn5.setFont(font);
    btn5.setPosition(Vector2f(150.f, 30.f));

    //����� 
    Text C1("", font, 16);
    C1.setString("Iterations of Koh snow");
    C1.setPosition(Vector2f(75.f, 180.f));

    Text C2("", font, 16);
    C2.setString("Scale of Koh snow");
    C2.setPosition(Vector2f(87.f, 280.f));

    Text C3("", font, 16);
    C3.setString("Iterations of tree");
    C3.setPosition(Vector2f(100.f, 370.f));

    Text C4("", font, 16);
    C4.setString("Scale of tree");
    C4.setPosition(Vector2f(110.f, 470.f));

    int z = 1;//���������� ���������������

    //���������� ��������
    int u = Random(20,30);
    int w = Random(2, 3);
    fern F(u);
    F.create_fern();

    //����������1 ��������
    int u1 = Random(20, 31);
    int w1 = Random(1, 3);
    fern F1(u1);
    F1.create_fern();

    //���������� �����������
    bool flagpap = true;
    bool flagkoh1 = true;
    bool flagtree = true;
    bool flagkoh2 = true;
    bool flagjul = true;
    bool flaganti = true;

    //��������� ���������� ��������
    int Rnd1,Rnd3;
    Rnd1 = Random(1, 2);
    Rnd3 = Random(1, 3);
    int dersc2;
    dersc2 = Random(1,2);

    //��������� ���������� ��������
    int  sn2,sn3,asn1;
    sn2 = Random(1, 5);
    sn3 = Random(1, 3);
    asn1 = Random(0, 3);
    int der2, der3;
    der2 = Random(3, 7);
    der3 = Random(2, 5);

    //��������� ���������� �����
    int ugl, ugl1, ugl2;
    ugl = Random(3, 5);
    ugl1 = Random(4, 6);
    ugl2 = Random(3, 4);
   

    //������� 
    Box box1(150*Rnd1,165*Rnd1, 500, 280);//�������� ���� 1
    Box box11(150, 165, 1050, 250);//�������� ���� 2
    Box box12(150*Rnd3, 165*Rnd3, 1700, 230);//�������� ���� 3
    Box box2(150, 400,1100 ,880 );//������1
    Box box21(150*dersc2, 400*dersc2, 400, 880);//������2
    Box box22(150 * dersc2, 400 * dersc2, 1700, 880);//������ 3
    Box box31(150 * Rnd1, 100 * Rnd1, 780, 280);//������������ ���� 1
    Box box32(150 * Rnd1, 100 * Rnd1, 1280, 280);//������������ ���� 2

    //���������� �������� �����
    julia Fj;
    int size;
    size=Fj.create_julia();


    //���������� �������� �����1
    julia Fj1;
    int size1;
    size1 = Fj1.create_julia();


    //���������� �������� �����2
    julia Fj2;
    int size2;
    size2 = Fj2.create_julia();


    //��������
    Slider slider1(20, 230, 10, 260);
    slider1.create(1,3);

    Slider slider2(20, 330, 10, 260);
    slider2.create(1, 2);

    Slider slider3(20, 420, 10, 260);
    slider3.create(1, 5);

    Slider slider4(20, 520, 10, 260);
    slider4.create(1, 2);

    //�����������
    RectangleShape raz;
    bool razrab = false;
    raz.setSize(Vector2f(300.f, 1080.f));
    raz.setPosition(Vector2f(0.f, 0.f));
    raz.setFillColor(Color::Black);

    // ����, ���� ������� ����
    while (window.isOpen())
    {
                    //�������� ����//
        // ���������� �������� ����
        int s1 = slider1.getSliderValue();
        int s2 = slider1.getSliderValue()+sn2;
        int s3 = slider1.getSliderValue()+sn3;

        int S1;//(����� ������� ����� ������ ��������)=S+1
        Vertex* line;//������ �����
        S1 = pow(4, s1);
        point* a[3];
        kohs_snow FR;
        FR.snow(a, s1);
        line = new Vertex[3 * S1 + 1];

        int S2;
        Vertex* line2;
        S2 = pow(4, s2 );
        point* a1[3];
        kohs_snow FR1;
        FR1.snow(a1, s2 );
        line2 = new Vertex[3 * S2 + 1];

        int S3;
        Vertex* line3;
        S3 = pow(4, s3);
        point* a2[3];
        kohs_snow FR2;
        FR2.snow(a2, s3 );
        line3 = new Vertex[3 * S3 + 1];

                    //�����������//
        // ���������� ������������ ���� 1
        int O1;//(����� ������� ����� ������ ��������)=O+1
        int o = slider1.getSliderValue() + asn1;
        Vertex* line12;//������ �����
        O1 = pow(4, o);
        point* b[3];
        kohs_snow GR(-0.7,0.0,0.7,0.0,0.0,1.0);
        GR.snow(b, o);
        line12 = new Vertex[3 * O1 + 1];

        //������������ 2
        int O2;
        int o2 = slider1.getSliderValue();
        Vertex * line22;//������ �����
        O2 = pow(4, o2);
        point* bb[3];
        kohs_snow GRR(-0.7, 0.0, 0.7, 0.0, 0.0, 1.0);
        GRR.snow(bb, o2);
        line22 = new Vertex[3 * O2 + 1];


                    //������//
        //������ 1
        point P;//������� �����
        double alpha, beta;// ����
        int n, k;//n- ��������, k-���������� ����� ������
        alpha = pi / 2;//���� �����
        beta = pi / ugl;// ���� �����
        n = der2+slider3.getSliderValue();//���������� ��������
        k = int(pow(2, n));// ����� ����� (����� �������)

        tree A(P,n,alpha,beta);
        A.create_derevo(slider4.getSliderValue());

        Vertex **vetka;//������� ����� ������
        vetka = new Vertex*[k];
        for (int i = 0; i < k; i++)
            vetka[i] = new Vertex[n+2];

        //������� ����� ������
        for (int j = 0; j < k; j++) 
        {
            vetka[j][0] = Vector2f(box2.getX(), 1080.0);
            vetka[j][1] = Vector2f(box2.getX(), 780.0);
            vetka[j][0].color = Color::White;
            vetka[j][1].color = Color::White;
            for (int i = 2; i <= n+1; i++)
            {
                vetka[j][i].position = Vector2f(-A.ElemD(j,i - 2).elemX1(z) + box2.getX(), -A.ElemD(j, i - 2).elemY1(z) + 780);
                vetka[j][i].color=Color::White;
            }
        }

        //������ 2
        double beta1;
        beta1 = pi / ugl1;
        int n1, k1;//n- ��������, k-���������� ����� ������
        n1 = 1+slider3.getSliderValue();//���������� ��������
        k1 = int(pow(2, n1));// ����� ����� (����� �������)

        tree A1(P, n1, alpha, beta1);
        A1.create_derevo(slider4.getSliderValue()*dersc2/1.4);

        Vertex** vetka1;//������� ����� ������
        vetka1 = new Vertex * [k1];
        for (int i = 0; i < k1; i++)
            vetka1[i] = new Vertex[n1 + 2];

        //������� ����� ������
        for (int j = 0; j < k1; j++)
        {
            vetka1[j][0] = Vector2f(box21.getX(), 1080.0);
            vetka1[j][1] = Vector2f(box21.getX(), 880.0);
            vetka1[j][0].color = Color::White;
            vetka1[j][1].color = Color::White;
            for (int i = 2; i <= n1 + 1; i++)
            {
                vetka1[j][i].position = Vector2f(-A1.ElemD(j, i - 2).elemX1(z) + box21.getX(), -A1.ElemD(j, i - 2).elemY1(z) + 780);
                vetka1[j][i].color = Color::White;
            }
        }

        //������ 3
        double beta2;
        beta2 = pi / ugl2;
        int n2, k2;//n- ��������, k-���������� ����� ������
        n2 =der3 +slider3.getSliderValue();//���������� ��������
        k2 = int(pow(2, n2));// ����� ����� (����� �������)

        tree A2(P, n2, alpha, beta2);
        A2.create_derevo(slider4.getSliderValue() * dersc2 / 1.1);

        Vertex** vetka2;//������� ����� ������
        vetka2 = new Vertex * [k2];
        for (int i = 0; i < k2; i++)
            vetka2[i] = new Vertex[n2 + 2];

        //������� ����� ������
        for (int j = 0; j < k2; j++)
        {
            vetka2[j][0] = Vector2f(box22.getX(), 1080.0);
            vetka2[j][1] = Vector2f(box22.getX(), 800.0);
            vetka2[j][0].color = Color::White;
            vetka2[j][1].color = Color::White;
            for (int i = 2; i <= n2 + 1; i++)
            {
                vetka2[j][i].position = Vector2f(-A2.ElemD(j, i - 2).elemX1(z) + box22.getX(), -A2.ElemD(j, i - 2).elemY1(z) + 780);
                vetka2[j][i].color = Color::White;
            }
        }
          
        //�������
        Vertex table[] =
        {
            Vertex(Vector2f(150.f,30.f)),
            Vertex(Vector2f(150.f,150.f)),

            Vertex(Vector2f(300.f,0.f)),
            Vertex(Vector2f(300.f,1080.f)),

            Vertex(Vector2f(0.f,30.f)),
            Vertex(Vector2f(300.f,30.f)),

            Vertex(Vector2f(0.f,60.f)),
            Vertex(Vector2f(300.f, 60.f)),
            
            Vertex(Vector2f(0.f,90.f)),
            Vertex(Vector2f(300.f,90.f)),

            Vertex(Vector2f(0.f,120.f)),
            Vertex(Vector2f(300.f,120.f)),

            Vertex(Vector2f(0.f,150.f)),
            Vertex(Vector2f(300.f,150.f)),

            Vertex(Vector2f(0.f,180.f)),
            Vertex(Vector2f(300.f,180.f)),

            Vertex(Vector2f(150.f,150.f)),
            Vertex(Vector2f(150.f,180.f)),

            Vertex(Vector2f(0.f,270.f)),
            Vertex(Vector2f(300.f,270.f)),

            Vertex(Vector2f(0.f,360.f)),
            Vertex(Vector2f(300.f,360.f)),

            Vertex(Vector2f(0.f,460.f)),
            Vertex(Vector2f(300.f,460.f))
        };
        
        //�������
        Event event;

        while (window.pollEvent(event))//����, ������� �������� �� �������
        {

            if (event.type == Event::Closed)//������� �������� ����
                window.close();

            if (event.type == Event::KeyPressed)
            {
  
                //������������  ������
                if (event.key.code == Keyboard::Up) { view.move(0, -15); } // ������������ ������ �����
                if (event.key.code == Keyboard::Left) { view.move(-15, 0);}// ������������ ������ �����
                if (event.key.code == Keyboard::Right) { view.move(15, 0);}// ������������ ������ ������
                if (event.key.code == Keyboard::Down) { view.move(0, 15); }// ������������ ������ ����

                //���������������
                if (event.key.code == Keyboard::P) { z++; }//���������� ��������
                if (event.key.code == Keyboard::L) { z--; }//���������� ��������

                //����� ������������
                if (event.key.code == Keyboard::W) { razrab = true; }//���
                if (event.key.code == Keyboard::Q) { razrab = false; }//����
            }

            //������� ������
            if (event.type == Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == Mouse::Left)
                {
                    //������ 1
                    if (btn1.isMouseOver(window) && btn1.getColor() == Color::Green)
                    {
                        btn1.setButtonColor(Color::Red);
                        btn1.setStr("Off");
                        flagkoh1 = false;
                    }
                    else if (btn1.isMouseOver(window) && btn1.getColor() == Color::Red)
                    {
                        btn1.setButtonColor(Color::Green);
                        btn1.setStr("On");
                        flagkoh1 = true;
                    }

                    //������ 2
                    if (btn2.isMouseOver(window) && btn2.getColor() == Color::Green)
                    {
                        btn2.setButtonColor(Color::Red);
                        btn2.setStr("Off");
                        flagtree = false;
                    }
                    else if (btn2.isMouseOver(window) && btn2.getColor() == Color::Red)
                    {
                        btn2.setButtonColor(Color::Green);
                        btn2.setStr("On");
                        flagtree = true;
                    }

                    //������ 3
                    if (btn3.isMouseOver(window) && btn3.getColor() == Color::Green)
                    {
                        btn3.setButtonColor(Color::Red);
                        btn3.setStr("Off");
                        flagpap = false;
                    }
                    else if (btn3.isMouseOver(window) && btn3.getColor() == Color::Red)
                    {
                        btn3.setButtonColor(Color::Green);
                        btn3.setStr("On");
                        flagpap = true;
                    }

                    //������ 4
                    if (btn4.isMouseOver(window) && btn4.getColor() == Color::Green)
                    {
                        btn4.setButtonColor(Color::Red);
                        btn4.setStr("Off");
                        flagjul = false;
                    }
                    else if (btn4.isMouseOver(window) && btn4.getColor() == Color::Red)
                    {
                        btn4.setButtonColor(Color::Green);
                        btn4.setStr("On");
                        flagjul = true;
                    }

                    //������ 5
                    if (btn5.isMouseOver(window) && btn5.getColor() == Color::Green)
                    {
                        btn5.setButtonColor(Color::Red);
                        btn5.setStr("Off");
                        flaganti = false;
                    }
                    else if (btn5.isMouseOver(window) && btn5.getColor() == Color::Red)
                    {
                        btn5.setButtonColor(Color::Green);
                        btn5.setStr("On");
                        flaganti = true;
                    }
                }
            }
        }
        window.setView(view);//���������� ������

        window.clear(Color::Black);//���� ����

        //�������
        box1.scale(slider2.getSliderValue(),slider2.getSliderValue());
        box11.scale(slider2.getSliderValue(), slider2.getSliderValue());
        box12.scale(slider2.getSliderValue(), slider2.getSliderValue());
        box2.scale(2*slider4.getSliderValue(),1.2*slider4.getSliderValue());
        box21.scale(dersc2*slider4.getSliderValue()/1.3,  slider4.getSliderValue());
        box22.scale(dersc2* slider4.getSliderValue() / 1.3, slider4.getSliderValue());
        box31.scale(slider2.getSliderValue(), slider2.getSliderValue());
        box32.scale(slider2.getSliderValue(), slider2.getSliderValue());

        //���������(��������) �������� ����
        if (flagkoh1 == true)
        {
            for (int i = 0; i < 3; i++)//���� ������� ��������� ������ ��������
                for (int j = 0; j <= S1; j++)
                {
                    line[i * S1 + j].position = Vector2f(a[i][j].elemX1(slider2.getSliderValue()*Rnd1) + box1.getX(),
                        -a[i][j].elemY1(slider2.getSliderValue()*Rnd1) + box1.getY() + 30);
                }
            for (int i = 0; i < 3; i++)//���� ������� ��������� ������ ��������
                for (int j = 0; j <= S2; j++)
                {
                    line2[i * S2 + j].position = Vector2f(a1[i][j].elemX1(slider2.getSliderValue()) + box11.getX() + 20,
                        -a1[i][j].elemY1(slider2.getSliderValue()) + box11.getY() + 30);
                }
            for (int i = 0; i < 3; i++)//���� ������� ��������� ������ ��������
                for (int j = 0; j <= S3; j++)
                {
                    line3[i * S3 + j].position = Vector2f(a2[i][j].elemX1(slider2.getSliderValue() * Rnd3) + box12.getX() + 20,
                        -a2[i][j].elemY1(slider2.getSliderValue() * Rnd3) + box12.getY() + 30);
                }
        }

        //���������(��������) ������������ ����;
        if (flaganti==true)
        {
            for (int i = 0; i < 3; i++)//���� ������� ��������� ������
                for (int j = 0; j <= O1; j++)
                    line12[i * O1 + j].position = Vector2f(b[i][j].elemX1(slider2.getSliderValue()) + box31.getX(),
                        -b[i][j].elemY1(slider2.getSliderValue()) + box31.getY() + 30);
            for (int i = 0; i < 3; i++)//���� ������� ��������� ������
                for (int j = 0; j <= O2; j++)
                    line22[i * O2 + j].position = Vector2f(bb[i][j].elemX1(slider2.getSliderValue()) + box32.getX(),
                        -bb[i][j].elemY1(slider2.getSliderValue()) + box32.getY() + 30);
        }
        
        //���������� ���������
        if(flagpap==true)
        {
            for (int i = 0; i < u*100; i++) {
                CircleShape circle;
                circle.setRadius(3.f);
                circle.setPosition(Vector2f(pow(-1,w)*F.Fag(i).elemX() * 15*w + 700, -F.Fag(i).elemY() * 15*w +1100));
                window.draw(circle);
            }
        }

        //����������1 ���������
        if (flagpap == true)
        {
            for (int i = 0; i < u1 * 100; i++) {
                CircleShape circle;
                circle.setRadius(3.f);
                circle.setPosition(Vector2f(pow(-1, w1)* F1.Fag(i).elemX() * 15 * w1 + 1400, -F1.Fag(i).elemY() * 15 * w1 + 1100));
                window.draw(circle);
            }
        }

        //���������� �������� �����
        if (flagjul == true)
        {
            for (int tr = 0; tr < size; tr++) {
                CircleShape circle;
                circle.setRadius(10);
                circle.setPosition(Vector2f(Fj.Emt(tr).elemX() + 800, Fj.Emt(tr).elemY() + 300));
                window.draw(circle);
            }
            for (int tr = 0; tr < size1; tr++) {
                CircleShape circle;
                circle.setRadius(8);
                circle.setPosition(Vector2f(Fj1.Emt(tr).elemX() + 350, Fj1.Emt(tr).elemY() + 350));
                window.draw(circle);
            }
            for (int tr = 0; tr < size2; tr++) {
                CircleShape circle;
                circle.setRadius(8);
                circle.setPosition(Vector2f(Fj2.Emt(tr).elemX() + 1500, Fj2.Emt(tr).elemY() + 300));
                window.draw(circle);
            }
        }

        //���������� �����(��������) �������� ����
        window.draw(line, 3 * S1 + 1, LinesStrip);
        window.draw(line2, 3 * S2 + 1, LineStrip);
        window.draw(line3, 3 * S3 + 1, LinesStrip);

        //���������� ����� ������������ ����
        window.draw(line12, 3 * O1 + 1, LineStrip);
        window.draw(line22, 3 * O2 + 1, LineStrip);

        //��������� ������
        if (flagtree == true)
        {
            for (int i = 0; i < k; i++)
                window.draw(vetka[i], n + 2, LinesStrip);
            for (int i = 0; i < k1; i++)
                window.draw(vetka1[i], n1 + 2, LinesStrip);
            for (int i = 0; i < k2; i++)
                window.draw(vetka2[i], n2 + 2, LinesStrip);
        }

        if (razrab == true) {
            //���������� �������
            window.draw(table, 24, Lines);

            window.draw(textTab1);//���������

            //����� ����� ���������
            window.draw(L1);
            window.draw(L2);
            window.draw(L3);
            window.draw(L4);
            window.draw(L5);

            //������ ����� ���������
            btn1.drawc(window);
            btn2.drawc(window);
            btn3.drawc(window);
            btn4.drawc(window);
            btn5.drawc(window);

            //����� ���������
            window.draw(C1);
            window.draw(C2);
            window.draw(C3);
            window.draw(C4);



            //��������� ���������
            slider1.drawA(window);
            slider2.drawA(window);
            slider3.drawA(window);
            slider4.drawA(window);

            //�������
            box1.drawB(window);
            box11.drawB(window);
            box12.drawB(window);
            box2.drawB1(window);
            box21.drawB1(window);
            box22.drawB1(window);
            box31.drawB(window);
            box32.drawB(window);
        }
       
        window.display();//���������� ������
    }

    return 0;
}



