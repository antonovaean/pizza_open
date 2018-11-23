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
     // virtual ~Human(); //чтобы не было утечки памяти


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
          cout<< "название пиццы:  " << name <<"  "<< "цена: " << cost << endl;

      }

      int num_pizza(int *n)override{
            int l = *n;
            int otv;

            if (l==0){
                string p = "Одну секундoчкуу,  мы вам соберем пиццу по кусочкам";
                cout << p<< endl ;
            }
            else if ( l == 1 ) {
               string p = "Пепперони";
                int c1 = 100;
                otv =  c1;
                cout << "ее название  :"<< p<<"   ее цена:"<< otv<< endl ;

            }
            else if ( l ==2 ){
                string g = "Гавайская";
                int c2 = 120;
                otv = c2;
                cout << "ее название:  "<< g<<"   ее цена:"<< otv<< endl ;
            }
            else if ( l==3 ){
                string m = "Мясная";
                int c3 = 130;
                otv = c3;
                cout << "ее название:  "<< m<<"   ее цена:"<< otv << endl;
            }
            else if ( l==4 ){
                string f = "Рыбная";
                int c4 = 115;
               otv = c4;
               cout << "ее название:  "<< f<<"   ее цена:"<< otv << endl;
            }
            else{
               string ch = "Сырная";
                int c5 = 90;
                otv = c5;
                cout << "ее название:  "<< ch<<"   ее цена:"<< otv<< endl ;
            }

        }

        int num_add(int *n)override{
            int l = *n;
            int otv;


            if ( l == 1 ) {
               string p = "огурец";
                int c1 = 10;
                otv =  c1;
                cout << "ее название  :"<< p<<"   ее цена:"<< otv<< endl ;

            }
            else if ( l ==2 ){
                string g = "сыр";
                int c2 = 5;
                otv = c2;
                cout << "ее название:  "<< g<<"   ее цена:"<< otv<< endl ;
            }
            else if ( l==3 ){
                string m = "томат";
                int c3 = 10;
                otv = c3;
                cout << "ее название:  "<< m<<"   ее цена:"<< otv << endl;
            }
            else if ( l==4 ){
                string f = "мясо";
                int c4 = 15;
               otv = c4;
               cout << "ее название:  "<< f<<"   ее цена:"<< otv << endl;
            }
            else{
               string ch = "орехи";
                int c5 = 30;
                otv = c5;
                cout << "ее название:  "<< ch<<"   ее цена:"<< otv<< endl ;
            }

        }

        int sbor_po_kusochkam(int *k)override{
            int f = *k;
            int otv2;
            //int count;
           // count = 0;
            for ( int count = 0; count < 6; count++){

                cout<<"Ведите номер желаемого кусочка пиццы"<<endl;
                cin>>otv2;
               if (otv2==1){
                cout<<"Вы выбрали кусочек Пеперони! цена кусочка: 50"<<endl;
                //count++;
               }
               else if (otv2==2){
                cout<<"Вы выбрали кусочек Гавайской пиццы! цена кусочка: 50"<<endl;
                //count++;
               }
               else if (otv2==3){
                cout<<"Вы выбрали кусочек Мясной пиццы! цена кусочка: 50"<<endl;
                //count++;
               }
               else if (otv2==4){
                cout<<"Вы выбрали кусочек Рыбной пиццы! цена кусочка: 50"<<endl;
               // count++;
               }
               else if (otv2==5){
                cout<<"Вы выбрали кусочек Сырной пиццы! цена кусочка: 50"<<endl;
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
               string sb = "Большая";
                cout << "размер:  "<< sb<< endl ;
            }
            else{
               string sm = "Маленькая";
               cout << "размер:  "<< sm<< endl ;
            }
      }

    void description() override{
            cout<<" Состав: Пицца-соус, колбаски Пепперони, много сыра Моцарелла "<<endl;
      }



};

class Pizza_gavaii: public Pizza_interface{
    public:
    int size_of(int *s) override{
          int si;
          si = *s;
          if ( si == 1 ) {
               string sb = "Большая";
                cout << "размер:  "<< sb<< endl ;
            }
            else{
               string sm = "Маленькая";
               cout << "размер:  "<< sm<< endl ;
            }
      }
      void description() override{

            cout<<" Состав: Пицца-соус, ананас, ветчина, сыр Моцарелла "<<endl;

      }


};

class Pizza_meet: public Pizza_interface{
    public:
    int size_of(int *s) override{
          int si;
          si = *s;
          if ( si == 1 ) {
               string sb = "Большая";
                cout << "размер:  "<< sb<< endl ;
            }
            else{
               string sm = "Маленькая";
               cout << "размер:  "<< sm<< endl ;
            }
      }
      void description() override{

            cout<<" Состав: Сырный соус, Цыпленок, много сыра Моцарелла, кунжутные бортики "<<endl;
      }


};

class Pizza_fish: public Pizza_interface{
    public:
    int size_of(int *s) override{
          int si;
          si = *s;
          if ( si == 1 ) {
               string sb = "Большая";
                cout << "размер:  "<< sb<< endl ;
            }
            else{
               string sm = "Маленькая";
               cout << "размер:  "<< sm<< endl ;
            }
      }
      void description() override{
            cout<<" Состав: Соус Ранч, красная рыба, маслины, снежный краб, креветка, Сыр Моцарелла "<<endl;
      }

};

class Pizza_cheese: public Pizza_interface{
    public:
    int size_of(int *s) override{
          int si;
          si = *s;
          if ( si == 1 ) {
               string sb = "Большая";
                cout << "размер:  "<< sb<< endl ;
            }
            else{
               string sm = "Маленькая";
               cout << "размер:  "<< sm<< endl ;
            }
      }
      void description() override{
            cout<<" Состав: Пицца-соус, сыр Фета, Сливочный сыр, Пармезан, сыр Моцарелла"<<endl;

      }


};


int main()
{
     setlocale(LC_ALL, "");

     cout<<"СВОБОДНАЯ КАССА"<<endl;
     cout<<"_______________________________________________________"<<endl;

    cout<<"ОПИСАНИЕ ПИЦЦ"<<endl;
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
    cout<<"ПИЦЦЫ ЦЕНЫ"<<endl;
    Cashier pe0, pe1,pe2,pe3,pe4,pe5;
     pe0.choose("0) Один кусочек", 50);
     pe1.choose("1) Пеперони ", 300);
     pe2.choose("2) Гавайская ", 320);
     pe3.choose("3) Мясная ", 330);
     pe4.choose("4) Рыбная ", 315);
     pe5.choose("5) Сырная ", 290);
     pe1.showmenu();
     pe2.showmenu();
     pe3.showmenu();
     pe4.showmenu();
     pe5.showmenu();

     cout<<"__________________________________________________________"<< endl;

     cout<<" НАЖМИТЕ 1, ЕСЛИ ХОТИТЕ ЦЕЛУЮ ПИЦЦУ. 2, ЕСЛИ ХОТИТЕ СОБРАТЬ ПИЦЦУ ПО КУСОЧКАМ"<<endl;
     int kus;
     cin>> kus;
     if (kus == 1) {

     Cashier pe;
     cout << "ВВЕДИТЕ НОМЕР ЖЕЛАЕМОЙ ПИЦЦЫ:   "<<endl;
     int a;
     cin >> a;
     int num_a = pe.num_pizza(&a);


cout<<"__________________________________________________________"<< endl;
     cout<<"ВЫБЕРИТЕ ДОБАВКУ:"<<endl;
    Cashier p1,p2,p3,p4,p5;
     p1.choose("1) огурец ", 10);
     p2.choose("2) сыр ", 5);
     p3.choose("3) томат ", 10);
     p4.choose("4) мясо ",15);
     p5.choose("5) орехи ",10);

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
        cout<<"ВВЕДИТЕ 1, ЧТОБЫ СОБРАТЬ СВОЮ ПИЦЦУ ИЗ 6ти КУСОЧКОВ "<<endl;

        Cashier kus;
        int D;
        cin >> D;
          int sbor_po_kusochkam_D=kus.sbor_po_kusochkam(&D);


    }


 cout <<"__________________________________________________________________"<<endl;

     cout<< "ТЕПЕРЬ ВЫБЕРАЙТЕ РАЗМЕР: 1 - БОЛЬШАЯ, 2 - МАЛЕНЬКАЯ "<<endl;
     Pizza_interface *pee = new Pizza_cheese;
     int b;
     cin >>b;
     int size_of_b = pee->size_of(&b);
     cout <<"__________________________________________________________________"<<endl;



    //cout << "Hello world!" << endl;
    return 0;
}
