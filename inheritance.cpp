// single inheritance 
// multiple inheritance 
// heirechial inheritance 
// diamond problem m




#include<iostream>
uisng namespace std;
class tyre{
public:
int x;
private:
int y;
protected:
int z;
};
class car: public tyre{
    // x will be public
    // y will be private
    // z will be protected 
} 
class bike: private tyre{
        // x will be private
    // y will be inaccesible
    // z will be  private

}
class cycle: protected tyre{
        // x will be protected
    // y will be inaccesible
    // z will be  protected

}