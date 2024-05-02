https://www.geeksforgeeks.org/operator-precedence-and-associativity-in-c/    



/**
 * Binary Operator -  (+,  -,  *,   /,   %)

Precision in calculation (  int  <  float  <  double)

{ *, /, % }  -  Arithmetic Operators(They have L to R precedence)   >   {+, -}   -   Arithmetic Operators(They have L to R precedence)
 
***/


/** Unary Operator
 * 
 * {  Post increment,  Pre increment,   Post decrement,  Pre decrement  }
 * 
 * 
*/

/*    Unary Operator    */
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    cout<<a++<<endl;
    cout<<++a<<endl;
    cout<<a--<<endl;
    cout<<--a<<endl;

    cout<<4*13.8<<endl;
}



/** Unary Operator
*/

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = a--;
    cout<<b<<endl<<a<<endl;

    
}


/**  Comparison Operator    {==, !=, >, <, >=, <=} */
/**   {{>  ,  <,   >=,  <=} (They have L to R precedence)  >    {==, !=} (They have L to R precedence)}*/



/**  Logical Operators    {&&, ||, !}   */

#include<iostream>
#include<stdbool.h>
using namespace std;

int main(){
    bool a = 10;
    bool b = 20;
    cout<<(a && b)<<endl; 
    cout<<(a || b)<<endl; 
    cout<<!(a && b)<<endl;
    cout<<!32<<endl;
}



/**   Bitwise Operator
 * 
 * {  &  ,  |  ,  ^  ,  ~  ,  <<  ,  >>  }
 **/

//Left shift  aur   Right shift


// In left shift,  0 is added to the right side and leftmost bit is removed
// In right shift,  0 is added to the left side and rightmost bit is removed


// In left shift,  the number is multiplied by 2
// In right shift,  the number is divided by 2




/**  Comlement bitwise operator    {~}   --   Alter the bits of a number*/
/** In  1st complement bitwise operator,  0 is changed to 1 and 1 is changed to 0*/
/** In  2nd complement bitwise operator,  1 is added to the binary no. obtained from 1st complement*/
/**    {<<,   >>}   >    {&,   |,   ^}*/


#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = ~a;
    cout<<b<<endl;
}



#include<iostream>
using namespace std;
int main(){
    int ans = 2<<3;
    cout<<"My answer is :"<<ans<<endl;
}


#include<iostream>
using namespace std;
int main(){
    int ans = ~(-10);
    cout<<"My answer is :"<<ans<<endl;
}


//  In complement bitwise operator, positive number is changed to negative(3 -->  -4) and negative number is changed to positive  (-4  --->  3)


#include<iostream>
using namespace std;
int main(){
    if(5>4>3){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}



