#include <iostream>
#include <string>
using namespace std;

class Human{
    public:
      virtual int num(int *n) = 0;
      virtual void choose(string pi_name,int pi_cost)=0;
      virtual int num_pizza(int *n) = 0;
      virtual void showmenu()=0;
      virtual int sbor_po_kusochkam(int *k)=0;
      virtual int num_add(int *n)=0;
     // virtual ~Human(); //����� �� ���� ������ ������


};

class Cashier: public Human{
    private:
    string name;
    int cost;

    public:

    int num(int *n)override{
        int l = *n;
        int otv;

    }

     void choose(string pi_name,int pi_cost)override{
          name = pi_name;
          cost = pi_cost;


      }
       void showmenu()override{
          cout<< "�������� �����:  " << name <<"  "<< "����: " << cost << endl;

      }

      int num_pizza(int *n)override{
            int l = *n;
            int otv;

            if (l==0){
                string p = "���� ������o����,  �� ��� ������� ����� �� ��������";
                cout << p<< endl ;
            }
            else if ( l == 1 ) {
               string p = "���������";
                int c1 = 100;
                otv =  c1;
                cout << "�� ��������  :"<< p<<"   �� ����:"<< otv<< endl ;

            }
            else if ( l ==2 ){
                string g = "���������";
                int c2 = 120;
                otv = c2;
                cout << "�� ��������:  "<< g<<"   �� ����:"<< otv<< endl ;
            }
            else if ( l==3 ){
                string m = "������";
                int c3 = 130;
                otv = c3;
                cout << "�� ��������:  "<< m<<"   �� ����:"<< otv << endl;
            }
            else if ( l==4 ){
                string f = "������";
                int c4 = 115;
               otv = c4;
               cout << "�� ��������:  "<< f<<"   �� ����:"<< otv << endl;
            }
            else{
               string ch = "������";
                int c5 = 90;
                otv = c5;
                cout << "�� ��������:  "<< ch<<"   �� ����:"<< otv<< endl ;
            }

        }

        int num_add(int *n)override{
            int l = *n;
            int otv;


            if ( l == 1 ) {
               string p = "������";
                int c1 = 10;
                otv =  c1;
                cout << "�� ��������  :"<< p<<"   �� ����:"<< otv<< endl ;

            }
            else if ( l ==2 ){
                string g = "���";
                int c2 = 5;
                otv = c2;
                cout << "�� ��������:  "<< g<<"   �� ����:"<< otv<< endl ;
            }
            else if ( l==3 ){
                string m = "�����";
                int c3 = 10;
                otv = c3;
                cout << "�� ��������:  "<< m<<"   �� ����:"<< otv << endl;
            }
            else if ( l==4 ){
                string f = "����";
                int c4 = 15;
               otv = c4;
               cout << "�� ��������:  "<< f<<"   �� ����:"<< otv << endl;
            }
            else{
               string ch = "�����";
                int c5 = 30;
                otv = c5;
                cout << "�� ��������:  "<< ch<<"   �� ����:"<< otv<< endl ;
            }

        }

        int sbor_po_kusochkam(int *k)override{
            int f = *k;
            int otv2;
            //int count;
           // count = 0;
            for ( int count = 0; count < 6; count++){

                cout<<"������ ����� ��������� ������� �����"<<endl;
                cin>>otv2;
               if (otv2==1){
                cout<<"�� ������� ������� ��������! ���� �������: 50"<<endl;
                //count++;
               }
               else if (otv2==2){
                cout<<"�� ������� ������� ��������� �����! ���� �������: 50"<<endl;
                //count++;
               }
               else if (otv2==3){
                cout<<"�� ������� ������� ������ �����! ���� �������: 50"<<endl;
                //count++;
               }
               else if (otv2==4){
                cout<<"�� ������� ������� ������ �����! ���� �������: 50"<<endl;
               // count++;
               }
               else if (otv2==5){
                cout<<"�� ������� ������� ������ �����! ���� �������: 50"<<endl;
                //count++;
               }

            }


        }


};

class Pizza_interface{
    public:
   virtual int size_of(int *s)=0;
  // virtual ~Pizza_interface();
  virtual void description()=0;



};

class Pizza_peperoni: public Pizza_interface{
    public:
    int size_of(int *s) override{
          int si;
          si = *s;
          if ( si == 1 ) {
               string sb = "�������";
                cout << "������:  "<< sb<< endl ;
            }
            else{
               string sm = "���������";
               cout << "������:  "<< sm<< endl ;
            }
      }

    void description() override{
            cout<<" ������: �����-����, �������� ���������, ����� ���� ��������� "<<endl;
      }



};

class Pizza_gavaii: public Pizza_interface{
    public:
    int size_of(int *s) override{
          int si;
          si = *s;
          if ( si == 1 ) {
               string sb = "�������";
                cout << "������:  "<< sb<< endl ;
            }
            else{
               string sm = "���������";
               cout << "������:  "<< sm<< endl ;
            }
      }
      void description() override{

            cout<<" ������: �����-����, ������, �������, ��� ��������� "<<endl;

      }


};

class Pizza_meet: public Pizza_interface{
    public:
    int size_of(int *s) override{
          int si;
          si = *s;
          if ( si == 1 ) {
               string sb = "�������";
                cout << "������:  "<< sb<< endl ;
            }
            else{
               string sm = "���������";
               cout << "������:  "<< sm<< endl ;
            }
      }
      void description() override{

            cout<<" ������: ������ ����, ��������, ����� ���� ���������, ��������� ������� "<<endl;
      }


};

class Pizza_fish: public Pizza_interface{
    public:
    int size_of(int *s) override{
          int si;
          si = *s;
          if ( si == 1 ) {
               string sb = "�������";
                cout << "������:  "<< sb<< endl ;
            }
            else{
               string sm = "���������";
               cout << "������:  "<< sm<< endl ;
            }
      }
      void description() override{
            cout<<" ������: ���� ����, ������� ����, �������, ������� ����, ��������, ��� ��������� "<<endl;
      }

};

class Pizza_cheese: public Pizza_interface{
    public:
    int size_of(int *s) override{
          int si;
          si = *s;
          if ( si == 1 ) {
               string sb = "�������";
                cout << "������:  "<< sb<< endl ;
            }
            else{
               string sm = "���������";
               cout << "������:  "<< sm<< endl ;
            }
      }
      void description() override{
            cout<<" ������: �����-����, ��� ����, ��������� ���, ��������, ��� ���������"<<endl;

      }


};


int main()
{
     setlocale(LC_ALL, "");

     cout<<"��������� �����"<<endl;
     cout<<"_______________________________________________________"<<endl;

    cout<<"�������� ����"<<endl;
    Pizza_interface *piz1 = new Pizza_peperoni;
    piz1->description();
    Pizza_interface *piz2 = new Pizza_gavaii;
    piz2->description();
    Pizza_interface *piz3 = new Pizza_meet;
    piz3->description();
    Pizza_interface *piz4 = new Pizza_fish;
    piz4->description();
    Pizza_interface *piz5 = new Pizza_cheese;
    piz5->description();

    cout<<"_______________________________________________________"<<endl;
    cout<<"����� ����"<<endl;
    Cashier pe0, pe1,pe2,pe3,pe4,pe5;
     pe0.choose("0) ���� �������", 50);
     pe1.choose("1) �������� ", 300);
     pe2.choose("2) ��������� ", 320);
     pe3.choose("3) ������ ", 330);
     pe4.choose("4) ������ ", 315);
     pe5.choose("5) ������ ", 290);
     pe1.showmenu();
     pe2.showmenu();
     pe3.showmenu();
     pe4.showmenu();
     pe5.showmenu();

     cout<<"__________________________________________________________"<< endl;

     cout<<" ������� 1, ���� ������ ����� �����. 2, ���� ������ ������� ����� �� ��������"<<endl;
     int kus;
     cin>> kus;
     if (kus == 1) {

     Cashier pe;
     cout << "������� ����� �������� �����:   "<<endl;
     int a;
     cin >> a;
     int num_a = pe.num_pizza(&a);


cout<<"__________________________________________________________"<< endl;
     cout<<"�������� �������:"<<endl;
    Cashier p1,p2,p3,p4,p5;
     p1.choose("1) ������ ", 10);
     p2.choose("2) ��� ", 5);
     p3.choose("3) ����� ", 10);
     p4.choose("4) ���� ",15);
     p5.choose("5) ����� ",10);

     p1.showmenu();
     p2.showmenu();
     p3.showmenu();
     p4.showmenu();
     p5.showmenu();

     Cashier pEADD;
     int C;
     cin >> C;
     int num_C = pEADD.num_add(&C);

      cout <<"__________________________________________________________________"<<endl;

}
    else{
        cout<<"������� 1, ����� ������� ���� ����� �� 6�� �������� "<<endl;

        Cashier kus;
        int D;
        cin >> D;
          int sbor_po_kusochkam_D=kus.sbor_po_kusochkam(&D);


    }


 cout <<"__________________________________________________________________"<<endl;

     cout<< "������ ��������� ������: 1 - �������, 2 - ��������� "<<endl;
     Pizza_interface *pee = new Pizza_cheese;
     int b;
     cin >>b;
     int size_of_b = pee->size_of(&b);
     cout <<"__________________________________________________________________"<<endl;



    //cout << "Hello world!" << endl;
    return 0;
}
