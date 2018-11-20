#include <iostream>
#include <string>
using namespace std;


class Pizzash{
   private:
    string name;
    int coast;
    int size;


    public:

        int num_pizza(int *n){
            int l = *n;
            int otv;


            if ( l == 1 ) {
               string p = "peperoni";
                int c1 = 100;
                otv =  c1;
                cout << "åå íàçâàíèå  :"<< p<<"   åå öåíà:"<< otv<< endl ;

            }
            else if ( l ==2 ){
                string g = "gavaii";
                int c2 = 120;
                otv = c2;
                cout << "åå íàçâàíèå:  "<< g<<"   åå öåíà:"<< otv<< endl ;
            }
            else if ( l==3 ){
                string m = "meet";
                int c3 = 130;
                otv = c3;
                cout << "åå íàçâàíèå:  "<< m<<"   åå öåíà:"<< otv << endl;
            }
            else if ( l==4 ){
                string f = "fish";
                int c4 = 115;
               otv = c4;
               cout << "åå íàçâàíèå:  "<< f<<"   åå öåíà:"<< otv << endl;
            }
            else{
               string ch = "chees";
                int c5 = 90;
                otv = c5;
                cout << "åå íàçâàíèå:  "<< ch<<"   åå öåíà:"<< otv<< endl ;
            }



        }


      void choose(string pi_name,int pi_coast){
          name = pi_name;
          coast = pi_coast;


      }

      void showmenu(){
          cout<< "íàçâàíèå ïèööû:  " << name <<"  "<< "öåíà: " << coast << endl;

      }
      int size_of(int *s){
          int si;
          si = *s;
          if ( si == 1 ) {
               string sb = "big";
                cout << "ðàçìåð:  "<< sb<< endl ;
            }
            else{
               string sm = "small";
               cout << "ðàçìåð:  "<< sm<< endl ;
            }


      }



};

class Pizzaad: virtual public Pizzash{
    private:
       string additive; //äîáàâêà
       int c_additive;
       string tolsh;
    public:


        void choose(string pi_additive,int co_additive){
            additive = pi_additive;
            c_additive = co_additive;
        }

         void showmenu(){
          cout<< "Íàçâàíèå äîáàâêè: " << additive<< "  "<< "öåíà: " << c_additive<< endl;
      }


      int num_add(int *n){
            int l = *n;
            int otv;


            if ( l == 1 ) {
               string p = "cucumber";
                int c1 = 10;
                otv =  c1;
                cout << "åå íàçâàíèå  :"<< p<<"   åå öåíà:"<< otv<< endl ;

            }
            else if ( l ==2 ){
                string g = "cheese";
                int c2 = 5;
                otv = c2;
                cout << "åå íàçâàíèå:  "<< g<<"   åå öåíà:"<< otv<< endl ;
            }
            else if ( l==3 ){
                string m = "tomato";
                int c3 = 10;
                otv = c3;
                cout << "åå íàçâàíèå:  "<< m<<"   åå öåíà:"<< otv << endl;
            }
            else if ( l==4 ){
                string f = "meet";
                int c4 = 15;
               otv = c4;
               cout << "åå íàçâàíèå:  "<< f<<"   åå öåíà:"<< otv << endl;
            }
            else{
               string ch = "nuts";
                int c5 = 30;
                otv = c5;
                cout << "åå íàçâàíèå:  "<< ch<<"   åå öåíà:"<< otv<< endl ;
            }



        }




};




int main()
{
    setlocale(LC_ALL, "");

    cout<<"ÏÈÖÖÛ"<<endl;

    Pizzash pe1,pe2,pe3,pe4,pe5;
     pe1.choose("1) peperoni ", 100);
     pe2.choose("2) gavaii ", 120);
     pe3.choose("3) meet ", 150);
     pe4.choose("4) fish ", 115);
     pe5.choose("5) chees ", 90);
     pe1.showmenu();
     pe2.showmenu();
     pe3.showmenu();
     pe4.showmenu();
     pe5.showmenu();

     Pizzash pe;
     cout << "ÂÂÅÄÈÒÅ ÍÎÌÅÐ ÆÅËÀÅÌÎÉ ÏÈÖÖÛ:   "<<endl;
     int a;
     cin >> a;
     int num_a = pe.num_pizza(&a);

     cout <<"__________________________________________________________________"<<endl;

     cout<< "ÒÅÏÅÐÜ ÂÛÁÅÐÀÉÒÅ ÐÀÇÌÅÐ: 1 - ÁÎËÜØÀß, 2 - ÌÀËÅÍÜÊÀß "<<endl;
     Pizzash pee;
     int b;
     cin >>b;
     int size_of_b = pee.size_of(&b);
 cout <<"__________________________________________________________________"<<endl;
     cout<<"ÄÎÁÀÂÊÈ"<<endl;

  Pizzaad p1,p2,p3,p4,p5;


     p1.choose("1) cucumber ", 10);
     p2.choose("2)cheese ", 5);
     p3.choose("3) tomato ", 10);
     p4.choose("4) meet ",15);
     p5.choose("5) nuts ",10);

     p1.showmenu();
     p2.showmenu();
     p3.showmenu();
     p4.showmenu();
     p5.showmenu();

 Pizzaad pEADD;
     cout << "ÂÂÅÄÈÒÅ ÍÎÌÅÐ ÆÅËÀÅÌÎÉ ÄÎÁÀÂÊÈ:   "<<endl;
     int C;
     cin >> C;
     int num_C = pEADD.num_add(&C);

     cout <<"__________________________________________________________________"<<endl;




    //cout << "Hello world!" << endl;
    return 0;
}
