/******************************************************************************
Copyright (c) 2017-2018 Origin Quantum Computing Co., Ltd.. All Rights Reserved.



Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software

distributed under the License is distributed on an "AS IS" BASIS,

WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

See the License for the specific language
governing permissions and
limitations under the License.
*******************************************************************************/
#include "QRFileController.h"
#include <iostream>
#include "QR.h"

using namespace std;
//#define N 20

void kernel();
void MAJ(qubit& a, qubit& b, qubit&c);
void MAJ(qRefList a, qRefList b, qubit& in);
//void classtoQu(qRefList a, int C);
int main()
{
	runQKernel(kernel);
    
    getchar();
    return 0;
}
void modmul_913_7(qRefList a, qRefList b, int m)
{
    //c2+2+2+1+1h2+2h2h2h2h2+2+2+2+2
    copy(a, b);
    modadd(b, a,m);
    modadd(b, a, m);
    modadd(a, b, m);
    modadd(a, b, m);
    modhalf(b, m);
    modadd(b, a, m);
    modhalf(b, m);
    modhalf(b, m);
    modhalf(b, m);
    modhalf(b, m);
    modadd(b, a, m);
    modadd(b, a, m);
    modadd(b, a, m);
    modadd(b, a, m);
}
void modmul_913_49(qRefList a, qRefList b, int m)
{
    //c2+1+2+1+2+2+1+2+1h2+2h2+2+2+2+2
    copy(a, b);
    modadd(a, b, m);
    modadd(b, a, m);
    modadd(a, b, m);
    modadd(b, a, m);
    modadd(b, a, m);
    modadd(a, b, m);
    modadd(b, a, m);
    modadd(a, b, m);
    modhalf(b, m);
    modadd(b, a, m);
    modhalf(b, m);
    modadd(b, a, m);
    modadd(b, a, m);
    modadd(b, a, m);
    modadd(b, a, m);

}
void kernel()
{
    qVec a(4);
    qRefList c;
    for (size_t i = 0; i < 4; i++)
    {
        c.push_back(&a[i]);
    }
    vector<double> b(16, 0.125);
    /*
    for (int i = 0; i < 8; i++)
    {
        b[i] = 0.02;
    }
    for (int i = 8; i < 14; i++)
    {
        b[i] = 0.1;
    }
    */
    b[0] = 0.118;
    b[1] = 0.24;
    b[2] = 0.31;
    b[3] = 0.1514;
    b[4] = 0.1;
    b[5] = 0.03;
    b[6] = 0.015;
    b[7] = 0.01;
    b[8] = 0.007;
    b[9] = 0.006;
    b[10] = 0.005;
    b[11] = 0.004;
    b[12] = 0.002;
    b[13] = 0.001;
    b[14] = 0.0005;
    b[15] = 0.0001;
    quantumredpacketnew(c, b);
   // Measure(a[2]);
}
/*
    qVec a(14);
    //qubit b;
   // qubit tem;
    qRefList c, d;
    for (size_t i = 0; i < 7; i++)
    {
        c.push_back(&a[i]);
    }
    for (size_t i = 7; i < 14; i++)
    {
        d.push_back(&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
      //  cout << "i\t" << modreverse(1<<i, 913) << endl;
    }
    //modmul_913_49(c, d, 913);
    //constModExp(c,d,4, 77);
   // constantModMul(c, 49, 913);
    //constadder(c, 34);
   // adder(c,d);
    classtoQu(c, 63);
    classtoQu(d, 76);
    //adder(c, d);
    modhalf(c, 91);
    //constadder(c, 23);
   // modsub(c, d, 91);
    //isCarry(c, d, tem);
   // adder(c, d, tem);
    //constadder(c, d, 23);
    //qft(c);
   // qftreverse(c);
    for (size_t i = 0; i < 5; i++)
    {
      //  Measure(a[i]);
    }
}
*/


