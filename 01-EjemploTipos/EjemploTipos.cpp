#include <string>
#include <cassert>

int main()
{
	//char
	
	assert('B'!='C');
	assert('U'-'T'==1);
	assert('A'=='a');
	assert('1'!='2'+'1');

    
	//bool
    
    assert(true==true);
    assert(not false);
    assert(true==('a'=='a'));
    assert(false!=true and true or false);
    
    
    //string
    
    assert("Hola"=="Hola");
    assert("algoritmO"!="algoritmo");
    assert("120">="100");
    assert("asap"<="asapa");
    
    
    //unsigned
    
    assert(1u==1u);
    assert(3u==2u+1u);
    assert(140u>=139u);
    assert(2u==4u/2u);
    
    
    //int
    
    assert(1==1+1);
    assert(3==4-1);
    assert(0==0*1300);
    assert(2/2!=4/2);
    assert(-15<=2);
    assert(0==2%2);
    
    
    //double
    
    assert(1.1>=1.0);
    assert(3.2!=3);
    assert(1.2<=1);
    assert(2.2+2.1==4.3);
    assert(3.1-2.0==1.1);

}
