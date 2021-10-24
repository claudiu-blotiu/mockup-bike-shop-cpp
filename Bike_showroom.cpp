#include"ViewUser.h"

int main()
{
  
    Customer f(2, "Bogdan", "0744", "email", "parole", "work", "bogdanB");

    ViewUser view(f);

    //view.save_insure();

    view.rent();
  
   
    
    /*ControlBike f;

    Bike g=f.get_product_cos(3);

    cout<<g.description();*/

    /*ControlOrderDetails f;

    int ct = 0;

    OrderDetails*g= f.getProducts(1, ct);


        cout << g->description();*/
   
    
    

}

