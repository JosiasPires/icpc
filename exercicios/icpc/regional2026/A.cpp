#include <bits/stdc++.h>

using namespace std;

double calc(double ci, double vi){
    double v = ((ci-vi)/(ci+vi));
    return v;
}

int main(){
    int a, b, cx, vx, bx, cxx = 0, vxx= 0;
    cin >> a;

    vector<int> c;
    vector<int> v;

    for(int i=0;i<a;i++){
        cin >> cx >> vx;
        cxx += cx;
        vxx += vx;
        c.push_back(cxx);
        v.push_back(vxx);
    }

    cin >> b;
    for(int i=0;i<b;i++){
        cin >> bx;

        double result = calc(c[bx-1], v[bx-1]);

        if(result > 0){
            cout << "COMPRA" << '\n';
        }else if(result == 0){
            cout << "NEUTRO" << '\n';
        }else if(result < 0){
            cout << "VENDA" << '\n';
        }
    }
}