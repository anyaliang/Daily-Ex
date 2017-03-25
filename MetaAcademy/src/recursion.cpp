/* 
 * TODO: put your own comments here. Also you should leave comments on
 * each of your methods.
 */

#include <math.h>
#include "recursion.h"
#include "map.h"
#include "vector.h"
#include "set.h"
#include "gwindow.h"
#include "gobjects.h"
#include "tokenscanner.h"

using namespace std;

/*
 * 最大公分母 Greatest Common Denominator
 */
int gcd(int a, int b) {
    if(b==0) {
        cout << "gcd(" << a << ", " << b << ") = " << a << endl;
        return a;
    }
    else {
        cout << "gcd(" << a << ", " << b << ") = " << "gcd(" << b << ", " << a%b << ")" << endl;
        return gcd(b, a%b);
    }
}

/*
 * Serpinskii 分形
 */
void serpinskii(GWindow &w, int leftX, int leftY, int size, int order) {
    cout << "[recursion serpinskii called]" << endl;
}


int floodFill(GBufferedImage& image, int x, int y, int newColor) {
    // your code here
    cout << "[recursion flood fill called]" << endl;
    return 0;
}


void personalCurriculum(Map<string, Vector<string>> & prereqMap,string goal) {
    // your code here
    cout << "[recursion personal curriculum called]" << endl;
}

string generate(Map<string, Vector<string> > & grammar, string symbol) {
    // your code here
    cout << "[recursion generate called]" << endl;
    return "";
}
